import os

from sklearn.metrics.pairwise import cosine_distances
os.environ['TF_CPP_MIN_LOG_LEVEL'] = '2'

import gc
import boun_utils as boun
import numpy as np
import pandas as pd
import tensorflow as tf
import tensorflow_similarity as tfs


def euclidean_distance(vects):
    x, y = vects
    
#   p-norm calculation (ord = p)
    dist = tf.norm(x - y, ord=2, axis=-1, keepdims = True)
    return dist

def create_gru_network_for_training(input_shape, total_cells, initial_bias, show_summary=True):
    in_left = tf.keras.layers.Input(shape=input_shape, name = "left")
    in_right = tf.keras.layers.Input(shape=input_shape, name = "right")

    model = tf.keras.models.Sequential([
                                         #tf.keras.layers.Normalization(),
                                         tf.keras.layers.BatchNormalization(),
                                         tf.keras.layers.Bidirectional(tf.keras.layers.LSTM(total_cells, return_sequences=True, recurrent_dropout=0.2)),
                                         tf.keras.layers.Dropout(0.2),
                                         tf.keras.layers.BatchNormalization(),
                                         tf.keras.layers.Bidirectional(tf.keras.layers.LSTM(total_cells)),
                                         tf.keras.layers.UnitNormalization(),
                                         tf.keras.layers.Dense(total_cells, activation='sigmoid', bias_initializer=tf.keras.initializers.Constant(initial_bias))
                                       ])

    # model = tf.keras.models.Sequential([
    #                                      #tf.keras.layers.Normalization(),
    #                                      tf.keras.layers.Lambda(lambda x: x/255.0),
    #                                      tf.keras.layers.BatchNormalization(),
    #                                      tf.keras.layers.GRU(total_cells, recurrent_dropout=0.0),
    #                                      tf.keras.layers.UnitNormalization()
    #                                    ])
    
    encoded_left = model(in_left)
    encoded_right = model(in_right)

    outputs = tf.keras.layers.Lambda(euclidean_distance)([encoded_left,encoded_right])
    siamese_model = tf.keras.models.Model(inputs=[in_left, in_right],
                                          outputs=outputs)

    # plot model graph
    if show_summary:
        tf.keras.utils.plot_model(siamese_model, show_shapes=True, show_layer_names=True, show_layer_activations=True, expand_nested=True)
        siamese_model.summary(expand_nested=True, print_fn = boun.add_to_log)

    return siamese_model


