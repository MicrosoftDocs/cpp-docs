---
title: "CBindStatusCallback Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CBindStatusCallback"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "asynchronous data transfer [C++]"
  - "data transfer [C++]"
  - "data transfer [C++], asynchronous"
  - "CBindStatusCallback class"
ms.assetid: 0f5da276-6031-4418-b2a9-a4750ef29e77
caps.latest.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# CBindStatusCallback Class
This class implements the `IBindStatusCallback` interface.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
template <class T,
    int nBindFlags = BINDF_ASYNCHRONOUS |   BINDF_ASYNCSTORAGE | BINDF_GETNEWESTVERSION | BINDF_NOWRITECACHE>  class ATL_NO_VTABLE CBindStatusCallback : public CComObjectRootEx
 <T ::_ThreadModel::ThreadModelNoCS>,
    public IBindStatusCallbackImpl<T>
```  
  
#### Parameters  
 `T`  
 Your class containing the function that will be called as the data is received.  
  
 *nBindFlags*  
 Specifies the bind flags that are returned by [GetBindInfo](#cbindstatuscallback__getbindinfo). The default implementation sets the binding to be asynchronous, retrieves the newest version of the data/object, and does not store retrieved data in the disk cache.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CBindStatusCallback::CBindStatusCallback](#cbindstatuscallback__cbindstatuscallback)|The constructor.|  
|[CBindStatusCallback::~CBindStatusCallback](#cbindstatuscallback___dtorcbindstatuscallback)|The destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CBindStatusCallback::Download](#cbindstatuscallback__download)|Static method that starts the download process, creates a `CBindStatusCallback` object, and calls `StartAsyncDownload`.|  
|[CBindStatusCallback::GetBindInfo](#cbindstatuscallback__getbindinfo)|Called by the asynchronous moniker to request information on the type of bind to be created.|  
|[CBindStatusCallback::GetPriority](#cbindstatuscallback__getpriority)|Called by the asynchronous moniker to get the priority of the bind operation. The ATL implementation returns `E_NOTIMPL`.|  
|[CBindStatusCallback::OnDataAvailable](#cbindstatuscallback__ondataavailable)|Called to provide data to your application as it becomes available. Reads the data, then calls the function passed to it to use the data.|  
|[CBindStatusCallback::OnLowResource](#cbindstatuscallback__onlowresource)|Called when resources are low. The ATL implementation returns `S_OK`.|  
|[CBindStatusCallback::OnObjectAvailable](#cbindstatuscallback__onobjectavailable)|Called by the asynchronous moniker to pass an object interface pointer to your application. The ATL implementation returns `S_OK`.|  
|[CBindStatusCallback::OnProgress](#cbindstatuscallback__onprogress)|Called to indicate the progress of a data downloading process. The ATL implementation returns `S_OK`.|  
|[CBindStatusCallback::OnStartBinding](#cbindstatuscallback__onstartbinding)|Called when binding is started.|  
|[CBindStatusCallback::OnStopBinding](#cbindstatuscallback__onstopbinding)|Called when the asynchronous data transfer is stopped.|  
|[CBindStatusCallback::StartAsyncDownload](#cbindstatuscallback__startasyncdownload)|Initializes the bytes available and bytes read to zero, creates a push-type stream object from a URL, and calls `OnDataAvailable` every time data is available.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CBindStatusCallback::m_dwAvailableToRead](#cbindstatuscallback__m_dwavailabletoread)|Number of bytes available to read.|  
|[CBindStatusCallback::m_dwTotalRead](#cbindstatuscallback__m_dwtotalread)|Total number of bytes read.|  
|[CBindStatusCallback::m_pFunc](#cbindstatuscallback__m_pfunc)|Pointer to the function called when data is available.|  
|[CBindStatusCallback::m_pT](#cbindstatuscallback__m_pt)|Pointer to the object requesting the asynchronous data transfer.|  
|[CBindStatusCallback::m_spBindCtx](#cbindstatuscallback__m_spbindctx)|Pointer to the [IBindCtx](http://msdn.microsoft.com/library/windows/desktop/ms693755) interface for the current bind operation.|  
|[CBindStatusCallback::m_spBinding](#cbindstatuscallback__m_spbinding)|Pointer to the `IBinding` interface for the current bind operation.|  
|[CBindStatusCallback::m_spMoniker](#cbindstatuscallback__m_spmoniker)|Pointer to the [IMoniker](http://msdn.microsoft.com/library/windows/desktop/ms679705) interface for the URL to use.|  
|[CBindStatusCallback::m_spStream](#cbindstatuscallback__m_spstream)|Pointer to the [IStream](http://msdn.microsoft.com/library/windows/desktop/aa380034) interface for the data transfer.|  
  
## Remarks  
 The `CBindStatusCallback` class implements the `IBindStatusCallback` interface. `IBindStatusCallback` must be implemented by your application so it can receive notifications from an asynchronous data transfer. The asynchronous moniker provided by the system uses `IBindStatusCallback` methods to send and receive information about the asynchronous data transfer to and from your object.  
  
 Typically, the `CBindStatusCallback` object is associated with a specific bind operation. For example, in the [ASYNC](../../visual-cpp-samples.md) sample, when you set the URL property, it creates a `CBindStatusCallback` object in the call to `Download`:  
  
 [!code-cpp[NVC_ATL_Windowing#86](../../atl/codesnippet/cpp/cbindstatuscallback-class_1.h)]  
  
 The asynchronous moniker uses the callback function `OnData` to call your application when it has data. The asynchronous moniker is provided by the system.  
  
## Inheritance Hierarchy  
 `CComObjectRootBase`  
  
 `IBindStatusCallback`  
  
 [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)  
  
 `CBindStatusCallback`  
  
## Requirements  
 **Header:** atlctl.h  
  
##  <a name="cbindstatuscallback__cbindstatuscallback"></a>  CBindStatusCallback::CBindStatusCallback  
 The constructor.  
  
```
CBindStatusCallback();
```  
  
### Remarks  
 Creates an object to receive notifications concerning the asynchronous data transfer. Typically, one object is created for each bind operation.  
  
 The constructor also initializes [m_pT](#cbindstatuscallback__m_pt) and [m_pFunc](#cbindstatuscallback__m_pfunc) to **NULL**.  
  
##  <a name="cbindstatuscallback___dtorcbindstatuscallback"></a>  CBindStatusCallback::~CBindStatusCallback  
 The destructor.  
  
```
~CBindStatusCallback();
```  
  
### Remarks  
 Frees all allocated resources.  
  
##  <a name="cbindstatuscallback__download"></a>  CBindStatusCallback::Download  
 Creates a `CBindStatusCallback` object and calls `StartAsyncDownload` to start downloading data asynchronously from the specified URL.  
  
```
static HRESULT Download(T* pT,
    ATL_PDATAAVAILABLE pFunc,
    BSTR bstrURL,
    IUnknown* pUnkContainer = NULL,
    BOOL bRelative = FALSE);
