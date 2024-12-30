import os

import sys
sys.path.append("./SVDD-Python/src")

from BaseSVDD import BaseSVDD

import logging
from pickletools import UP_TO_NEWLINE
import platform
from re import X
import psutil
import cpuinfo  #py-cpuinfo

import random as rn
import numpy as np
import pandas as pd
import tensorflow as tf
import itertools
from pyts.image import GramianAngularField
from pyts.image import MarkovTransitionField
from pyts.image import RecurrencePlot

from collections import Counter
from imblearn.over_sampling import SMOTE
from imblearn.over_sampling import SVMSMOTE
from imblearn.over_sampling import ADASYN

from sklearn.svm import OneClassSVM
from sklearn.decomposition import KernelPCA
from sklearn import preprocessing

import scipy

import matplotlib.pyplot as plt
from shapely.geometry import LineString
import gurobipy as gp
from gurobipy import GRB
import n_sphere # details: https://pypi.org/project/n-sphere/

# pure data has 21 features for ".tie5Roanl"
# Key1.1.H        ---> .
# Key1.2.UD	
# Key2.1.H        ---> t
# Key2.2.UD	
# Key3.1.H        ---> i
# Key3.2.UD	
# Key4.1.H        ---> e
# Key4.2.UD	
# Key5.1.H        ---> 5
# Key5.2.UD	
# Key6.1.H        ---> R
# Key6.2.UD	
# Key7.1.H        ---> o
# Key7.2.UD	
# Key8.1.H        ---> a
# Key8.2.UD	
# Key9.1.H        ---> n
# Key9.2.UD	
# Key10.1.H       ---> l
# Key10.2.UD	
# Key11.1.H       ---> Return
def load_pure_data_csv():
    data = pd.read_csv("DSL-StrongPasswordData_Pure.csv")
    return data

def load_remote_data_csv():
    data = pd.read_csv("DSL-StrongPasswordData-Remote-All.csv")
    return data

def remote_to_local_dd(data):
    df = pd.DataFrame(columns=["subject","sessionIndex","rep","Key1.1","Key2.1","Key3.1","Key4.1","Key5.1","Key6.1", "Key7.1","Key8.1","Key9.1","Key10.1"],
                    dtype=pd.Float64Dtype())
    
    # copy initials
    df["subject"] = data["subject"]
    df["sessionIndex"] = data["sessionIndex"]
    df["rep"] = data["rep"]

    # [5 8 11 14 17 20 23 26 29 32] original DD features only
    df["Key1.1"] = data["DDperiodt"]
    df["Key2.1"] = data["DDti"]
    df["Key3.1"] = data["DDie"]
    df["Key4.1"] = data["DDefive"]
    df["Key5.1"] = data["DDfiveShiftr"]
    df["Key6.1"] = data["DDShiftro"]
    df["Key7.1"] = data["DDoa"]
    df["Key8.1"] = data["DDan"]
    df["Key9.1"] = data["DDnl"]
    df["Key10.1"]= data["DDlReturn"]

    return df

def remote_to_udp(data):
    df = pd.DataFrame(columns=["subject","sessionIndex","rep","Key1.1","Key2.1","Key3.1","Key4.1","Key5.1","Key6.1", "Key7.1","Key8.1","Key9.1","Key10.1"],
                    dtype=pd.Float64Dtype())
    
    # copy initials
    df["subject"] = data["subject"]
    df["sessionIndex"] = data["sessionIndex"]
    df["rep"] = data["rep"]

    # 35:1:44    UDP
    df["Key1.1"] = data["UDP_DDperiodt"]
    df["Key2.1"] = data["UDP_DDti"]
    df["Key3.1"] = data["UDP_DDie"]
    df["Key4.1"] = data["UDP_DDefive"]
    df["Key5.1"] = data["UDP_DDfiveShiftr"]
    df["Key6.1"] = data["UDP_DDShiftro"]
    df["Key7.1"] = data["UDP_DDoa"]
    df["Key8.1"] = data["UDP_DDan"]
    df["Key9.1"] = data["UDP_DDnl"]
    df["Key10.1"]= data["UDP_DDlReturn"]

    return df

def remote_to_tcp_nagle(data):
    df = pd.DataFrame(columns=["subject","sessionIndex","rep","Key1.1","Key2.1","Key3.1","Key4.1","Key5.1","Key6.1", "Key7.1","Key8.1","Key9.1","Key10.1"],
                    dtype=pd.Float64Dtype())
    
    # copy initials
    df["subject"] = data["subject"]
    df["sessionIndex"] = data["sessionIndex"]
    df["rep"] = data["rep"]

    # 45:1:54    TCP_NAGLE
    df["Key1.1"] = data["TCP_NAGLE_DDperiodt"]
    df["Key2.1"] = data["TCP_NAGLE_DDti"]
    df["Key3.1"] = data["TCP_NAGLE_DDie"]
    df["Key4.1"] = data["TCP_NAGLE_DDefive"]
    df["Key5.1"] = data["TCP_NAGLE_DDfiveShiftr"]
    df["Key6.1"] = data["TCP_NAGLE_DDShiftro"]
    df["Key7.1"] = data["TCP_NAGLE_DDoa"]
    df["Key8.1"] = data["TCP_NAGLE_DDan"]
    df["Key9.1"] = data["TCP_NAGLE_DDnl"]
    df["Key10.1"]= data["TCP_NAGLE_DDlReturn"]

    return df

