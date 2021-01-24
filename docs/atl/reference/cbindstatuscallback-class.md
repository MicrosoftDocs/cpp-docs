---
description: "Learn more about: CBindStatusCallback Class"
title: "CBindStatusCallback Class"
ms.date: "11/04/2016"
f1_keywords: ["CBindStatusCallback", "ATLCTL/ATL::CBindStatusCallback", "ATLCTL/ATL::CBindStatusCallback::CBindStatusCallback", "ATLCTL/ATL::CBindStatusCallback::Download", "ATLCTL/ATL::CBindStatusCallback::GetBindInfo", "ATLCTL/ATL::CBindStatusCallback::GetPriority", "ATLCTL/ATL::CBindStatusCallback::OnDataAvailable", "ATLCTL/ATL::CBindStatusCallback::OnLowResource", "ATLCTL/ATL::CBindStatusCallback::OnObjectAvailable", "ATLCTL/ATL::CBindStatusCallback::OnProgress", "ATLCTL/ATL::CBindStatusCallback::OnStartBinding", "ATLCTL/ATL::CBindStatusCallback::OnStopBinding", "ATLCTL/ATL::CBindStatusCallback::StartAsyncDownload", "ATLCTL/ATL::CBindStatusCallback::m_dwAvailableToRead", "ATLCTL/ATL::CBindStatusCallback::m_dwTotalRead", "ATLCTL/ATL::CBindStatusCallback::m_pFunc", "ATLCTL/ATL::CBindStatusCallback::m_pT", "ATLCTL/ATL::CBindStatusCallback::m_spBindCtx", "ATLCTL/ATL::CBindStatusCallback::m_spBinding", "ATLCTL/ATL::CBindStatusCallback::m_spMoniker", "ATLCTL/ATL::CBindStatusCallback::m_spStream"]
helpviewer_keywords: ["asynchronous data transfer [C++]", "data transfer [C++]", "data transfer [C++], asynchronous", "CBindStatusCallback class"]
ms.assetid: 0f5da276-6031-4418-b2a9-a4750ef29e77
---
# CBindStatusCallback Class

This class implements the `IBindStatusCallback` interface.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
template <class T,
    int nBindFlags = BINDF_ASYNCHRONOUS | BINDF_ASYNCSTORAGE | BINDF_GETNEWESTVERSION | BINDF_NOWRITECACHE>
class ATL_NO_VTABLE CBindStatusCallback : public CComObjectRootEx <T ::_ThreadModel::ThreadModelNoCS>,
    public IBindStatusCallbackImpl<T>