```  
  
### Parameters  
 *pT*  
 [in] A pointer to the object requesting the asynchronous data transfer. The `CBindStatusCallback` object is templatized on this object's class.  
  
 *pFunc*  
 [in] A pointer to the function that receives the data that is read. The function is a member of your object's class of type `T`. See [StartAsyncDownload](#cbindstatuscallback__startasyncdownload) for syntax and an example.  
  
 `bstrURL`  
 [in] The URL to obtain data from. Can be any valid URL or file name. Cannot be **NULL**. For example:  
  
 `CComBSTR mybstr =_T("http://somesite/data.htm")`  
  
 `pUnkContainer`  
 [in] The **IUnknown** of the container. **NULL** by default.  
  
 `bRelative`  
 [in] A flag indicating whether the URL is relative or absolute. **FALSE** by default, meaning the URL is absolute.  
  
### Return Value  
 One of the standard `HRESULT` values.  
  
### Remarks  
 Every time data is available it is sent to the object through `OnDataAvailable`. `OnDataAvailable` reads the data and calls the function pointed to by *pFunc* (for example, to store the data or print it to the screen).  
  
##  <a name="cbindstatuscallback__getbindinfo"></a>  CBindStatusCallback::GetBindInfo  
 Called to tell the moniker how to bind.  
  
```
STDMETHOD(GetBindInfo)(
    DWORD* pgrfBSCF,
    BINDINFO* pbindinfo);
