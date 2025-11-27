package main

/*
#include <stdlib.h>
*/
import "C"

import (
	"crypto/aes"
	"crypto/cipher"
	"encoding/base64"
	"errors"
)

// ================= 工具函数 =====================

func pkcs7Pad(data []byte, block int) []byte {
	padding := block - len(data)%block
	padtext := make([]byte, padding)
	for i := 0; i < padding; i++ {
		padtext[i] = byte(padding)
	}
	return append(data, padtext...)
}

func pkcs7Unpad(data []byte) ([]byte, error) {
	if len(data) == 0 {
		return nil, errors.New("empty data")
	}
	n := int(data[len(data)-1])
	if n > len(data) {
		return nil, errors.New("invalid padding")
	}
	return data[:len(data)-n], nil
}

func fixKey(key []byte, bits int) []byte {
	switch bits {
	case 192:
		if len(key) >= 24 {
			return key[:24]
		}
		return append(key, make([]byte, 24-len(key))...)
	case 256:
		if len(key) >= 32 {
			return key[:32]
		}
		return append(key, make([]byte, 32-len(key))...)
	default: // 128
		if len(key) >= 16 {
			return key[:16]
		}
		return append(key, make([]byte, 16-len(key))...)
	}
}

// ================= AES 主函数 =====================

// mode: 1=ECB 2=CBC 3=CFB 4=OFB 5=CTR
func aesEncrypt(data, key, iv []byte, mode int, bits int) ([]byte, error) {
	key = fixKey(key, bits)

	block, err := aes.NewCipher(key)
	if err != nil {
		return nil, err
	}

	switch mode {

	case 1: // ECB
		data = pkcs7Pad(data, block.BlockSize())
		dst := make([]byte, len(data))
		for bs := 0; bs < len(data); bs += block.BlockSize() {
			block.Encrypt(dst[bs:], data[bs:bs+block.BlockSize()])
		}
		return dst, nil

	case 2: // CBC
		data = pkcs7Pad(data, block.BlockSize())
		dst := make([]byte, len(data))
		cipher.NewCBCEncrypter(block, iv[:block.BlockSize()]).CryptBlocks(dst, data)
		return dst, nil

	case 3: // CFB
		dst := make([]byte, len(data))
		cipher.NewCFBEncrypter(block, iv[:block.BlockSize()]).XORKeyStream(dst, data)
		return dst, nil

	case 4: // OFB
		dst := make([]byte, len(data))
		cipher.NewOFB(block, iv[:block.BlockSize()]).XORKeyStream(dst, data)
		return dst, nil

	case 5: // CTR
		dst := make([]byte, len(data))
		cipher.NewCTR(block, iv[:block.BlockSize()]).XORKeyStream(dst, data)
		return dst, nil
	}

	return nil, errors.New("invalid mode")
}

func aesDecrypt(data, key, iv []byte, mode int, bits int) ([]byte, error) {
	key = fixKey(key, bits)

	block, err := aes.NewCipher(key)
	if err != nil {
		return nil, err
	}

	switch mode {

	case 1: // ECB
		dst := make([]byte, len(data))
		for bs := 0; bs < len(data); bs += block.BlockSize() {
			block.Decrypt(dst[bs:], data[bs:bs+block.BlockSize()])
		}
		return pkcs7Unpad(dst)

	case 2: // CBC
		dst := make([]byte, len(data))
		cipher.NewCBCDecrypter(block, iv[:block.BlockSize()]).CryptBlocks(dst, data)
		return pkcs7Unpad(dst)

	case 3: // CFB
		dst := make([]byte, len(data))
		cipher.NewCFBDecrypter(block, iv[:block.BlockSize()]).XORKeyStream(dst, data)
		return dst, nil

	case 4: // OFB
		dst := make([]byte, len(data))
		cipher.NewOFB(block, iv[:block.BlockSize()]).XORKeyStream(dst, data)
		return dst, nil

	case 5: // CTR
		dst := make([]byte, len(data))
		cipher.NewCTR(block, iv[:block.BlockSize()]).XORKeyStream(dst, data)
		return dst, nil
	}

	return nil, errors.New("invalid mode")
}

// ================= 导出 C 接口 =====================

//export AesEncrypt
func AesEncrypt(data, key, iv *C.char, mode C.int, bits C.int) *C.char {
	d := []byte(C.GoString(data))
	k := []byte(C.GoString(key))
	ivv := []byte(C.GoString(iv))

	out, err := aesEncrypt(d, k, ivv, int(mode), int(bits))
	if err != nil {
		return C.CString("")
	}
	return C.CString(base64.StdEncoding.EncodeToString(out))
}

//export AesDecrypt
func AesDecrypt(data, key, iv *C.char, mode C.int, bits C.int) *C.char {
	raw, _ := base64.StdEncoding.DecodeString(C.GoString(data))
	k := []byte(C.GoString(key))
	ivv := []byte(C.GoString(iv))

	out, err := aesDecrypt(raw, k, ivv, int(mode), int(bits))
	if err != nil {
		return C.CString("")
	}
	return C.CString(string(out))
}

func main() {}
