#ifndef _AES_H
#define _AES_H

#include "io.h"


extern void aes_enc_block_iv(uint8_t* input, uint8_t* output, uint32_t len, const uint8_t* key, const uint8_t* initial_vector);
extern void aes_dec_block_iv(uint8_t* input, uint8_t* output, uint32_t len, const uint8_t* key, const uint8_t* initial_vector);
extern void aes_enc_block(uint8_t* input, uint8_t* output, uint32_t len, const uint8_t* key);
extern void aes_dec_block(uint8_t* input, uint8_t* output, uint32_t len, const uint8_t* key);
extern void CalcMCUKey(uint8_t* aes_key);


extern bool base64_encode(const uint8_t *src, const int16_t src_len, uint8_t *dest, const int16_t dest_len);
extern bool base64_decode(const uint8_t* src, const int16_t src_len, uint8_t* dest, const int16_t dest_len);


#endif