```  
  
### Parameters  
 *pgrfBSCF*  
 [out] A pointer to **BINDF** enumeration values indicating how the bind operation should occur. By default, set with the following enumeration values:  
  
 **BINDF_ASYNCHRONOUS** Asynchronous download.  
  
 **BINDF_ASYNCSTORAGE** `OnDataAvailable` returns **E_PENDING** when data is not yet available rather than blocking until data is available.  
  
 **BINDF_GETNEWESTVERSION** The bind operation should retrieve the newest version of the data.  
  
 **BINDF_NOWRITECACHE** The bind operation should not store retrieved data in the disk cache.  
  
 *pbindinfo*  
 [in, out] A pointer to the **BINDINFO** structure giving more information about how the object wants binding to occur.  
  
### Return Value  
 One of the standard `HRESULT` values.  
  
### Remarks  
 The default implementation sets the binding to be asynchronous and to use the data-push model. In the data-push model, the moniker drives the asynchronous bind operation and continuously notifies the client whenever new data is available.  
  
##  <a name="cbindstatuscallback__getpriority"></a>  CBindStatusCallback::GetPriority  
 Called by the asynchronous moniker to get the priority of the bind operation.  
  
```
STDMETHOD(GetPriority)(LONG* pnPriority);
```  
  
### Parameters  
 *pnPriority*  
 [out] Address of the **LONG** variable that, on success, receives the priority.  
  
### Return Value  
 Returns **E_NOTIMPL**.  
  
##  <a name="cbindstatuscallback__m_dwavailabletoread"></a>  CBindStatusCallback::m_dwAvailableToRead  
 Can be used to store the number of bytes available to be read.  
  
```
DWORD m_dwAvailableToRead;
```  
  
### Remarks  
 Initialized to zero in `StartAsyncDownload`.  
  
##  <a name="cbindstatuscallback__m_dwtotalread"></a>  CBindStatusCallback::m_dwTotalRead  
 The cumulative total of bytes read in the asynchronous data transfer.  
  
```
DWORD m_dwTotalRead;
```  
  
### Remarks  
 Incremented every time `OnDataAvailable` is called by the number of bytes actually read. Initialized to zero in `StartAsyncDownload`.  
  
##  <a name="cbindstatuscallback__m_pfunc"></a>  CBindStatusCallback::m_pFunc  
 The function pointed to by `m_pFunc` is called by `OnDataAvailable` after it reads the available data (for example, to store the data or print it to the screen).  
  
```
ATL_PDATAAVAILABLE m_pFunc;
```  
  
### Remarks  
 The function pointed to by `m_pFunc` is a member of your object's class and has the following syntax:  
  
 `void Function_Name(`  
  
 `CBindStatusCallback<T>* pbsc,`  
  
 `BYTE* pBytes,`  
  
 `DWORD dwSize`  
  
 `);`  
  
##  <a name="cbindstatuscallback__m_pt"></a>  CBindStatusCallback::m_pT  
 A pointer to the object requesting the asynchronous data transfer.  
  
```
T* m_pT;
```  
  
### Remarks  
 The `CBindStatusCallback` object is templatized on this object's class.  
  
##  <a name="cbindstatuscallback__m_spbindctx"></a>  CBindStatusCallback::m_spBindCtx  
 A pointer to an [IBindCtx](http://msdn.microsoft.com/library/windows/desktop/ms693755) interface that provides access to the bind context (an object that stores information about a particular moniker binding operation).  
  
```
CComPtr<IBindCtx> m_spBindCtx;
```  
  
### Remarks  
 Initialized in `StartAsyncDownload`.  
  
##  <a name="cbindstatuscallback__m_spbinding"></a>  CBindStatusCallback::m_spBinding  
 A pointer to the `IBinding` interface of the current bind operation.  
  
```
CComPtr<IBinding> m_spBinding;
```  
  
### Remarks  
 Initialized in `OnStartBinding` and released in `OnStopBinding`.  
  
##  <a name="cbindstatuscallback__m_spmoniker"></a>  CBindStatusCallback::m_spMoniker  
 A pointer to the [IMoniker](http://msdn.microsoft.com/library/windows/desktop/ms679705) interface for the URL to use.  
  
```
CComPtr<IMoniker> m_spMoniker;
```  
  
### Remarks  
 Initialized in `StartAsyncDownload`.  
  
##  <a name="cbindstatuscallback__m_spstream"></a>  CBindStatusCallback::m_spStream  
 A pointer to the [IStream](http://msdn.microsoft.com/library/windows/desktop/aa380034) interface of the current bind operation.  
  
```
CComPtr<IStream> m_spStream;
```  
  
### Remarks  
 Initialized in `OnDataAvailable` from the **STGMEDIUM** structure when the **BCSF** flag is **BCSF_FIRSTDATANOTIFICATION** and released when the **BCSF** flag is **BCSF_LASTDATANOTIFICATION**.  
  
##  <a name="cbindstatuscallback__ondataavailable"></a>  CBindStatusCallback::OnDataAvailable  
 The system-supplied asynchronous moniker calls `OnDataAvailable` to provide data to the object as it becomes available.  
  
```
STDMETHOD(OnDataAvailable)(DWORD grfBSCF,
    DWORD dwSize,
    FORMATETC* /* pformatetc */,
    STGMEDIUM* pstgmed);
