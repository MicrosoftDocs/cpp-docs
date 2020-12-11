---
description: "Learn more about: IThreadPoolConfig Interface"
title: "IThreadPoolConfig Interface"
ms.date: "11/04/2016"
f1_keywords: ["IThreadPoolConfig", "ATLUTIL/ATL::IThreadPoolConfig", "ATLUTIL/ATL::GetSize", "ATLUTIL/ATL::GetTimeout", "ATLUTIL/ATL::SetSize", "ATLUTIL/ATL::SetTimeout"]
helpviewer_keywords: ["IThreadPoolConfig interface"]
ms.assetid: 69e642bf-6925-46e6-9a37-cce52231b1cc
---
# IThreadPoolConfig Interface

This interface provides methods for configuring a thread pool.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
__interface
    __declspec(uuid("B1F64757-6E88-4fa2-8886-7848B0D7E660")) IThreadPoolConfig : public IUnknown
```

## Members

### Methods

|Name|Description|
|-|-|
|[GetSize](#getsize)|Call this method to get the number of threads in the pool.|
|[GetTimeout](#gettimeout)|Call this method to get the maximum time in milliseconds that the thread pool will wait for a thread to shut down.|
|[SetSize](#setsize)|Call this method to set the number of threads in the pool.|
|[SetTimeout](#settimeout)|Call this method to set the maximum time in milliseconds that the thread pool will wait for a thread to shut down.|

## Remarks

This interface is implemented by [CThreadPool](../../atl/reference/cthreadpool-class.md).

## Requirements

**Header:** atlutil.h

## <a name="getsize"></a> IThreadPoolConfig::GetSize

Call this method to get the number of threads in the pool.

```
STDMETHOD(GetSize)(int* pnNumThreads);
```

### Parameters

*pnNumThreads*<br/>
[out] Address of the variable that, on success, receives the number of threads in the pool.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Example

[!code-cpp[NVC_ATL_Utilities#134](../../atl/codesnippet/cpp/ithreadpoolconfig-interface_1.cpp)]

## <a name="gettimeout"></a> IThreadPoolConfig::GetTimeout

Call this method to get the maximum time in milliseconds that the thread pool will wait for a thread to shut down.

```
STDMETHOD(GetTimeout)(DWORD* pdwMaxWait);
```

### Parameters

*pdwMaxWait*<br/>
[out] Address of the variable that, on success, receives the maximum time in milliseconds that the thread pool will wait for a thread to shut down.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Example

See [IThreadPoolConfig::GetSize](#getsize).

## <a name="setsize"></a> IThreadPoolConfig::SetSize

Call this method to set the number of threads in the pool.

```
STDMETHOD(SetSize)int nNumThreads);
```

### Parameters

*nNumThreads*<br/>
The requested number of threads in the pool.

If *nNumThreads* is negative, its absolute value will be multiplied by the number of processors in the machine to get the total number of threads.

If *nNumThreads* is zero, ATLS_DEFAULT_THREADSPERPROC will be multiplied by the number of processors in the machine to get the total number of threads.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Example

See [IThreadPoolConfig::GetSize](#getsize).

## <a name="settimeout"></a> IThreadPoolConfig::SetTimeout

Call this method to set the maximum time in milliseconds that the thread pool will wait for a thread to shut down.

```
STDMETHOD(SetTimeout)(DWORD dwMaxWait);
```

### Parameters

*dwMaxWait*<br/>
The requested maximum time in milliseconds that the thread pool will wait for a thread to shut down.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Example

See [IThreadPoolConfig::GetSize](#getsize).

## See also

[Classes](../../atl/reference/atl-classes.md)<br/>
[CThreadPool Class](../../atl/reference/cthreadpool-class.md)