```

#### Parameters

*T*<br/>
Your class containing the function that will be called as the data is received.

*nBindFlags*<br/>
Specifies the bind flags that are returned by [GetBindInfo](#getbindinfo). The default implementation sets the binding to be asynchronous, retrieves the newest version of the data/object, and does not store retrieved data in the disk cache.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CBindStatusCallback::CBindStatusCallback](#cbindstatuscallback)|The constructor.|
|[CBindStatusCallback::~CBindStatusCallback](#dtor)|The destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CBindStatusCallback::Download](#download)|Static method that starts the download process, creates a `CBindStatusCallback` object, and calls `StartAsyncDownload`.|
|[CBindStatusCallback::GetBindInfo](#getbindinfo)|Called by the asynchronous moniker to request information on the type of bind to be created.|
|[CBindStatusCallback::GetPriority](#getpriority)|Called by the asynchronous moniker to get the priority of the bind operation. The ATL implementation returns `E_NOTIMPL`.|
|[CBindStatusCallback::OnDataAvailable](#ondataavailable)|Called to provide data to your application as it becomes available. Reads the data, then calls the function passed to it to use the data.|
|[CBindStatusCallback::OnLowResource](#onlowresource)|Called when resources are low. The ATL implementation returns S_OK.|
|[CBindStatusCallback::OnObjectAvailable](#onobjectavailable)|Called by the asynchronous moniker to pass an object interface pointer to your application. The ATL implementation returns S_OK.|
|[CBindStatusCallback::OnProgress](#onprogress)|Called to indicate the progress of a data downloading process. The ATL implementation returns S_OK.|
|[CBindStatusCallback::OnStartBinding](#onstartbinding)|Called when binding is started.|
|[CBindStatusCallback::OnStopBinding](#onstopbinding)|Called when the asynchronous data transfer is stopped.|
|[CBindStatusCallback::StartAsyncDownload](#startasyncdownload)|Initializes the bytes available and bytes read to zero, creates a push-type stream object from a URL, and calls `OnDataAvailable` every time data is available.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CBindStatusCallback::m_dwAvailableToRead](#m_dwavailabletoread)|Number of bytes available to read.|
|[CBindStatusCallback::m_dwTotalRead](#m_dwtotalread)|Total number of bytes read.|
|[CBindStatusCallback::m_pFunc](#m_pfunc)|Pointer to the function called when data is available.|
|[CBindStatusCallback::m_pT](#m_pt)|Pointer to the object requesting the asynchronous data transfer.|
|[CBindStatusCallback::m_spBindCtx](#m_spbindctx)|Pointer to the [IBindCtx](/windows/win32/api/objidl/nn-objidl-ibindctx) interface for the current bind operation.|
|[CBindStatusCallback::m_spBinding](#m_spbinding)|Pointer to the `IBinding` interface for the current bind operation.|
|[CBindStatusCallback::m_spMoniker](#m_spmoniker)|Pointer to the [IMoniker](/windows/win32/api/objidl/nn-objidl-imoniker) interface for the URL to use.|
|[CBindStatusCallback::m_spStream](#m_spstream)|Pointer to the [IStream](/windows/win32/api/objidl/nn-objidl-istream) interface for the data transfer.|

## Remarks

The `CBindStatusCallback` class implements the `IBindStatusCallback` interface. `IBindStatusCallback` must be implemented by your application so it can receive notifications from an asynchronous data transfer. The asynchronous moniker provided by the system uses `IBindStatusCallback` methods to send and receive information about the asynchronous data transfer to and from your object.

Typically, the `CBindStatusCallback` object is associated with a specific bind operation. For example, in the [ASYNC](../../overview/visual-cpp-samples.md) sample, when you set the URL property, it creates a `CBindStatusCallback` object in the call to `Download`:

[!code-cpp[NVC_ATL_Windowing#86](../../atl/codesnippet/cpp/cbindstatuscallback-class_1.h)]

The asynchronous moniker uses the callback function `OnData` to call your application when it has data. The asynchronous moniker is provided by the system.

## Inheritance Hierarchy

`CComObjectRootBase`

`IBindStatusCallback`

[CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)

`CBindStatusCallback`

## Requirements

**Header:** atlctl.h

## <a name="cbindstatuscallback"></a> CBindStatusCallback::CBindStatusCallback

The constructor.

```
CBindStatusCallback();
```

### Remarks

Creates an object to receive notifications concerning the asynchronous data transfer. Typically, one object is created for each bind operation.

The constructor also initializes [m_pT](#m_pt) and [m_pFunc](#m_pfunc) to NULL.

## <a name="dtor"></a> CBindStatusCallback::~CBindStatusCallback

The destructor.

```
~CBindStatusCallback();
```

### Remarks

Frees all allocated resources.

## <a name="download"></a> CBindStatusCallback::Download

Creates a `CBindStatusCallback` object and calls `StartAsyncDownload` to start downloading data asynchronously from the specified URL.

```
static HRESULT Download(
    T* pT,
    ATL_PDATAAVAILABLE pFunc,
    BSTR bstrURL,
    IUnknown* pUnkContainer = NULL,
    BOOL bRelative = FALSE);
```

### Parameters

*pT*<br/>
[in] A pointer to the object requesting the asynchronous data transfer. The `CBindStatusCallback` object is templatized on this object's class.

*pFunc*<br/>
[in] A pointer to the function that receives the data that is read. The function is a member of your object's class of type `T`. See [StartAsyncDownload](#startasyncdownload) for syntax and an example.

*bstrURL*<br/>
[in] The URL to obtain data from. Can be any valid URL or file name. Cannot be NULL. For example:

`CComBSTR mybstr =_T("http://somesite/data.htm")`

*pUnkContainer*<br/>
[in] The `IUnknown` of the container. NULL by default.

*bRelative*<br/>
[in] A flag indicating whether the URL is relative or absolute. FALSE by default, meaning the URL is absolute.

### Return Value

One of the standard HRESULT values.

### Remarks

Every time data is available it is sent to the object through `OnDataAvailable`. `OnDataAvailable` reads the data and calls the function pointed to by *pFunc* (for example, to store the data or print it to the screen).

## <a name="getbindinfo"></a> CBindStatusCallback::GetBindInfo

Called to tell the moniker how to bind.

```
STDMETHOD(GetBindInfo)(
    DWORD* pgrfBSCF,
    BINDINFO* pbindinfo);