```  
  
### Parameters  
 *grfBSCF*  
 [in] A **BSCF** enumeration value. One or more of the following: **BSCF_FIRSTDATANOTIFICATION**, **BSCF_INTERMEDIARYDATANOTIFICATION**, or **BSCF_LASTDATANOTIFICATION**.  
  
 `dwSize`  
 [in] The cumulative amount (in bytes) of data available since the beginning of the binding. Can be zero, indicating that the amount of data is not relevant or that no specific amount became available.  
  
 *pformatetc*  
 [in] Pointer to the [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682242) structure that contains the format of the available data. If there is no format, can be **CF_NULL**.  
  
 *pstgmed*  
 [in] Pointer to the [STGMEDIUM](http://msdn.microsoft.com/library/windows/desktop/ms695269) structure that holds the actual data now available.  
  
### Return Value  
 One of the standard `HRESULT` values.  
  
### Remarks  
 `OnDataAvailable` reads the data, then calls a method of your object's class (for example, to store the data or print it to the screen). See [CBindStatusCallback::StartAsyncDownload](#cbindstatuscallback__startasyncdownload) for details.  
  
##  <a name="cbindstatuscallback__onlowresource"></a>  CBindStatusCallback::OnLowResource  
 Called when resources are low.  
  
```
STDMETHOD(OnLowResource)(DWORD /* dwReserved */);
```  
  
### Parameters  
 `dwReserved`  
 Reserved.  
  
### Return Value  
 Returns `S_OK`.  
  
##  <a name="cbindstatuscallback__onobjectavailable"></a>  CBindStatusCallback::OnObjectAvailable  
 Called by the asynchronous moniker to pass an object interface pointer to your application.  
  
```
STDMETHOD(OnObjectAvailable)(REFID /* riid */,
    IUnknown* /* punk */);
```  
  
### Parameters  
 `riid`  
 Interface identifier of the requested interface. Unused.  
  
 `punk`  
 Address of the IUnknown interface. Unused.  
  
### Return Value  
 Returns `S_OK`.  
  
##  <a name="cbindstatuscallback__onprogress"></a>  CBindStatusCallback::OnProgress  
 Called to indicate the progress of a data downloading process.  
  
```
STDMETHOD(OnProgress)(ULONG /* ulProgress */,
    ULONG /* ulProgressMax */,
    ULONG /* ulStatusCode */,
    LPCWSTRONG /* szStatusText */);