def remote_to_tcp(data):
    df = pd.DataFrame(columns=["subject","sessionIndex","rep","Key1.1","Key2.1","Key3.1","Key4.1","Key5.1","Key6.1", "Key7.1","Key8.1","Key9.1","Key10.1"],
                    dtype=pd.Float64Dtype())
    
    # copy initials
    df["subject"] = data["subject"]
    df["sessionIndex"] = data["sessionIndex"]
    df["rep"] = data["rep"]

    # 55:1:64    TCP
    df["Key1.1"] = data["TCP_DDperiodt"]
    df["Key2.1"] = data["TCP_DDti"]
    df["Key3.1"] = data["TCP_DDie"]
    df["Key4.1"] = data["TCP_DDefive"]
    df["Key5.1"] = data["TCP_DDfiveShiftr"]
    df["Key6.1"] = data["TCP_DDShiftro"]
    df["Key7.1"] = data["TCP_DDoa"]
    df["Key8.1"] = data["TCP_DDan"]
    df["Key9.1"] = data["TCP_DDnl"]
    df["Key10.1"]= data["TCP_DDlReturn"]

    return df

def remote_to_tcp_aes128(data):
    df = pd.DataFrame(columns=["subject","sessionIndex","rep","Key1.1","Key2.1","Key3.1","Key4.1","Key5.1","Key6.1", "Key7.1","Key8.1","Key9.1","Key10.1"],
                    dtype=pd.Float64Dtype())
    
    # copy initials
    df["subject"] = data["subject"]
    df["sessionIndex"] = data["sessionIndex"]
    df["rep"] = data["rep"]

    # 65:1:74    TCP_SSL_AES128_SSL_AES128
    df["Key1.1"] = data["TCP_SSL_AES128_DDperiodt"]
    df["Key2.1"] = data["TCP_SSL_AES128_DDti"]
    df["Key3.1"] = data["TCP_SSL_AES128_DDie"]
    df["Key4.1"] = data["TCP_SSL_AES128_DDefive"]
    df["Key5.1"] = data["TCP_SSL_AES128_DDfiveShiftr"]
    df["Key6.1"] = data["TCP_SSL_AES128_DDShiftro"]
    df["Key7.1"] = data["TCP_SSL_AES128_DDoa"]
    df["Key8.1"] = data["TCP_SSL_AES128_DDan"]
    df["Key9.1"] = data["TCP_SSL_AES128_DDnl"]
    df["Key10.1"]= data["TCP_SSL_AES128_DDlReturn"]

    return df


def remote_to_tcp_aes256(data):
    df = pd.DataFrame(columns=["subject","sessionIndex","rep","Key1.1","Key2.1","Key3.1","Key4.1","Key5.1","Key6.1", "Key7.1","Key8.1","Key9.1","Key10.1"],
                    dtype=pd.Float64Dtype())
    
    # copy initials
    df["subject"] = data["subject"]
    df["sessionIndex"] = data["sessionIndex"]
    df["rep"] = data["rep"]

    # 75:1:84    TCP_SSL_AES256
    df["Key1.1"] = data["TCP_SSL_AES256_DDperiodt"]
    df["Key2.1"] = data["TCP_SSL_AES256_DDti"]
    df["Key3.1"] = data["TCP_SSL_AES256_DDie"]
    df["Key4.1"] = data["TCP_SSL_AES256_DDefive"]
    df["Key5.1"] = data["TCP_SSL_AES256_DDfiveShiftr"]
    df["Key6.1"] = data["TCP_SSL_AES256_DDShiftro"]
    df["Key7.1"] = data["TCP_SSL_AES256_DDoa"]
    df["Key8.1"] = data["TCP_SSL_AES256_DDan"]
    df["Key9.1"] = data["TCP_SSL_AES256_DDnl"]
    df["Key10.1"]= data["TCP_SSL_AES256_DDlReturn"]

    return df