```

### Parameters

*pgrfBSCF*<br/>
[out] A pointer to BINDF enumeration values indicating how the bind operation should occur. By default, set with the following enumeration values:

BINDF_ASYNCHRONOUS Asynchronous download.

BINDF_ASYNCSTORAGE `OnDataAvailable` returns E_PENDING when data is not yet available rather than blocking until data is available.

BINDF_GETNEWESTVERSION The bind operation should retrieve the newest version of the data.

BINDF_NOWRITECACHE The bind operation should not store retrieved data in the disk cache.

*pbindinfo*<br/>
[in, out] A pointer to the `BINDINFO` structure giving more information about how the object wants binding to occur.

### Return Value

One of the standard HRESULT values.

### Remarks

The default implementation sets the binding to be asynchronous and to use the data-push model. In the data-push model, the moniker drives the asynchronous bind operation and continuously notifies the client whenever new data is available.

## <a name="getpriority"></a> CBindStatusCallback::GetPriority

Called by the asynchronous moniker to get the priority of the bind operation.

```
STDMETHOD(GetPriority)(LONG* pnPriority);
```

### Parameters

*pnPriority*<br/>
[out] Address of the **LONG** variable that, on success, receives the priority.

### Return Value

Returns E_NOTIMPL.

## <a name="m_dwavailabletoread"></a> CBindStatusCallback::m_dwAvailableToRead

Can be used to store the number of bytes available to be read.

```
DWORD m_dwAvailableToRead;
```

### Remarks

Initialized to zero in `StartAsyncDownload`.

## <a name="m_dwtotalread"></a> CBindStatusCallback::m_dwTotalRead

The cumulative total of bytes read in the asynchronous data transfer.

```
DWORD m_dwTotalRead;
```

### Remarks

Incremented every time `OnDataAvailable` is called by the number of bytes actually read. Initialized to zero in `StartAsyncDownload`.

## <a name="m_pfunc"></a> CBindStatusCallback::m_pFunc

The function pointed to by `m_pFunc` is called by `OnDataAvailable` after it reads the available data (for example, to store the data or print it to the screen).

```
ATL_PDATAAVAILABLE m_pFunc;
```

### Remarks

The function pointed to by `m_pFunc` is a member of your object's class and has the following syntax:

```cpp
void Function_Name(
   CBindStatusCallback<T>* pbsc,
   BYTE* pBytes,
   DWORD dwSize
   );
```

## <a name="m_pt"></a> CBindStatusCallback::m_pT

A pointer to the object requesting the asynchronous data transfer.

```
T* m_pT;
```

### Remarks

The `CBindStatusCallback` object is templatized on this object's class.

## <a name="m_spbindctx"></a> CBindStatusCallback::m_spBindCtx

A pointer to an [IBindCtx](/windows/win32/api/objidl/nn-objidl-ibindctx) interface that provides access to the bind context (an object that stores information about a particular moniker binding operation).

```
CComPtr<IBindCtx> m_spBindCtx;
```

### Remarks

Initialized in `StartAsyncDownload`.

## <a name="m_spbinding"></a> CBindStatusCallback::m_spBinding

A pointer to the `IBinding` interface of the current bind operation.

```
CComPtr<IBinding> m_spBinding;
```

### Remarks

Initialized in `OnStartBinding` and released in `OnStopBinding`.

## <a name="m_spmoniker"></a> CBindStatusCallback::m_spMoniker

A pointer to the [IMoniker](/windows/win32/api/objidl/nn-objidl-imoniker) interface for the URL to use.

```
CComPtr<IMoniker> m_spMoniker;
```

### Remarks

Initialized in `StartAsyncDownload`.

## <a name="m_spstream"></a> CBindStatusCallback::m_spStream

A pointer to the [IStream](/windows/win32/api/objidl/nn-objidl-istream) interface of the current bind operation.

```
CComPtr<IStream> m_spStream;
```

### Remarks

Initialized in `OnDataAvailable` from the `STGMEDIUM` structure when the BCSF flag is BCSF_FIRSTDATANOTIFICATION and released when the BCSF flag is BCSF_LASTDATANOTIFICATION.

## <a name="ondataavailable"></a> CBindStatusCallback::OnDataAvailable

The system-supplied asynchronous moniker calls `OnDataAvailable` to provide data to the object as it becomes available.

```
STDMETHOD(
    OnDataAvailable)(DWORD grfBSCF,
    DWORD dwSize,
    FORMATETC* /* pformatetc */,
    STGMEDIUM* pstgmed);