def train_and_test_for_user(user,
                            dataset, 
                            test_imposter_count, 
                            total_cells,
                            test_average_user_count,
                            batchsize,
                            epochs,
                            snr_db = None
                           ):

    # get data which will be used during training
    train_data_pos = boun.get_train_data(user, dataset, filter_outliers=True).values
    train_data_neg = boun.get_imposter_data_using_others(user, dataset, 50, 5).values
    #train_data_neg = boun.get_imposter_data_using_submax(user, dataset).values
    #train_data_neg = boun.get_imposter_data_using_smote(user, dataset).values
    #train_data_neg = boun.get_imposter_data_using_svm_smote(user, dataset).values
    #train_data_neg = boun.get_imposter_data_using_svdd(user, dataset).values
    #train_data_neg = boun.get_imposter_data_using_gurobi(user, dataset, boun.load_cmu_sphere_csv()).values
    #train_data_neg = boun.get_imposter_data_using_random_on_gurobi_outer_surface(user, dataset, boun.load_cmu_sphere_csv(), 10000).values

    # get data which will be used during testing!
    test_data_pos = boun.get_scoring_data(user, dataset).values
    test_data_neg = boun.get_imposter_data(user, dataset, test_imposter_count).values


    # add noise ??
    if snr_db != None:
        train_data_pos = boun.add_awgn(train_data_pos, snr_db)
        train_data_neg = boun.add_awgn(train_data_neg, snr_db)
        test_data_pos = boun.add_awgn(test_data_pos, snr_db)
        test_data_neg = boun.add_awgn(test_data_neg, snr_db)

    #train_data_pos, train_data_neg, test_data_pos, test_data_neg = boun.time2norm(train_data_pos, train_data_neg, test_data_pos, test_data_neg)
    #train_data_pos, train_data_neg, test_data_pos, test_data_neg = boun.time2gramian(train_data_pos, train_data_neg, test_data_pos, test_data_neg, normalize=True)
    #train_data_pos, train_data_neg, test_data_pos, test_data_neg = boun.time2markov(train_data_pos, train_data_neg, test_data_pos, test_data_neg, normalize=True)
    train_data_pos, train_data_neg, test_data_pos, test_data_neg = boun.time2recurrence_plots(train_data_pos, train_data_neg, test_data_pos, test_data_neg, normalize=True)
    
    
    
    validation_percent = 0.1
    split_count_pos = round(train_data_pos.shape[0] * validation_percent)
    train_data_pos_valid = train_data_pos[:split_count_pos]
    train_data_pos_train = train_data_pos[split_count_pos:]

    split_count_neg = round(train_data_neg.shape[0] * validation_percent)
    train_data_neg_valid = train_data_neg[:split_count_neg]
    train_data_neg_train = train_data_neg[split_count_neg:]

    # temporaryly use test data set for validation during training
    #train_data_pos_valid = test_data_pos
    #train_data_neg_valid = test_data_neg
    

    compare_over_genuine_count = min(test_average_user_count, train_data_pos_train.shape[0])
    if compare_over_genuine_count <= 0:
        compare_over_genuine_count = train_data_pos_train.shape[0]
    
    # prepare train data
    train_pos_pair_x_train = boun.create_data_for_contrastive_training(train_data_pos_train, train_data_pos_train, compare_over_genuine_count)
    train_pos_pair_y_train = np.ones(train_pos_pair_x_train.shape[1])
    
    train_neg_pair_x_train = boun.create_data_for_contrastive_training(train_data_pos_train, train_data_neg_train, compare_over_genuine_count)
    train_neg_pair_y_train = np.zeros(train_neg_pair_x_train.shape[1])
    
    train_pair_x_train = np.append(train_pos_pair_x_train, train_neg_pair_x_train, axis=1)
    train_pair_y_train = np.append(train_pos_pair_y_train, train_neg_pair_y_train, axis=0)
    

    # prepare validation data
    train_pos_pair_x_valid = boun.create_data_for_contrastive_training(train_data_pos_train, train_data_pos_valid, compare_over_genuine_count)
    train_pos_pair_y_valid = np.ones(train_pos_pair_x_valid.shape[1])
    
    train_neg_pair_x_valid = boun.create_data_for_contrastive_training(train_data_pos_train, train_data_neg_valid, compare_over_genuine_count)
    train_neg_pair_y_valid = np.zeros(train_neg_pair_x_valid.shape[1])
    
    train_pair_x_valid = np.append(train_pos_pair_x_valid, train_neg_pair_x_valid, axis=1)
    train_pair_y_valid = np.append(train_pos_pair_y_valid, train_neg_pair_y_valid, axis=0)


    train_x = tf.data.Dataset.zip((
                            tf.data.Dataset.from_tensor_slices(train_pair_x_train[0]),
                            tf.data.Dataset.from_tensor_slices(train_pair_x_train[1])))

    train_y = tf.data.Dataset.zip((
                            tf.data.Dataset.from_tensor_slices(train_pair_y_train)))
    
    train_dataset =  tf.data.Dataset.zip((train_x, train_y)).shuffle(262144).batch(batchsize)
    

    # zip validation dataset
    valid_x = tf.data.Dataset.zip((
                            tf.data.Dataset.from_tensor_slices(train_pair_x_valid[0]),
                            tf.data.Dataset.from_tensor_slices(train_pair_x_valid[1])))

    valid_y = tf.data.Dataset.zip((
                            tf.data.Dataset.from_tensor_slices(train_pair_y_valid)))

    validation_dataset =  tf.data.Dataset.zip((valid_x, valid_y)).shuffle(262144).batch(batchsize)    
    


    tn_metrics = [
            #tf.keras.metrics.Precision(name='precision'),
            #tf.keras.metrics.Recall(name='recall'),
            #tf.keras.metrics.TruePositives(name='tp'),
            #tf.keras.metrics.FalsePositives(name='fp'),
            #tf.keras.metrics.TrueNegatives(name='tn'),
            #tf.keras.metrics.FalseNegatives(name='fn'),
            tf.keras.metrics.AUC(name='auc'),
            tf.keras.metrics.AUC(name='prc', curve='PR'), # precision-recall curve
    ]

    tn = create_gru_network_for_training(input_shape=(compare_over_genuine_count, train_data_pos_train.shape[1]),
                                         total_cells=total_cells,
                                         initial_bias=np.log([train_pos_pair_x_train.shape[1] / train_neg_pair_x_train.shape[1]]),
                                         show_summary=(user=='2'))

    #tfs.losses.TripletLoss(distance='l2', positive_mining_strategy='hard', negative_mining_strategy='semi-hard', margin=1.0)
    tn.compile(loss=boun.ContrastiveLoss(margin=0.1),
            optimizer=tf.keras.optimizers.Adam(learning_rate=0.0001, epsilon=1e-8), 
            metrics=tn_metrics)

    #tn.compile(loss=tfa.losses.ContrastiveLoss(margin=0.1),
    #           optimizer=tf.keras.optimizers.Adam(learning_rate=0.0001, epsilon=1e-8), 
    #           metrics=tn_metrics)
    
    model_file = '{} - {} - Epochs_{} - Cells_{}.keras'.format(os.path.splitext(os.path.basename(__file__))[0], user, epochs, total_cells)

   # if not os.path.isfile(boun.storage_path() + model_file):
    if True:        
        pos = train_pos_pair_x_train.shape[1]
        neg = train_neg_pair_x_train.shape[1]
        total = pos + neg
        weight_for_0 = (1 / neg) * (total / 2.0)
        weight_for_1 = (1 / pos) * (total / 2.0)
        class_weight = {0: weight_for_0, 1: weight_for_1}

        # train over triplet loss
        # tn.fit(x = [train_pair_x[0], train_pair_x[1]],
        #        y = train_pair_y,
        #        epochs=epochs,
        #        batch_size=batchsize,
        #        shuffle = False,
        #        validation_split = 0.0
        #       )

        early_stopping = tf.keras.callbacks.EarlyStopping(
            monitor='val_loss',
            verbose=1,
            patience=50,
            mode='min',
            start_from_epoch=10,
            restore_best_weights=True)
    
        history = tn.fit(train_dataset,
                         epochs=epochs,
                         batch_size=batchsize,
                         class_weight = class_weight,
                         validation_data = validation_dataset,
                         callbacks = [early_stopping]
                        )
        
        boun.plot_losses(history, model_file)

        # save svm network for coefficients
        tn.save(boun.storage_path() + model_file)
    else:
        # load svm network coefficients
        tn = tf.keras.models.load_model(boun.storage_path() + model_file, safe_mode=False)
            
    # prepare the test inputs
    test_input_genuine_pair = boun.create_data_for_contrastive_testing(train_data_pos_train, test_data_pos, compare_over_genuine_count)
    test_input_imposter_pair = boun.create_data_for_contrastive_testing(train_data_pos_train, test_data_neg, compare_over_genuine_count)

    test_input = np.append(test_input_genuine_pair, test_input_imposter_pair, axis=1)
    

    # Final evaluation of the model
    outputs = tn.predict([ test_input[0], test_input[1] ])
    outputs = np.reshape(outputs, (len(outputs),))

    user_score = np.zeros(len(test_data_pos))
    imposter_score = np.zeros(len(test_data_neg))

    inx = 0
    for n in range(len(user_score)):
        user_score[n] = outputs[inx]
        inx = inx + 1

    for n in range(len(imposter_score)):
        imposter_score[n] = outputs[inx]
        inx = inx + 1

    #####
    thresholds = np.sort(pd.unique(np.concatenate([float('inf'), user_score, imposter_score], axis=None)))[::-1]    
    

    acc = 0.0
    far = np.zeros(len(thresholds))
    frr = np.zeros(len(thresholds))
    P = len(user_score)
    N = len(imposter_score)

    for n in range(len(thresholds)):
        th = thresholds[n]

        TP = len(user_score[user_score < th])
        FN = len(user_score[user_score >= th])

        FP = len(imposter_score[imposter_score < th])
        TN = len(imposter_score[imposter_score >= th])

        # False Positive Rate
        FPR = FP / (FP + TN)

        # False Negative Rate
        FNR = FN / (FN + TP)
        ACC = (TP + TN) / (P + N)

        far[n] = FPR
        frr[n] = FNR

        if FPR > FNR:
            acc = ACC

    eer = boun.calculateEqualError(frr, far)
    zmr = boun.calculateMissRate(frr, far)

    boun.plot_roc(os.path.splitext(os.path.basename(__file__))[0], user, far, frr, epochs, total_cells, test_average_user_count, test_imposter_count, batchsize)
    

    del train_data_pos
    del train_data_neg
    del test_data_pos
    del test_data_neg
    del train_data_pos_train
    del train_data_pos_valid
    del train_data_neg_train
    del train_data_neg_valid
    del train_pos_pair_x_train
    del train_pos_pair_y_train
    del train_neg_pair_x_train
    del train_neg_pair_y_train
    del train_pair_x_train
    del train_pair_y_train
    del train_pos_pair_x_valid
    del train_pos_pair_y_valid
    del train_neg_pair_x_valid
    del train_neg_pair_y_valid
    del train_pair_x_valid
    del train_pair_y_valid
    del train_x
    del train_y
    del train_dataset
    del valid_x
    del valid_y
    del validation_dataset
    del tn_metrics
    del tn
    del test_input_genuine_pair
    del test_input_imposter_pair
    del test_input
    del outputs
    del user_score
    del imposter_score
    del thresholds
    gc.collect()

    return eer, zmr, acc