```  
  
### Parameters  
 `ulProgress`  
 Unsigned long integer. Unused.  
  
 `ulProgressMax`  
 Unsigned long integer Unused.  
  
 `ulStatusCode`  
 Unsigned long integer. Unused.  
  
 `szStatusText`  
 Address of a string value. Unused.  
  
### Return Value  
 Returns `S_OK`.  
  
##  <a name="cbindstatuscallback__onstartbinding"></a>  CBindStatusCallback::OnStartBinding  
 Sets the data member [m_spBinding](#cbindstatuscallback__m_spbinding) to the `IBinding` pointer in `pBinding`.  
  
```
STDMETHOD(OnStartBinding)(DWORD /* dwReserved */,
    IBinding* pBinding);
```  
  
### Parameters  
 `dwReserved`  
 Reserved for future use.  
  
 `pBinding`  
 [in] Address of the IBinding interface of the current bind operation. This cannot be NULL. The client should call AddRef on this pointer to keep a reference to the binding object.  
  
##  <a name="cbindstatuscallback__onstopbinding"></a>  CBindStatusCallback::OnStopBinding  
 Releases the `IBinding` pointer in the data member [m_spBinding](#cbindstatuscallback__m_spbinding).  
  
```
STDMETHOD(OnStopBinding)(HRESULT hresult,  LPCWSTR /* szError */);
```  
  
### Parameters  
 `hresult`  
 Status code returned from the bind operation.  
  
 szStatusText  
 Address of a string value Unused.  
  
### Remarks  
 Called by the system-supplied asynchronous moniker to indicate the end of the bind operation.  
  
##  <a name="cbindstatuscallback__startasyncdownload"></a>  CBindStatusCallback::StartAsyncDownload  
 Starts downloading data asynchronously from the specified URL.  
  
```
HRESULT StartAsyncDownload(T* pT,
    ATL_PDATAAVAILABLE pFunc,
    BSTR bstrURL,
    IUnknown* pUnkContainer = NULL,
    BOOL bRelative = FALSE);
```  
  
### Parameters  
 *pT*  
 [in] A pointer to the object requesting the asynchronous data transfer. The `CBindStatusCallback` object is templatized on this object's class.  
  
 *pFunc*  
 [in] A pointer to the function that receives the data being read. The function is a member of your object's class of type `T`. See **Remarks** for syntax and an example.  
  
 `bstrURL`  
 [in] The URL to obtain data from. Can be any valid URL or file name. Cannot be **NULL**. For example:  
  
 `CComBSTR mybstr =_T("http://somesite/data.htm")`  
  
 `pUnkContainer`  
 [in] The **IUnknown** of the container. **NULL** by default.  
  
 `bRelative`  
 [in] A flag indicating whether the URL is relative or absolute. **FALSE** by default, meaning the URL is absolute.  
  
### Return Value  
 One of the standard `HRESULT` values.  
  
### Remarks  
 Every time data is available it is sent to the object through `OnDataAvailable`. `OnDataAvailable` reads the data and calls the function pointed to by *pFunc* (for example, to store the data or print it to the screen).  
  
 The function pointed to by *pFunc* is a member of your object's class and has the following syntax:  
  
 `void Function_Name(`  
  
 `CBindStatusCallback<T>*` `pbsc` `,`  
  
 `BYTE*` `pBytes` `,`  
  
 `DWORD` `dwSize`  
  
 `);`  
  
 In the following example (taken from the [ASYNC](../../visual-cpp-samples.md) sample), the function `OnData` writes the received data into a text box.  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#87](../../atl/codesnippet/cpp/cbindstatuscallback-class_2.h)]  
  
## See Also  
 [Class Overview](../../atl/atl-class-overview.md)