# CMU data has 31 features for ".tie5Roanl"
# For each keystroke it provides:
# H
# DD
# UD
def pure_to_cmu(data):
    df = pd.DataFrame(columns=["subject","sessionIndex","rep","H.period","DD.period.t","UD.period.t","H.t","DD.t.i","UD.t.i","H.i","DD.i.e","UD.i.e","H.e","DD.e.five","UD.e.five","H.five","DD.five.Shift.r","UD.five.Shift.r","H.Shift.r","DD.Shift.r.o","UD.Shift.r.o","H.o","DD.o.a","UD.o.a","H.a","DD.a.n","UD.a.n","H.n","DD.n.l","UD.n.l","H.l","DD.l.Return","UD.l.Return","H.Return"],
                      dtype=pd.Float64Dtype())
  
    # copy initials
    df["subject"] = data["subject"]
    df["sessionIndex"] = data["sessionIndex"]
    df["rep"] = data["rep"]

    # .
    df["H.period"] = data["Key1.1.H"]
    df["DD.period.t"] = data["Key1.1.H"] + data["Key1.2.UD"]
    df["UD.period.t"] = data["Key1.2.UD"]

    # t
    df["H.t"] = data["Key2.1.H"]
    df["DD.t.i"] = data["Key2.1.H"] + data["Key2.2.UD"]
    df["UD.t.i"] = data["Key2.2.UD"]

    # i
    df["H.i"] = data["Key3.1.H"]
    df["DD.i.e"] = data["Key3.1.H"] + data["Key3.2.UD"]
    df["UD.i.e"] = data["Key3.2.UD"]

    # e
    df["H.e"] = data["Key4.1.H"]
    df["DD.e.five"] = data["Key4.1.H"] + data["Key4.2.UD"]
    df["UD.e.five"] = data["Key4.2.UD"]

    # 5
    df["H.five"] = data["Key5.1.H"]
    df["DD.five.Shift.r"] = data["Key5.1.H"] + data["Key5.2.UD"]
    df["UD.five.Shift.r"] = data["Key5.2.UD"]

    # R
    df["H.Shift.r"] = data["Key6.1.H"]
    df["DD.Shift.r.o"] = data["Key6.1.H"] + data["Key6.2.UD"]
    df["UD.Shift.r.o"] = data["Key6.2.UD"]

    # o
    df["H.o"] = data["Key7.1.H"]
    df["DD.o.a"] = data["Key7.1.H"] + data["Key7.2.UD"]
    df["UD.o.a"] = data["Key7.2.UD"]

    # a
    df["H.a"] = data["Key8.1.H"]
    df["DD.a.n"] = data["Key8.1.H"] + data["Key8.2.UD"]
    df["UD.a.n"] = data["Key8.2.UD"]

    # n
    df["H.n"] = data["Key9.1.H"]
    df["DD.n.l"] = data["Key9.1.H"] + data["Key9.2.UD"]
    df["UD.n.l"] = data["Key9.2.UD"]

    # l
    df["H.l"] = data["Key10.1.H"]
    df["DD.l.Return"] = data["Key10.1.H"] + data["Key10.2.UD"]
    df["UD.l.Return"] = data["Key10.2.UD"]

    # Enter
    df["H.Return"] = data["Key11.1.H"]

    # compare the file below with orginal CMU dataset 
    #df.to_csv(index=False, path_or_buf="DSL-StrongPasswordData_Compare.csv")

    return df


# DiGraph data has 50 features for ".tie5Roanl"
# For each keystroke it provides:
# H
# DD
# DD + Next.H
# UD
# UD + Next.H
def pure_to_digraph_50(data):
    df = pd.DataFrame(columns=["subject","sessionIndex","rep","Key1.1","Key1.2","Key1.3","Key1.4","Key1.5","Key2.1","Key2.2","Key2.3","Key2.4","Key2.5","Key3.1","Key3.2","Key3.3","Key3.4","Key3.5","Key4.1","Key4.2","Key4.3","Key4.4","Key4.5","Key5.1","Key5.2","Key5.3","Key5.4","Key5.5","Key6.1","Key6.2","Key6.3","Key6.4","Key6.5","Key7.1","Key7.2","Key7.3","Key7.4","Key7.5","Key8.1","Key8.2","Key8.3","Key8.4","Key8.5","Key9.1","Key9.2","Key9.3","Key9.4","Key9.5","Key10.1","Key10.2","Key10.3","Key10.4","Key10.5"],
                      dtype=pd.Float64Dtype())
  
    # copy initials
    df["subject"] = data["subject"]
    df["sessionIndex"] = data["sessionIndex"]
    df["rep"] = data["rep"]

    # .
    df["Key1.1"] = data["Key1.1.H"]
    df["Key1.2"] = data["Key1.1.H"] + data["Key1.2.UD"]
    df["Key1.3"] = data["Key1.1.H"] + data["Key1.2.UD"] + data["Key2.1.H"]
    df["Key1.4"] = data["Key1.2.UD"]
    df["Key1.5"] = data["Key1.2.UD"] + data["Key2.1.H"] 

    # t
    df["Key2.1"] = data["Key2.1.H"]
    df["Key2.2"] = data["Key2.1.H"] + data["Key2.2.UD"]
    df["Key2.3"] = data["Key2.1.H"] + data["Key2.2.UD"] + data["Key3.1.H"]
    df["Key2.4"] = data["Key2.2.UD"]
    df["Key2.5"] = data["Key2.2.UD"] + data["Key3.1.H"]

    # i
    df["Key3.1"] = data["Key3.1.H"]
    df["Key3.2"] = data["Key3.1.H"] + data["Key3.2.UD"]
    df["Key3.3"] = data["Key3.1.H"] + data["Key3.2.UD"] + data["Key4.1.H"]
    df["Key3.4"] = data["Key3.2.UD"]
    df["Key3.5"] = data["Key3.2.UD"] + data["Key4.1.H"]

    # e
    df["Key4.1"] = data["Key4.1.H"]
    df["Key4.2"] = data["Key4.1.H"] + data["Key4.2.UD"]
    df["Key4.3"] = data["Key4.1.H"] + data["Key4.2.UD"] + data["Key5.1.H"]
    df["Key4.4"] = data["Key4.2.UD"]
    df["Key4.5"] = data["Key4.2.UD"] + data["Key5.1.H"]

    # 5
    df["Key5.1"] = data["Key5.1.H"]
    df["Key5.2"] = data["Key5.1.H"] + data["Key5.2.UD"]
    df["Key5.3"] = data["Key5.1.H"] + data["Key5.2.UD"] + data["Key6.1.H"]
    df["Key5.4"] = data["Key5.2.UD"]
    df["Key5.5"] = data["Key5.2.UD"] + data["Key6.1.H"]

    # R
    df["Key6.1"] = data["Key6.1.H"]
    df["Key6.2"] = data["Key6.1.H"] + data["Key6.2.UD"]
    df["Key6.3"] = data["Key6.1.H"] + data["Key6.2.UD"] + data["Key7.1.H"]
    df["Key6.4"] = data["Key6.2.UD"]
    df["Key6.5"] = data["Key6.2.UD"] + data["Key7.1.H"]

    # o
    df["Key7.1"] = data["Key7.1.H"]
    df["Key7.2"] = data["Key7.1.H"] + data["Key7.2.UD"]
    df["Key7.3"] = data["Key7.1.H"] + data["Key7.2.UD"] + data["Key8.1.H"]
    df["Key7.4"] = data["Key7.2.UD"]
    df["Key7.5"] = data["Key7.2.UD"] + data["Key8.1.H"]

    # a
    df["Key8.1"] = data["Key8.1.H"]
    df["Key8.2"] = data["Key8.1.H"] + data["Key8.2.UD"]
    df["Key8.3"] = data["Key8.1.H"] + data["Key8.2.UD"] + data["Key9.1.H"]
    df["Key8.4"] = data["Key8.2.UD"]
    df["Key8.5"] = data["Key8.2.UD"] + data["Key9.1.H"]

    # n
    df["Key9.1"] = data["Key9.1.H"]
    df["Key9.2"] = data["Key9.1.H"] + data["Key9.2.UD"]
    df["Key9.3"] = data["Key9.1.H"] + data["Key9.2.UD"] + data["Key10.1.H"]
    df["Key9.4"] = data["Key9.2.UD"]
    df["Key9.5"] = data["Key9.2.UD"] + data["Key10.1.H"]

    # l
    df["Key10.1"] = data["Key10.1.H"]
    df["Key10.2"] = data["Key10.1.H"] + data["Key10.2.UD"]
    df["Key10.3"] = data["Key10.1.H"] + data["Key10.2.UD"] + data["Key11.1.H"]
    df["Key10.4"] = data["Key10.2.UD"]
    df["Key10.5"] = data["Key10.2.UD"] + data["Key11.1.H"]  

    # compare the file below with DiGraph dataset 
    #df.to_csv(index=False, path_or_buf="DSL-StrongPasswordData_DiGraph_Compare.csv")

    return df