def train_and_test_users(dataset,
                         test_imposter_count = 5,
                         total_cells = 128,
                         limit_user_count = -1,
                         test_average_user_count = -1,
                         batchsize = 200,
                         epochs = 50,
                         snr_db = None):

    subjects = pd.unique(dataset.subject)

    subject_count = min(limit_user_count, len(subjects))
    if subject_count <= 0:
        subject_count = len(subjects)

    eer = np.zeros(subject_count)
    zmr = np.zeros(subject_count)
    acc = np.zeros(subject_count)
    
    for k in range(subject_count):
        s = subjects[k]

        #if not k in [0, 11, 15, 22, 25, 31, 40, 47]: 
        #    continue

        i_eer, i_zmr, i_acc = train_and_test_for_user(user = s,
                                                      dataset=dataset,
                                                      test_imposter_count=test_imposter_count,
                                                      total_cells=total_cells,
                                                      test_average_user_count=test_average_user_count,
                                                      batchsize=batchsize,
                                                      epochs=epochs,
                                                      snr_db=snr_db
                                                    )
        eer[k] = i_eer
        zmr[k] = i_zmr
        acc[k] = i_acc
        
        boun.add_to_log('   User No: {:2d}   SNR_db: {}   i_EER = {:.3f}   i_ZMR = {:.3f}   i_ACC = {:.3f}'.format(k, snr_db, i_eer, i_zmr, i_acc))

    boun.add_to_log('Results for epochs = {:.3f} SNR_db: {} test_imposter_count = {:.3f} total_cells = {:.3f} limit_user_count = {:.3f} test_average_user_count = {:.3f} batchsize = {:.3f}'.format(epochs, snr_db, test_imposter_count, total_cells, limit_user_count, test_average_user_count, batchsize))
    boun.add_to_log('i_EER = [{}] '.format(", ".join(['{:.3f}'.format(f) for f in eer])))
    boun.add_to_log('EER mean = {:.3f}   std = {:.3f}'.format(np.mean(eer), np.std(eer)))
    boun.add_to_log('ZMR mean = {:.3f}   std = {:.3f}'.format(np.mean(zmr), np.std(zmr)))
    boun.add_to_log('ACC mean = {:.3f}   std = {:.3f}'.format(np.mean(acc), np.std(acc)))
    boun.add_to_log('------------------------------------------------------------------')
    boun.add_to_log('')

    return np.mean(eer), np.mean(zmr)
    

    #best_eer, svm_nu, svm_gamma = optimize_svm_parameters(subjects, svm_train_pos, svm_test_genuine, svm_test_imposter)

