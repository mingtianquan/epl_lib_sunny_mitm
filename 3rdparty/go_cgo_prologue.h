#ifndef GO_CGO_EXPORT_PROLOGUE_H
#define GO_CGO_EXPORT_PROLOGUE_H

#ifndef GO_CGO_GOSTRING_TYPEDEF
typedef struct { const char* p; ptrdiff_t n; } _GoString_;
#endif

#endif

#ifndef GO_CGO_PROLOGUE_H
#define GO_CGO_PROLOGUE_H
//#include <complex>
typedef signed char GoInt8;
typedef unsigned char GoUint8;
typedef short GoInt16;
typedef unsigned short GoUint16;
typedef int GoInt32;
typedef unsigned int GoUint32;
typedef _int64 GoInt64;
typedef unsigned _int64 GoUint64;
typedef GoInt32 GoInt;
typedef GoUint32 GoUint;
typedef uintptr_t GoUintptr;
typedef float GoFloat32;
typedef double GoFloat64;
//typedef std::complex<float> GoComplex64;
//typedef std::complex<double> GoComplex128;

/*
  static assertion to make sure the file is being used on architecture
  at least with matching size of GoInt.
*/
#ifndef _WIN64
typedef char _check_for_32_bit_pointer_matching_GoInt[sizeof(void*) == 32 / 8 ? 1 : -1];
#else
typedef char _check_for_64_bit_pointer_matching_GoInt[sizeof(void*) == 64 / 8 ? 1 : -1];
#endif

#ifndef GO_CGO_GOSTRING_TYPEDEF
typedef _GoString_ GoString;
#endif
typedef void* GoMap;
typedef void* GoChan;
typedef struct { void* t; void* v; } GoInterface;
typedef struct { void* data; GoInt len; GoInt cap; } GoSlice;

#endif