def to_polar(x):
    p = n_sphere.convert_spherical(x)        
    return p

def to_percentage(x):
    s = np.sum(x, axis=1)
    
    p = x
    for k in range(x.shape[0]):
        p[k] = x[k] / s[k]
        
    return p

def rmoutliers(s):
    x = s.values if hasattr(s, 'values') else s
    c = -1.0 / (np.sqrt(2.0)*scipy.special.erfcinv(3.0/2.0))
    
    med = np.median(x, axis=0)
    mad = np.median(np.abs(x - med), axis=0) * c
    #mad3 = 1.0 * mad -> too much outliers removed
    #mad3 = 2.0 * mad -> 0.912
    #mad3 = 3.0 * mad -> 0.924
    #mad3 = 4.0 * mad -> 0.929
    #mad3 = 4.5 * mad -> 0.929
    #mad3 = 5.0 * mad -> 0.934
    mad3 = 5.5 * mad #-> 0.935
    #mad3 = 5.6 * mad -> 0.932
    #mad3 = 5.7 * mad -> 0.934
    #mad3 = 6.0 * mad -> 0.931
    #mad3 = 7.0 * mad -> 0.930    
    #mad3 = 8.0 * mad -> 0.932
    #mad3 = 8.5 * mad -> 0.935
    #mad3 = 9.0 * mad -> 0.934
    #mad3 = 10.0 * mad -> 0.934
    #mad3 = 10.5 * mad -> 0.934
    #mad3 = 11.0 * mad -> 0.930
    i = np.all(np.abs(x - med) <= mad3, axis=1)
    return s[i == True]


def get_train_data(s, data, filter_outliers=False):
    x = data[((data.subject == s) & (data.sessionIndex <= 4))].loc[:, data.columns[3]:]
    
    if filter_outliers:
        return rmoutliers(x)
    
    return x

def get_scoring_data(s, data):
    x = data[((data.subject == s) & (data.sessionIndex > 4))].loc[:, data.columns[3]:]
    return x

def get_imposter_data(s, data, test_imposter_count):
    x = data[((data.subject != s) & (data.sessionIndex == 1) & (data.rep <= test_imposter_count))].loc[:, data.columns[3]:]
    return x

def get_imposter_data_using_submax(s, data):
    x = get_train_data(s, data)

    x = -x.sub(x.max(axis=1), axis='rows')
    return x

def get_imposter_data_using_multiply(s, data, multiplier=2.0):
    x = get_train_data(s, data)
    return x.mul(multiplier, axis='columns')

def add_awgn(data, snr_db):
    tb = data

    for i in range(tb.shape[0]):
        x = tb[i, :]
        noise_var = np.mean(np.dot(x, x)) / np.power(10, (snr_db/10))

        beta = (1.0 - 2.0/np.pi)
        n = np.abs(np.sqrt(noise_var/beta)*np.random.randn(tb.shape[1])) # Half-normal distribution (folded)
        y = x + n

        # saturate
        y[y > 255.0] = 255.0
        y[y <-255.0] = -255.0

        tb[i] = y
    
    return tb


