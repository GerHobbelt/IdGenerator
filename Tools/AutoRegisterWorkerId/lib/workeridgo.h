/* Code generated by cmd/cgo; DO NOT EDIT. */

/* package command-line-arguments */


#line 1 "cgo-builtin-export-prolog"

#include <stddef.h> /* for ptrdiff_t below */

#ifndef GO_CGO_EXPORT_PROLOGUE_H
#define GO_CGO_EXPORT_PROLOGUE_H

#ifndef GO_CGO_GOSTRING_TYPEDEF
typedef struct { const char *p; ptrdiff_t n; } _GoString_;
#endif

#endif

/* Start of preamble from import "C" comments.  */




/* End of preamble from import "C" comments.  */


/* Start of boilerplate cgo prologue.  */
#line 1 "cgo-gcc-export-header-prolog"

#ifndef GO_CGO_PROLOGUE_H
#define GO_CGO_PROLOGUE_H

typedef signed char GoInt8;
typedef unsigned char GoUint8;
typedef short GoInt16;
typedef unsigned short GoUint16;
typedef int GoInt32;
typedef unsigned int GoUint32;
typedef long long GoInt64;
typedef unsigned long long GoUint64;
typedef GoInt64 GoInt;
typedef GoUint64 GoUint;
typedef __SIZE_TYPE__ GoUintptr;
typedef float GoFloat32;
typedef double GoFloat64;
typedef float _Complex GoComplex64;
typedef double _Complex GoComplex128;

/*
  static assertion to make sure the file is being used on architecture
  at least with matching size of GoInt.
*/
typedef char _check_for_64_bit_pointer_matching_GoInt[sizeof(void*)==64/8 ? 1:-1];

#ifndef GO_CGO_GOSTRING_TYPEDEF
typedef _GoString_ GoString;
#endif
typedef void *GoMap;
typedef void *GoChan;
typedef struct { void *t; void *v; } GoInterface;
typedef struct { void *data; GoInt len; GoInt cap; } GoSlice;

#endif

/* End of boilerplate cgo prologue.  */

#ifdef __cplusplus
extern "C" {
#endif


// RegisterOne 注册一个 WorkerId，会先注销所有本机已注册的记录
// address: Redis连接地址，单机模式示例：127.0.0.1:6379，哨兵/集群模式示例：127.0.0.1:26380,127.0.0.1:26381,127.0.0.1:26382
// password: Redis连接密码
// db: Redis指定存储库，示例：1
// sentinelMasterName: Redis 哨兵模式下的服务名称，示例：mymaster，非哨兵模式传入空字符串即可
// minWorkerId: WorkerId 最小值，示例：30
// maxWorkerId: WorkerId 最大值，示例：63
// lifeTimeSeconds: WorkerId缓存时长（秒，3的倍数）
extern __declspec(dllexport) GoInt32 RegisterOne(char* address, char* password, GoInt db, char* sentinelMasterName, GoInt32 minWorkerId, GoInt32 maxWorkerId, GoInt32 lifeTimeSeconds);

// RegisterMany 注册多个 WorkerId，会先注销所有本机已注册的记录
// address: Redis连接地址，单机模式示例：127.0.0.1:6379，哨兵/集群模式示例：127.0.0.1:26380,127.0.0.1:26381,127.0.0.1:26382
// password: Redis连接密码
// db: Redis指定存储库，示例：1
// sentinelMasterName: Redis 哨兵模式下的服务名称，示例：mymaster，非哨兵模式传入空字符串即可
// maxWorkerId: WorkerId 最大值，示例：63
// minWorkerId: WorkerId 最小值，示例：30
// totalCount: 获取N个WorkerId，示例：5
// lifeTimeSeconds: WorkerId缓存时长（秒，3的倍数）
extern __declspec(dllexport) GoSlice RegisterMany(char* address, char* password, GoInt db, char* sentinelMasterName, GoInt32 minWorkerId, GoInt32 maxWorkerId, GoInt32 totalCount, GoInt32 lifeTimeSeconds);

// UnRegister 注销本机已注册的 WorkerId
extern __declspec(dllexport) void UnRegister();

// Validate 检查本地WorkerId是否有效（0-有效，其它-无效）
extern __declspec(dllexport) GoInt32 Validate(GoInt32 workerId);

#ifdef __cplusplus
}
#endif