def main():
    # fix random seed for reproducibility
    boun.det_session(7)

    #tf.config.experimental_run_functions_eagerly(True)

    # initialize logger module for console and file at the same time
    boun.initialize_logging('{}.log'.format(os.path.splitext(os.path.basename(__file__))[0]))

    # load dataset
    remote_data = boun.load_remote_data_csv()
    local_dd_data = boun.remote_to_local_dd(remote_data)
    udp_data = boun.remote_to_udp(remote_data)
    tcp_nagle_data = boun.remote_to_tcp_nagle(remote_data)
    tcp_data = boun.remote_to_tcp(remote_data)
    tcp_aes128_data = boun.remote_to_tcp_aes128(remote_data)
    tcp_aes256_data = boun.remote_to_tcp_aes256(remote_data)


    snr_eer = []
    snr_zmr = []
    eer, zmr = train_and_test_users(dataset = tcp_aes256_data,
                                    test_imposter_count = 5,
                                    total_cells = 32,
                                    limit_user_count = -1,
                                    test_average_user_count = 128,
                                    batchsize = 32,
                                    epochs=200,
                                    snr_db=None)
    
    snr_eer = np.append(snr_eer, eer)
    snr_zmr = np.append(snr_zmr, zmr)

    min_eer = np.min(snr_eer)
    max_eer = np.max(snr_eer)
    min_zmr = np.min(snr_zmr)
    max_zmr = np.max(snr_zmr)
    slope_eer = 100.0*(max_eer - min_eer) / 80.0
    slope_zmr = 100.0*(max_zmr - min_zmr) / 80.0
    boun.add_to_log('Average Slope of EER = {:.3f} %/dB [min: {:.3f}, max: {:.3f}]    Average Slope of ZMR = {:.3f} %/dB [min: {:.3f}, max: {:.3f}]'.format(slope_eer, min_eer, max_eer, slope_zmr, min_zmr, max_zmr))
    boun.add_to_log('------------------------------------------------------------------')
    boun.add_to_log('')

if __name__ == "__main__":
    main()