def get_imposter_data_using_smote(s, data):
    x = get_train_data(s, data).values
    y = np.ones(x.shape[0], dtype=int)
    
    negative_sample_count = 10
    X = np.append(x, np.zeros(shape=(negative_sample_count, x.shape[1])), axis=0)
    Y = np.append(y, np.zeros(shape=(negative_sample_count), dtype=int) )

    oversample = ADASYN(random_state=42)
    oX, oY = oversample.fit_resample(X, Y)
    
    print('Original dataset shape %s' % Counter(oY))
    
    return pd.DataFrame(columns=data.columns[3:], data=oX)

def get_imposter_data_using_svm_smote(s, data, svm_oneclass_c=0.01, svm_oneclass_gamma=0.4):
    x = get_train_data(s, data).values
    y = np.ones(x.shape[0], dtype=int)
    

    normalizer = preprocessing.StandardScaler().fit(x)
    normalized_x = normalizer.transform(x)
    
    svm_oneclass = OneClassSVM(nu=svm_oneclass_c, gamma=svm_oneclass_gamma, kernel='rbf')
    svm_oneclass.fit(normalized_x)

    distance = svm_oneclass.decision_function(normalized_x)

    
    negative_sample_count = 10
    X = np.append(x, np.zeros(shape=(negative_sample_count, x.shape[1])), axis=0)
    Y = np.append(y, np.zeros(shape=(negative_sample_count), dtype=int) )

    oversample = ADASYN(random_state=42)
    oX, oY = oversample.fit_resample(X, Y)
    
    print('Original dataset shape %s' % Counter(oY))
    
    return pd.DataFrame(columns=data.columns[3:], data=oX)


def _move_outside(center, radius, p):
    
    zero_centered_p = np.subtract(p, center)
    zero_centered_p_polar = n_sphere.convert_spherical(zero_centered_p)
    
    # move to outside of the n-sphere
    zero_centered_p_polar[0] = 2.0*radius - zero_centered_p_polar[0]
    
    # convert to cartesian 
    p_rect = n_sphere.convert_rectangular(zero_centered_p_polar)
    res = np.add(p_rect, center)
    
    return res.reshape((1, -1))
    
def _move_inside(inner_center, inner_radius, outer_center, outer_radius, p):
    
    zero_centered_p = np.subtract(p, outer_center)
    
    scaled_p = zero_centered_p * inner_radius / outer_radius + inner_center
       
    return scaled_p.reshape((1, -1))

def get_imposter_data_using_svdd(s, data, svdd_c=0.005, svdd_gamma=0.44):
    x = get_train_data(s, data).values

    normalizer = preprocessing.StandardScaler().fit(x)
    normalized_x = normalizer.transform(x)
    
    svdd = BaseSVDD(C=1.0, kernel='linear', display='off')
    svdd.fit(normalized_x)
    
    oX = np.empty(shape=(0, x.shape[1]))
    for p in x:
        oX = np.append(oX, _move_outside(svdd.center, svdd.radius, p), axis=0)
   
    X = normalizer.inverse_transform(oX)    
    return pd.DataFrame(columns=data.columns[3:], data=X)

def get_imposter_data_using_gurobi(s, data, spheres):
    x = get_train_data(s, data).values

    outer = spheres[((spheres.subject == s) & (spheres.place == "outer"))].loc[:, spheres.columns[3]:]
    inner = spheres[((spheres.subject == s) & (spheres.place == "inner"))].loc[:, spheres.columns[3]:]

    outer_radius = pd.to_numeric(outer.radius.values[0])
    outer_center = pd.to_numeric(outer.iloc[0, 1:].values)

    inner_radius = pd.to_numeric(inner.radius.values[0])
    inner_center = pd.to_numeric(inner.iloc[0, 1:].values)


    oX = np.empty(shape=(0, x.shape[1]))
    for p in x:
        oX = np.append(oX, _move_outside(outer_center, outer_radius, p), axis=0)
        oX = np.append(oX, _move_inside(inner_center, inner_radius, outer_center, outer_radius, p), axis=0)
   
    return pd.DataFrame(columns=data.columns[3:], data=oX)

def get_imposter_data_using_random_on_gurobi_outer_surface(s, data, spheres, count_to_produce=0):
    x = get_train_data(s, data).values

    outer = spheres[((spheres.subject == s) & (spheres.place == "outer"))].loc[:, spheres.columns[3]:]
    outer_radius = pd.to_numeric(outer.radius.values[0])
    outer_center = pd.to_numeric(outer.iloc[0, 1:].values)

    if count_to_produce == 0:
        count_to_produce = x.shape[0]

    #
    outer_rand_p = getRandomSamplesOnNSphere(x.shape[1], outer_radius, count_to_produce) + outer_center

    return pd.DataFrame(columns=data.columns[3:], data=outer_rand_p)

def get_imposter_data_using_random_on_gurobi_inner_surface(s, data, spheres, count_to_produce=0):
    x = get_train_data(s, data).values

    inner = spheres[((spheres.subject == s) & (spheres.place == "inner"))].loc[:, spheres.columns[3]:]
    inner_radius = pd.to_numeric(inner.radius.values[0])
    inner_center = pd.to_numeric(inner.iloc[0, 1:].values)

    if count_to_produce == 0:
        count_to_produce = x.shape[0]

    #
    inner_rand_p = getRandomSamplesOnNSphere(x.shape[1], inner_radius, count_to_produce) + inner_center

    return pd.DataFrame(columns=data.columns[3:], data=inner_rand_p)

