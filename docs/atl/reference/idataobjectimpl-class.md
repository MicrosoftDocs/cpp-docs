---
title: "IDataObjectImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "IDataObjectImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "data transfer [C++]"
  - "data transfer [C++], Uniform Data Transfer"
  - "IDataObjectImpl class"
  - "IDataObject, ATL implementation"
ms.assetid: b680f0f7-7795-40a1-a0f6-f48768201c89
caps.latest.revision: 20
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
# IDataObjectImpl Class
This class provides methods for supporting Uniform Data Transfer and managing connections.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## Syntax  
  
```
template<class T>  class IDataObjectImpl
```  
  
#### Parameters  
 `T`  
 Your class, derived from `IDataObjectImpl`.  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[IDataObjectImpl::DAdvise](#idataobjectimpl__dadvise)|Establishes a connection between the data object and an advise sink. This enables the advise sink to receive notifications of changes in the object.|  
|[IDataObjectImpl::DUnadvise](#idataobjectimpl__dunadvise)|Terminates a connection previously established through `DAdvise`.|  
|[IDataObjectImpl::EnumDAdvise](#idataobjectimpl__enumdadvise)|Creates an enumerator to iterate through the current advisory connections.|  
|[IDataObjectImpl::EnumFormatEtc](#idataobjectimpl__enumformatetc)|Creates an enumerator to iterate through the **FORMATETC** structures supported by the data object. The ATL implementation returns **E_NOTIMPL**.|  
|[IDataObjectImpl::FireDataChange](#idataobjectimpl__firedatachange)|Sends a change notification back to each advise sink.|  
|[IDataObjectImpl::GetCanonicalFormatEtc](#idataobjectimpl__getcanonicalformatetc)|Retrieves a logically equivalent **FORMATETC** structure to one that is more complex. The ATL implementation returns **E_NOTIMPL**.|  
|[IDataObjectImpl::GetData](#idataobjectimpl__getdata)|Transfers data from the data object to the client. The data is described in a **FORMATETC** structure and is transferred through a **STGMEDIUM** structure.|  
|[IDataObjectImpl::GetDataHere](#idataobjectimpl__getdatahere)|Similar to `GetData`, except the client must allocate the **STGMEDIUM** structure. The ATL implementation returns **E_NOTIMPL**.|  
|[IDataObjectImpl::QueryGetData](#idataobjectimpl__querygetdata)|Determines whether the data object supports a particular **FORMATETC** structure for transferring data. The ATL implementation returns **E_NOTIMPL**.|  
|[IDataObjectImpl::SetData](#idataobjectimpl__setdata)|Transfers data from the client to the data object. The ATL implementation returns **E_NOTIMPL**.|  
  
## Remarks  
 The [IDataObject](http://msdn.microsoft.com/library/windows/desktop/ms688421) interface provides methods to support Uniform Data Transfer. `IDataObject` uses the standard format structures [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) and [STGMEDIUM](http://msdn.microsoft.com/library/windows/desktop/ms683812) to retrieve and store data.  
  
 `IDataObject` also manages connections to advise sinks to handle data change notifications. In order for the client to receive data change notifications from the data object, the client must implement the [IAdviseSink](http://msdn.microsoft.com/library/windows/desktop/ms692513) interface on an object called an advise sink. When the client then calls **IDataObject::DAdvise**, a connection is established between the data object and the advise sink.  
  
 Class `IDataObjectImpl` provides a default implementation of `IDataObject` and implements **IUnknown** by sending information to the dump device in debug builds.  
  
 **Related Articles** [ATL Tutorial](../../atl/active-template-library-atl-tutorial.md), [Creating an ATL Project](../../atl/reference/creating-an-atl-project.md)  
  
## Inheritance Hierarchy  
 `IDataObject`  
  
 `IDataObjectImpl`  
  
## Requirements  
 **Header:** atlctl.h  
  
##  <a name="idataobjectimpl__dadvise"></a>  IDataObjectImpl::DAdvise  
 Establishes a connection between the data object and an advise sink.  
  
```
HRESULT DAdvise(
    FORMATETC* pformatetc,
    DWORD advf,
    IAdviseSink* pAdvSink,
    DWORD* pdwConnection);
```  
  
### Remarks  
 This enables the advise sink to receive notifications of changes in the object.  
  
 To terminate the connection, call [DUnadvise](#idataobjectimpl__dunadvise).  
  
 See [IDataObject::DAdvise](http://msdn.microsoft.com/library/windows/desktop/ms692579) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="idataobjectimpl__dunadvise"></a>  IDataObjectImpl::DUnadvise  
 Terminates a connection previously established through [DAdvise](#idataobjectimpl__dadvise).  
  
```
HRESULT DUnadvise(DWORD dwConnection);
```  
  
### Remarks  
 See [IDataObject::DUnadvise](http://msdn.microsoft.com/library/windows/desktop/ms692448) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="idataobjectimpl__enumdadvise"></a>  IDataObjectImpl::EnumDAdvise  
 Creates an enumerator to iterate through the current advisory connections.  
  
```
HRESULT DAdvise(
    FORMATETC* pformatetc,
    DWORD advf,
    IAdviseSink* pAdvSink,
    DWORD* pdwConnection);
```  
  
### Remarks  
 See [IDataObject::EnumDAdvise](http://msdn.microsoft.com/library/windows/desktop/ms680127) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="idataobjectimpl__enumformatetc"></a>  IDataObjectImpl::EnumFormatEtc  
 Creates an enumerator to iterate through the **FORMATETC** structures supported by the data object.  
  
```
HRESULT EnumFormatEtc(DWORD dwDirection,
    IEnumFORMATETC** ppenumFormatEtc);
```  
  
### Remarks  
 See [IDataObject::EnumFormatEtc](http://msdn.microsoft.com/library/windows/desktop/ms683979) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Return Value  
 Returns **E_NOTIMPL**.  
  
##  <a name="idataobjectimpl__firedatachange"></a>  IDataObjectImpl::FireDataChange  
 Sends a change notification back to each advise sink that is currently being managed.  
  
```
HRESULT FireDataChange();
```  
  
### Return Value  
 A standard `HRESULT` value.  
  
##  <a name="idataobjectimpl__getcanonicalformatetc"></a>  IDataObjectImpl::GetCanonicalFormatEtc  
 Retrieves a logically equivalent **FORMATETC** structure to one that is more complex.  
  
```
HRESULT GetCanonicalFormatEtc(
    FORMATETC* pformatetcIn,
    FORMATETC* pformatetcOut);
```  
  
### Return Value  
 Returns **E_NOTIMPL**.  
  
### Remarks  
 See [IDataObject::GetCanonicalFormatEtc](http://msdn.microsoft.com/library/windows/desktop/ms680685) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="idataobjectimpl__getdata"></a>  IDataObjectImpl::GetData  
 Transfers data from the data object to the client.  
  
```
HRESULT GetData(
    FORMATETC* pformatetcIn,
    STGMEDIUM* pmedium);
```  
  
### Remarks  
 The *pformatetcIn* parameter must specify a storage medium type of **TYMED_MFPICT**.  
  
 See [IDataObject::GetData](http://msdn.microsoft.com/library/windows/desktop/ms678431) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="idataobjectimpl__getdatahere"></a>  IDataObjectImpl::GetDataHere  
 Similar to `GetData`, except the client must allocate the **STGMEDIUM** structure.  
  
```
HRESULT GetDataHere(
    FORMATETC* pformatetc,
    STGMEDIUM* pmedium);
```  
  
### Return Value  
 Returns **E_NOTIMPL**.  
  
### Remarks  
 See [IDataObject::GetDataHere](http://msdn.microsoft.com/library/windows/desktop/ms687266) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="idataobjectimpl__querygetdata"></a>  IDataObjectImpl::QueryGetData  
 Determines whether the data object supports a particular **FORMATETC** structure for transferring data.  
  
```
HRESULT QueryGetData(FORMATETC* pformatetc);
```  
  
### Return Value  
 Returns **E_NOTIMPL**.  
  
### Remarks  
 See [IDataObject::QueryGetData](http://msdn.microsoft.com/library/windows/desktop/ms680637) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="idataobjectimpl__setdata"></a>  IDataObjectImpl::SetData  
 Transfers data from the client to the data object.  
  
```
HRESULT SetData(
    FORMATETC* pformatetc,
    STGMEDIUM* pmedium,
    BOOL fRelease);
```  
  
### Return Value  
 Returns **E_NOTIMPL**.  
  
### Remarks  
 See [IDataObject::SetData](http://msdn.microsoft.com/library/windows/desktop/ms686626) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## See Also  
 [Class Overview](../../atl/atl-class-overview.md)
