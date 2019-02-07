---
title: "ISupportErrorInfoImpl Class"
ms.date: "11/04/2016"
f1_keywords: ["ISupportErrorInfoImpl", "ATLCOM/ATL::ISupportErrorInfoImpl", "ATLCOM/ATL::ISupportErrorInfoImpl::InterfaceSupportsErrorInfo"]
helpviewer_keywords: ["ISupportErrorInfo ATL implementation", "ISupportErrorInfoImpl class", "error information, ATL"]
ms.assetid: e33a4b11-a123-41cf-bcea-7b19743902af
---
# ISupportErrorInfoImpl Class

This class provides a default implementation of the [ISupportErrorInfo Interface](/windows/desktop/api/oaidl/nn-oaidl-isupporterrorinfo) and can be used when only a single interface generates errors on an object.

> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
template<const IID* piid>
class ATL_NO_VTABLE ISupportErrorInfoImpl
   : public ISupportErrorInfo
```

#### Parameters

*piid*<br/>
A pointer to the IID of an interface that supports [IErrorInfo](/windows/desktop/api/oaidl/nn-oaidl-ierrorinfo).

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[ISupportErrorInfoImpl::InterfaceSupportsErrorInfo](#interfacesupportserrorinfo)|Indicates whether the interface identified by `riid` supports the [IErrorInfo](/windows/desktop/api/oaidl/nn-oaidl-ierrorinfo) interface.|

## Remarks

The [ISupportErrorInfo Interface](/windows/desktop/api/oaidl/nn-oaidl-isupporterrorinfo) ensures that error information can be returned to the client. Objects that use `IErrorInfo` must implement `ISupportErrorInfo`.

Class `ISupportErrorInfoImpl` provides a default implementation of `ISupportErrorInfo` and can be used when only a single interface generates errors on an object. For example:

[!code-cpp[NVC_ATL_COM#48](../../atl/codesnippet/cpp/isupporterrorinfoimpl-class_1.h)]

## Inheritance Hierarchy

`ISupportErrorInfo`

`ISupportErrorInfoImpl`

## Requirements

**Header:** atlcom.h

##  <a name="interfacesupportserrorinfo"></a>  ISupportErrorInfoImpl::InterfaceSupportsErrorInfo

Indicates whether the interface identified by `riid` supports the [IErrorInfo](/windows/desktop/api/oaidl/nn-oaidl-ierrorinfo) interface.

```
STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);
```

### Remarks

See [ISupportErrorInfo::InterfaceSupportsErrorInfo](/windows/desktop/api/oaidl/nf-oaidl-isupporterrorinfo-interfacesupportserrorinfo) in the Windows SDK.

##  <a name="getsize"></a>  IThreadPoolConfig::GetSize

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

[!code-cpp[NVC_ATL_Utilities#134](../../atl/codesnippet/cpp/isupporterrorinfoimpl-class_2.cpp)]

##  <a name="gettimeout"></a>  IThreadPoolConfig::GetTimeout

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

##  <a name="setsize"></a>  IThreadPoolConfig::SetSize

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

##  <a name="settimeout"></a>  IThreadPoolConfig::SetTimeout

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

- [Class Overview](../../atl/atl-class-overview.md)