def get_imposter_data_using_random_on_gurobi_both_surface(s, data, spheres, count_to_produce=0):
    x = get_train_data(s, data).values

    outer = spheres[((spheres.subject == s) & (spheres.place == "outer"))].loc[:, spheres.columns[3]:]
    inner = spheres[((spheres.subject == s) & (spheres.place == "inner"))].loc[:, spheres.columns[3]:]

    outer_radius = pd.to_numeric(outer.radius.values[0])
    outer_center = pd.to_numeric(outer.iloc[0, 1:].values)

    inner_radius = pd.to_numeric(inner.radius.values[0])
    inner_center = pd.to_numeric(inner.iloc[0, 1:].values)

    if count_to_produce == 0:
        count_to_produce = x.shape[0]

    #
    outer_rand_p = getRandomSamplesOnNSphere(x.shape[1], outer_radius, count_to_produce) + outer_center

    #
    inner_rand_p = getRandomSamplesInNSphere(x.shape[1], inner_radius, count_to_produce) + inner_center

    oX = np.empty(shape=(0, x.shape[1]))

    oX = np.append(oX, outer_rand_p, axis=0)
    oX = np.append(oX, inner_rand_p, axis=0)
   
    return pd.DataFrame(columns=data.columns[3:], data=oX)

def get_imposter_data_using_others(s, data, max_other_user_count, max_sample_count_per_user):
    ret = np.empty(shape=(0, data.shape[1]-3))
    subjects = pd.unique(data.subject)
    
    used_user_count = 0
    
    for u in subjects:
        if (u != s) and (used_user_count < max_other_user_count):            
            used_user_count = used_user_count + 1            
            x = data[((data.subject == u) & (data.sessionIndex <= 4) & (data.sessionIndex != 1))].loc[:, data.columns[3]:]
            
            upto = np.min([max_sample_count_per_user, x.shape[0]])
            ret = np.append(ret, x.values[:upto, :], axis=0)
    
    return pd.DataFrame(columns=data.columns[3:], data=ret)

class ContrastiveLoss(tf.keras.losses.Loss):
    def __init__(self, margin=1.0, **kwargs):
        super(ContrastiveLoss, self).__init__(**kwargs)
        self.margin = margin

    def call(self, y_true, y_pred):
        positive_pair_distances = tf.reduce_sum(tf.square(y_pred), axis=-1)
        negative_pair_distances = tf.maximum(self.margin - positive_pair_distances, 0)
        return tf.reduce_mean(y_true * positive_pair_distances + (1 - y_true) * negative_pair_distances)

# following function returns for:
# boun.create_triplet_data_for_training(np.asarray(list("ABC")).reshape(-1, 1), np.asarray(list("ABC")).reshape(-1, 1), np.asarray(list("12")).reshape(-1, 1))
# -> shape (3, 18, 1)
# AA1
# AB1
# AC1
# BA1
# BB1
# BC1
# CA1
# CB1
# CC1
# AA2
# AB2
# AC2
# BA2
# BB2
# BC2
# CA2
# CB2
# CC2
def create_triplet_data_for_training(anchor, positive, negative, compare_over_genuine_count):
    
    p = np.asarray(list(itertools.product(positive, anchor[:compare_over_genuine_count])))
    t = np.asarray(list(itertools.product(negative, p)), dtype=object)
    
    ap = np.concatenate(t[:, 1], axis=0).reshape(-1, 2, anchor.shape[1])

    _anchor = ap[:, 0]
    _positive = ap[:, 1]
    _negative = np.concatenate(t[:, 0], axis=0).reshape(-1, negative.shape[1])
    
    res = np.asarray([_anchor, _positive, _negative])   

    return res.reshape(3, -1, compare_over_genuine_count, anchor.shape[1])


def create_data_for_contrastive_training(genuine, test, compare_over_genuine_count):
    count = min(len(genuine), compare_over_genuine_count)

    p = np.asarray(list(itertools.product(test, genuine[:count])))
    res = np.asarray([p[:, 0, :],  p[:, 1, :]])
    
    return res.reshape(2, -1, compare_over_genuine_count, genuine.shape[-1])

def create_data_for_contrastive_testing(genuine, test, compare_over_genuine_count):
    return create_data_for_contrastive_training(genuine, test, compare_over_genuine_count)

def create_data_for_testing(genuine, test, test_average_user_count):
    count = min(len(genuine), test_average_user_count)

    p = np.asarray(list(itertools.product(test, genuine[:count])))
    return np.asarray([p[:, 0, :],  p[:, 1, :]])

def create_data_for_svm_input(genuine, test_average_user_count):
    count = min(len(genuine), test_average_user_count)

    p = np.asarray(list(itertools.product(genuine, genuine[:count])))
    ret = p[:, 0, :].reshape(-1, count, genuine.shape[1])
    return np.asarray(ret)

def create_data_for_triplet_positive(genuine, test_average_user_count):
    count = min(len(genuine), test_average_user_count)

    p = np.asarray(list(itertools.product(genuine, genuine[:count])))
    ret = p[:, 0, :].reshape(-1, count, genuine.shape[1])
    return np.asarray(ret)

