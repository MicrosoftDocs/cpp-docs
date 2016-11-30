---
title: "Marshaling Global Functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
ms.assetid: 877100b5-6ad9-44c5-a2e0-09414f1720d0
caps.latest.revision: 19
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
# Marshaling Global Functions
These functions provide support for marshaling and converting marshaling data into interface pointers.  
  
> [!IMPORTANT]
>  The functions listed in the following table cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
|||  
|-|-|  
|[AtlFreeMarshalStream](#atlfreemarshalstream)|Releases the marshal data and the `IStream` pointer.|  
|[AtlMarshalPtrInProc](#atlmarshalptrinproc)|Creates a new stream object and marshals the specified interface pointer.|  
|[AtlUnmarshalPtr](#atlunmarshalptr)|Converts a stream's marshaling data into an interface pointer.|  
  
##  <a name="atlfreemarshalstream"></a>  AtlFreeMarshalStream  
 Releases the marshal data in the stream, then releases the stream pointer.  

```
HRESULT AtlFreeMarshalStream(IStream* pStream);
```  
  
### Parameters  
 `pStream`  
 [in] A pointer to the `IStream` interface on the stream used for marshaling.  
  
### Example  
  See the example for [AtlMarshalPtrInProc](#atlmarshalptrinproc).  
  
##  <a name="atlmarshalptrinproc"></a>  AtlMarshalPtrInProc  
 Creates a new stream object, writes the CLSID of the proxy to the stream, and marshals the specified interface pointer by writing the data needed to initialize the proxy into the stream.  
  
```
HRESULT AtlMarshalPtrInProc(
    IUnknown* pUnk,
    const IID& iid,
    IStream** ppStream);
```  
  
### Parameters  
 *pUnk*  
 [in] A pointer to the interface to be marshaled.  
  
 `iid`  
 [in] The GUID of the interface being marshaled.  
  
 `ppStream`  
 [out] A pointer to the `IStream` interface on the new stream object used for marshaling.  
  
### Return Value  
 A standard HRESULT value.  
  
### Remarks  
 The **MSHLFLAGS_TABLESTRONG** flag is set so the pointer can be marshaled to multiple streams. The pointer can also be unmarshaled multiple times.  
  
 If marshaling fails, the stream pointer is released.  
  
 `AtlMarshalPtrInProc` can only be used on a pointer to an in-process object.  
  
### Example  
 [!code-cpp[NVC_ATL_COM#50](../../atl/codesnippet/cpp/marshaling-global-functions_1.cpp)]  
  
##  <a name="atlunmarshalptr"></a>  AtlUnmarshalPtr  
 Converts the stream's marshaling data into an interface pointer that can be used by the client.  
   
```
HRESULT AtlUnmarshalPtr(
    IStream* pStream,
    const IID& iid,
    IUnknown** ppUnk);
```  
  
### Parameters  
 `pStream`  
 [in] A pointer to the stream being unmarshaled.  
  
 `iid`  
 [in] The GUID of the interface being unmarshaled.  
  
 `ppUnk`  
 [out] A pointer to the unmarshaled interface.  
  
### Return Value  
 A standard HRESULT value.  
  
### Example  
  See the example for [AtlMarshalPtrInProc](#atlmarshalptrinproc).  
  
## See Also  
 [Functions](../../atl/reference/atl-functions.md)