```

### Parameters

*grfBSCF*<br/>
[in] A BSCF enumeration value. One or more of the following: BSCF_FIRSTDATANOTIFICATION, BSCF_INTERMEDIARYDATANOTIFICATION, or BSCF_LASTDATANOTIFICATION.

*dwSize*<br/>
[in] The cumulative amount (in bytes) of data available since the beginning of the binding. Can be zero, indicating that the amount of data is not relevant or that no specific amount became available.

*pformatetc*<br/>
[in] Pointer to the [FORMATETC](/windows/win32/com/the-formatetc-structure) structure that contains the format of the available data. If there is no format, can be CF_NULL.

*pstgmed*<br/>
[in] Pointer to the [STGMEDIUM](/windows/win32/com/the-stgmedium-structure) structure that holds the actual data now available.

### Return Value

One of the standard HRESULT values.

### Remarks

`OnDataAvailable` reads the data, then calls a method of your object's class (for example, to store the data or print it to the screen). See [CBindStatusCallback::StartAsyncDownload](#startasyncdownload) for details.

## <a name="onlowresource"></a> CBindStatusCallback::OnLowResource

Called when resources are low.

```
STDMETHOD(OnLowResource)(DWORD /* dwReserved */);
```

### Parameters

*dwReserved*<br/>
Reserved.

### Return Value

Returns S_OK.

## <a name="onobjectavailable"></a> CBindStatusCallback::OnObjectAvailable

Called by the asynchronous moniker to pass an object interface pointer to your application.

```
STDMETHOD(OnObjectAvailable)(REFID /* riid */, IUnknown* /* punk */);
```

### Parameters

*riid*<br/>
Interface identifier of the requested interface. Unused.

*punk*<br/>
Address of the IUnknown interface. Unused.

### Return Value

Returns S_OK.

## <a name="onprogress"></a> CBindStatusCallback::OnProgress

Called to indicate the progress of a data downloading process.

```
STDMETHOD(OnProgress)(
    ULONG /* ulProgress */,
    ULONG /* ulProgressMax */,
    ULONG /* ulStatusCode */,
    LPCWSTRONG /* szStatusText */);
```

### Parameters

*ulProgress*<br/>
Unsigned long integer. Unused.

*ulProgressMax*<br/>
Unsigned long integer Unused.

*ulStatusCode*<br/>
Unsigned long integer. Unused.

*szStatusText*<br/>
Address of a string value. Unused.

### Return Value

Returns S_OK.

## <a name="onstartbinding"></a> CBindStatusCallback::OnStartBinding

Sets the data member [m_spBinding](#m_spbinding) to the `IBinding` pointer in *pBinding*.

```
STDMETHOD(OnStartBinding)(DWORD /* dwReserved */, IBinding* pBinding);
```

### Parameters

*dwReserved*<br/>
Reserved for future use.

*pBinding*<br/>
[in] Address of the IBinding interface of the current bind operation. This cannot be NULL. The client should call AddRef on this pointer to keep a reference to the binding object.

## <a name="onstopbinding"></a> CBindStatusCallback::OnStopBinding

Releases the `IBinding` pointer in the data member [m_spBinding](#m_spbinding).

```
STDMETHOD(OnStopBinding)(HRESULT hresult, LPCWSTR /* szError */);
```

### Parameters

*hresult*<br/>
Status code returned from the bind operation.

*szError*<br/>
Address of a string value. Unused.

### Remarks

Called by the system-supplied asynchronous moniker to indicate the end of the bind operation.

## <a name="startasyncdownload"></a> CBindStatusCallback::StartAsyncDownload

Starts downloading data asynchronously from the specified URL.

```
HRESULT StartAsyncDownload(
    T* pT,
    ATL_PDATAAVAILABLE pFunc,
    BSTR bstrURL,
    IUnknown* pUnkContainer = NULL,
    BOOL bRelative = FALSE);
```

### Parameters

*pT*<br/>
[in] A pointer to the object requesting the asynchronous data transfer. The `CBindStatusCallback` object is templatized on this object's class.

*pFunc*<br/>
[in] A pointer to the function that receives the data being read. The function is a member of your object's class of type `T`. See **Remarks** for syntax and an example.

*bstrURL*<br/>
[in] The URL to obtain data from. Can be any valid URL or file name. Cannot be NULL. For example:

`CComBSTR mybstr =_T("http://somesite/data.htm")`

*pUnkContainer*<br/>
[in] The `IUnknown` of the container. NULL by default.

*bRelative*<br/>
[in] A flag indicating whether the URL is relative or absolute. FALSE by default, meaning the URL is absolute.

### Return Value

One of the standard HRESULT values.

### Remarks

Every time data is available it is sent to the object through `OnDataAvailable`. `OnDataAvailable` reads the data and calls the function pointed to by *pFunc* (for example, to store the data or print it to the screen).

The function pointed to by *pFunc* is a member of your object's class and has the following syntax:

```cpp
void Function_Name(
    CBindStatusCallback<T>* pbsc,
    BYTE* pBytes,
    DWORD dwSize);
```

In the following example (taken from the [ASYNC](../../overview/visual-cpp-samples.md) sample), the function `OnData` writes the received data into a text box.

### Example

[!code-cpp[NVC_ATL_Windowing#87](../../atl/codesnippet/cpp/cbindstatuscallback-class_2.h)]

## See also

[Class Overview](../../atl/atl-class-overview.md)