def create_data_for_triplet_anchor(genuine, test_average_user_count):
    count = min(len(genuine), test_average_user_count)

    p = np.asarray(list(itertools.product(genuine, genuine[:count])))
    ret = p[:, 1, :].reshape(-1, count, genuine.shape[1])
    return np.asarray(ret)

def create_data_for_triplet_negative(imposter, test_average_user_count):
    count = min(len(imposter), test_average_user_count)

    p = np.asarray(list(itertools.product(imposter, imposter[:count])))
    ret = p[:, 0, :].reshape(-1, count, imposter.shape[1])
    return np.asarray(ret)


def time2gramian(genuine, test1, test2, test3, flatten=True, normalize=True):

    g = GramianAngularField(method='summation', sample_range=None, flatten=flatten)
    
    normalizer = 1.0
    if normalize:
        normalizer = 255.0
    
    g_genuine = g.fit_transform(genuine / normalizer)    
    g_test1 = g.transform(test1 / normalizer)
    g_test2 = g.transform(test2 / normalizer)
    g_test3 = g.transform(test3 / normalizer)
    
    # def show(ax, image):
    #     ax.imshow(image.reshape(genuine.shape[1], genuine.shape[1]))
    #     ax.get_xaxis().set_visible(False)
    #     ax.get_yaxis().set_visible(False)

    # fig = plt.figure(figsize=(4, 10))

    # axs = fig.subplots(4, 10)
    # for i in range(10):
    #     show(axs[0, i], g_genuine[i])
    #     show(axs[1, i], g_test1[i])
    #     show(axs[2, i], g_test2[i])
    #     show(axs[3, i], g_test3[i])
    
    return g_genuine, g_test1, g_test2, g_test3

def time2markov(genuine, test1, test2, test3, flatten=True, normalize=True):

    g = MarkovTransitionField(n_bins=5, flatten=flatten)
    
    normalizer = 1.0
    if normalize:
        normalizer = 255.0
    
    g_genuine = g.fit_transform(genuine / normalizer)    
    g_test1 = g.transform(test1 / normalizer)
    g_test2 = g.transform(test2 / normalizer)
    g_test3 = g.transform(test3 / normalizer)
    
    # def show(ax, image):
    #     ax.imshow(image.reshape(genuine.shape[1], genuine.shape[1]))
    #     ax.get_xaxis().set_visible(False)
    #     ax.get_yaxis().set_visible(False)

    # fig = plt.figure(figsize=(4, 10))

    # axs = fig.subplots(4, 10)
    # for i in range(10):
    #     show(axs[0, i], g_genuine[i])
    #     show(axs[1, i], g_test1[i])
    #     show(axs[2, i], g_test2[i])
    #     show(axs[3, i], g_test3[i])
    
    return g_genuine, g_test1, g_test2, g_test3

def time2recurrence_plots(genuine, test1, test2, test3, flatten=True, normalize=True):

    g = RecurrencePlot(flatten=flatten)
    
    normalizer = 1.0
    if normalize:
        normalizer = 255.0
    
    g_genuine = g.fit_transform(genuine / normalizer)    
    g_test1 = g.transform(test1 / normalizer)
    g_test2 = g.transform(test2 / normalizer)
    g_test3 = g.transform(test3 / normalizer)
    
    # def show(ax, image):
    #     ax.imshow(image.reshape(genuine.shape[1], genuine.shape[1]))
    #     ax.get_xaxis().set_visible(False)
    #     ax.get_yaxis().set_visible(False)

    # fig = plt.figure(figsize=(4, 10))

    # axs = fig.subplots(4, 10)
    # for i in range(10):
    #     show(axs[0, i], g_genuine[i])
    #     show(axs[1, i], g_test1[i])
    #     show(axs[2, i], g_test2[i])
    #     show(axs[3, i], g_test3[i])
    
    return g_genuine, g_test1, g_test2, g_test3

def time2norm(genuine, test1, test2, test3):
    normalizer = 255.0
    
    g_genuine = genuine / normalizer
    g_test1 = test1 / normalizer
    g_test2 = test2 / normalizer
    g_test3 = test3 / normalizer
    
    return g_genuine, g_test1, g_test2, g_test3




def calculateEqualError(lfrr, lfar):
    diff = np.subtract(lfrr, lfar)
    i = np.min(np.where(diff == np.min(diff[diff >= 0])))
    j = np.max(np.where(diff == np.max(diff[diff < 0])))

    a = (lfrr[i] - lfar[i]) / (lfar[j] - lfar[i] - lfrr[j] + lfrr[i])
    res = lfrr[i] + a * (lfrr[j] - lfrr[i])

    return np.array(res)

def calculateMissRate(frr, far):
    i = np.min(np.where(far == 0))

    lzmr = frr[-1]
    if i.size > 0:
        lzmr = frr[i]

    return lzmr

def getRandomSamplesOnNSphere(N , R , numberOfSamples):
    # Return 'numberOfSamples' samples of vectors of dimension N 
    # with an uniform distribution on the (N-1)-Sphere surface of radius R.
    # RATIONALE: https://mathworld.wolfram.com/HyperspherePointPicking.html
    
    X = np.random.default_rng().normal(size=(numberOfSamples , N))
    return R / np.sqrt(np.sum(X**2, 1, keepdims=True)) * X

