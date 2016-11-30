---
title: "IPersistPropertyBagImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "IPersistPropertyBagImpl"
  - "ATL.IPersistPropertyBagImpl<T>"
  - "ATL::IPersistPropertyBagImpl"
  - "ATL::IPersistPropertyBagImpl<T>"
  - "ATL.IPersistPropertyBagImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IPersistPropertyBagImpl class"
ms.assetid: 712af24d-99f8-40f2-9811-53b3ff6e5b19
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
# IPersistPropertyBagImpl Class
This class implements **IUnknown** and allows an object to save its properties to a client-supplied property bag.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## Syntax  
  
```
template <class T>  class ATL_NO_VTABLE IPersistPropertyBagImpl :  public IPersistPropertyBag
```  
  
#### Parameters  
 `T`  
 Your class, derived from `IPersistPropertyBagImpl`.  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[IPersistPropertyBagImpl::GetClassID](#ipersistpropertybagimpl__getclassid)|Retrieves the object's CLSID.|  
|[IPersistPropertyBagImpl::InitNew](#ipersistpropertybagimpl__initnew)|Initializes a newly created object. The ATL implementation returns `S_OK`.|  
|[IPersistPropertyBagImpl::Load](#ipersistpropertybagimpl__load)|Loads the object's properties from a client-supplied property bag.|  
|[IPersistPropertyBagImpl::Save](#ipersistpropertybagimpl__save)|Saves the object's properties into a client-supplied property bag.|  
  
## Remarks  
 The [IPersistPropertyBag](https://msdn.microsoft.com/library/aa768205.aspx) interface allows an object to save its properties to a client-supplied property bag. Class `IPersistPropertyBagImpl` provides a default implementation of this interface and implements **IUnknown** by sending information to the dump device in debug builds.  
  
 **IPersistPropertyBag** works in conjunction with [IPropertyBag](https://msdn.microsoft.com/library/aa768196.aspx) and [IErrorLog](https://msdn.microsoft.com/library/aa768231.aspx). These latter two interfaces must be implemented by the client. Through `IPropertyBag`, the client saves and loads the object's individual properties. Through **IErrorLog**, both the object and the client can report any errors encountered.  
  
 **Related Articles** [ATL Tutorial](../../atl/active-template-library-atl-tutorial.md), [Creating an ATL Project](../../atl/reference/creating-an-atl-project.md)  
  
## Inheritance Hierarchy  
 `IPersistPropertyBag`  
  
 `IPersistPropertyBagImpl`  
  
## Requirements  
 **Header:** atlcom.h  
  
##  <a name="ipersistpropertybagimpl__getclassid"></a>  IPersistPropertyBagImpl::GetClassID  
 Retrieves the object's CLSID.  
  
```
STDMETHOD(GetClassID)(CLSID* pClassID);
```  
  
### Remarks  
 See [IPersist::GetClassID](http://msdn.microsoft.com/library/windows/desktop/ms688664) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ipersistpropertybagimpl__initnew"></a>  IPersistPropertyBagImpl::InitNew  
 Initializes a newly created object.  
  
```
STDMETHOD(InitNew)();
```  
  
### Return Value  
 Returns `S_OK`.  
  
### Remarks  
 See [IPersistPropertyBag::InitNew](https://msdn.microsoft.com/library/aa768204.aspx) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ipersistpropertybagimpl__load"></a>  IPersistPropertyBagImpl::Load  
 Loads the object's properties from a client-supplied property bag.  
  
```
STDMETHOD(Load)(LPPROPERTYBAG pPropBag,  LPERRORLOG pErrorLog);
```  
  
### Remarks  
 ATL uses the object's property map to retrieve this information.  
  
 See [IPersistPropertyBag::Load](https://msdn.microsoft.com/library/aa768206.aspx) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ipersistpropertybagimpl__save"></a>  IPersistPropertyBagImpl::Save  
 Saves the object's properties into a client-supplied property bag.  
  
```
STDMETHOD(Save)(LPPROPERTYBAG pPropBag,
    BOOL fClearDirty,
    BOOL fSaveAllProperties);
```  
  
### Remarks  
 ATL uses the object's property map to store this information. By default, this method saves all properties, regardless of the value of *fSaveAllProperties*.  
  
 See [IPersistPropertyBag::Save](https://msdn.microsoft.com/library/aa768207.aspx) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## See Also  
 [BEGIN_PROP_MAP](http://msdn.microsoft.com/library/bfe30be6-62c3-4dc2-bd49-21ef96f15427)   
 [Class Overview](../../atl/atl-class-overview.md)