def getRandomSamplesInNSphere(N , R , numberOfSamples):
    # Return 'numberOfSamples' samples of vectors of dimension N 
    # with an uniform distribution inside the N-Sphere of radius R.
    # RATIONALE: https://math.stackexchange.com/q/87238
    
    X = np.random.default_rng().normal(size=(numberOfSamples , N))
    U = np.random.default_rng().random((numberOfSamples , 1)) 
    
    return R * U**(1/N) / np.sqrt(np.sum(X**2, 1, keepdims=True)) * X

def load_pure_sphere_csv():
    sp = pd.read_csv("DSL-StrongPasswordData_nspheres_21.csv")
    return sp

def load_cmu_sphere_csv():
    sp = pd.read_csv("DSL-StrongPasswordData_nspheres_31.csv")
    return sp

def load_digraph_sphere_csv():
    sp = pd.read_csv("DSL-StrongPasswordData_nspheres_50.csv")
    return sp

# data_name = local_dd
# data_name = udp_dd
# data_name = tcp_nagle_dd
# data_name = tcp_dd
# data_name = tcp_aes128_dd
# data_name = tcp_aes256_dd
def load_cmu_sphere_remote_csv(data_name="local_dd", filtered=False):
    sp = pd.read_csv("DSL-StrongPasswordData_nspheres_{}_10_{}.csv".format(data_name, "filtered" if filtered else "full"))
    return sp

# example: visualize(*list(train_dataset.take(1).as_numpy_iterator())[0])
def visualize_triplet(anchor, positive, negative):
    """Visualize a few triplets from the supplied batches."""

    def show(ax, image):
        ax.imshow(image)
        ax.get_xaxis().set_visible(False)
        ax.get_yaxis().set_visible(False)

    fig = plt.figure(figsize=(9, 9))

    axs = fig.subplots(3, 3)
    for i in range(3):
        show(axs[i, 0], anchor[i])
        show(axs[i, 1], positive[i])
        show(axs[i, 2], negative[i])

def plot_losses(history, file_name):
        plt.interactive(False)
        
        plt.plot(history.history['loss'])
        plt.plot(history.history['val_loss'])
        
        pre, _ = os.path.splitext(file_name)
        plt.title('model loss for {}'.format(pre))
        plt.ylabel('loss')
        plt.xlabel('epoch')
        plt.legend(['train', 'val'], loc='upper left')
       
        if file_name != "":
            plt.savefig(storage_path() + pre + "_loss.png")
            plt.close()
        else:
         plt.show()   
         
def plot_roc(fn, user, far, frr, epoch, total_cells, test_average_user_count, test_imposter_count, batchsize):
    t = np.arange(0, 1.1, 0.001)
    
    first_line = LineString(np.column_stack((far, frr)))
    second_line = LineString(np.column_stack((t, t)))
    intersection = first_line.intersection(second_line)
    
    plt.interactive(False)
    l1, l2 = plt.plot(far, frr, t, t)
    plt.setp(l1, color='r', linewidth=4.0)
    plt.setp(l2, color='b', linewidth=2.0, linestyle='--')
    plt.axis([0, 1, 0, 1])
    plt.grid(True)
    plt.title('User: {}'.format(user), fontsize=18)
    plt.xlabel('False Acceptance Rate (%)', fontsize=14)
    plt.ylabel('False Rejection Rate (%)', fontsize=14)

    ix, iy = intersection.xy
    plt.plot(ix, iy, 'o')

    plt.annotate('EER={:.3f}'.format(iy[0]), xy=(ix[0], iy[0]), xytext=(0.2, 0.6),
             arrowprops=dict(facecolor='black', shrink=0.05),
             )

    plt.savefig('./Models/{} - {} - Epochs_{} - Cells_{} - Average_Users_{} - Test_Imposter_Count_{} - BatchSize_{}.png'.format(fn, user, epoch, total_cells, test_average_user_count, test_imposter_count, batchsize))
    plt.close()


def initialize_logging(fn):
    level    = logging.INFO
    format   = '%(asctime)s.%(msecs)03d %(levelname)s %(message)s'
    datefmt  = '%Y-%m-%d %H:%M:%S'
    handlers = [logging.FileHandler(fn), logging.StreamHandler()]

    logging.basicConfig(level = level, 
                        format = format, 
                        datefmt = datefmt,
                        handlers = handlers)

    logging.info('CPU                : {}'.format(cpuinfo.get_cpu_info()['brand_raw']))
    logging.info('RAM                : {:.0f} GB'.format(psutil.virtual_memory().total / 1024**3))
    logging.info('OS                 : {}'.format(platform.platform()))
    logging.info('Python Version     : {}'.format(platform.python_version()))
    logging.info('TensorFlow Version : {}'.format(tf.__version__))
    logging.info('------------------------------------------------------------------')
    logging.info('')


def add_to_log(str, line_break=""):
    logging.info(str + line_break)
    
def storage_path():
    return './Models/'


def det_session(seed):
    os.environ['PYTHONHASHSEED'] = str(seed)
    os.environ['TF_DETERMINISTIC_OPS'] = '1'
    rn.seed(seed)
    np.random.seed(seed)
    tf.random.set_seed(seed)
    tf.keras.utils.set_random_seed(seed)
    tf.config.experimental.enable_op_determinism()

