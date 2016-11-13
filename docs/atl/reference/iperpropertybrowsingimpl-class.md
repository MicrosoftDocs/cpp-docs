---
title: "IPerPropertyBrowsingImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.IPerPropertyBrowsingImpl"
  - "IPerPropertyBrowsing"
  - "ATL::IPerPropertyBrowsingImpl"
  - "ATL::IPerPropertyBrowsingImpl<T>"
  - "IPerPropertyBrowsingImpl"
  - "ATL.IPerPropertyBrowsingImpl<T>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IPerPropertyBrowsingImpl class"
  - "property pages, accessing information"
  - "IPerPropertyBrowsing, ATL implementation"
ms.assetid: 0b1a9be3-d242-4767-be69-663a21e4b728
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
# IPerPropertyBrowsingImpl Class
This class implements **IUnknown** and allows a client to access the information in an object's property pages.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## Syntax  
  
```
template <class   T>
    class ATL_NO_VTABLE IPerPropertyBrowsingImpl :
    public IPerPropertyBrowsing
```  
  
#### Parameters  
 `T`  
 Your class, derived from `IPerPropertyBrowsingImpl`.  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[IPerPropertyBrowsingImpl::GetDisplayString](#iperpropertybrowsingimpl__getdisplaystring)|Retrieves a string describing a given property.|  
|[IPerPropertyBrowsingImpl::GetPredefinedStrings](#iperpropertybrowsingimpl__getpredefinedstrings)|Retrieves an array of strings corresponding to the values that a given property can accept.|  
|[IPerPropertyBrowsingImpl::GetPredefinedValue](#iperpropertybrowsingimpl__getpredefinedvalue)|Retrieves a **VARIANT** containing the value of a property identified by a given DISPID. The DISPID is associated with the string name retrieved from `GetPredefinedStrings`. The ATL implementation returns **E_NOTIMPL**.|  
|[IPerPropertyBrowsingImpl::MapPropertyToPage](#iperpropertybrowsingimpl__mappropertytopage)|Retrieves the CLSID of the property page associated with a given property.|  
  
## Remarks  
 The [IPerPropertyBrowsing](http://msdn.microsoft.com/library/windows/desktop/ms678432) interface allows a client to access the information in an object's property pages. Class `IPerPropertyBrowsingImpl` provides a default implementation of this interface and implements **IUnknown** by sending information to the dump device in debug builds.  
  
> [!NOTE]
>  If you are using Microsoft Access as the container application, you must derive your class from `IPerPropertyBrowsingImpl`. Otherwise, Access will not load your control.  
  
 **Related Articles** [ATL Tutorial](../../atl/active-template-library-atl-tutorial.md), [Creating an ATL Project](../../atl/reference/creating-an-atl-project.md)  
  
## Inheritance Hierarchy  
 `IPerPropertyBrowsing`  
  
 `IPerPropertyBrowsingImpl`  
  
## Requirements  
 **Header:** atlctl.h  
  
##  <a name="iperpropertybrowsingimpl__getdisplaystring"></a>  IPerPropertyBrowsingImpl::GetDisplayString  
 Retrieves a string describing a given property.  
  
```
STDMETHOD(GetDisplayString)(
    DISPID dispID,
    BSTR* pBstr);
```  
  
### Remarks  
 See [IPerPropertyBrowsing::GetDisplayString](http://msdn.microsoft.com/library/windows/desktop/ms688734) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="iperpropertybrowsingimpl__getpredefinedstrings"></a>  IPerPropertyBrowsingImpl::GetPredefinedStrings  
 Fills each array with zero items.  
  
```
STDMETHOD(GetPredefinedStrings)(
    DISPID dispID,
    CALPOLESTR* pCaStringsOut,
    CADWORD* pCaCookiesOut);
```  
  
### Return Value  
 ATL's implementation of [GetPredefinedValue](#iperpropertybrowsingimpl__getpredefinedvalue) returns **E_NOTIMPL**.  
  
### Remarks  
 See [IPerPropertyBrowsing::GetPredefinedStrings](http://msdn.microsoft.com/library/windows/desktop/ms679724) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="iperpropertybrowsingimpl__getpredefinedvalue"></a>  IPerPropertyBrowsingImpl::GetPredefinedValue  
 Retrieves a **VARIANT** containing the value of a property identified by a given DISPID. The DISPID is associated with the string name retrieved from `GetPredefinedStrings`.  
  
```
STDMETHOD(GetPredefinedValue)(
    DISPID dispID,
    DWORD dwCookie,
    VARIANT* pVarOut);
```  
  
### Return Value  
 Returns **E_NOTIMPL**.  
  
### Remarks  
 ATL's implementation of [GetPredefinedStrings](#iperpropertybrowsingimpl__getpredefinedstrings) retrieves no corresponding strings.  
  
 See [IPerPropertyBrowsing::GetPredefinedValue](http://msdn.microsoft.com/library/windows/desktop/ms690401) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="iperpropertybrowsingimpl__mappropertytopage"></a>  IPerPropertyBrowsingImpl::MapPropertyToPage  
 Retrieves the CLSID of the property page associated with the specified property.  
  
```
STDMETHOD(MapPropertyToPage)(
    DISPID dispID,
    CLSID* pClsid);
```  
  
### Remarks  
 ATL uses the object's property map to obtain this information.  
  
 See [IPerPropertyBrowsing::MapPropertyToPage](http://msdn.microsoft.com/library/windows/desktop/ms694476) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## See Also  
 [IPropertyPageImpl Class](../../atl/reference/ipropertypageimpl-class.md)   
 [ISpecifyPropertyPagesImpl Class](../../atl/reference/ispecifypropertypagesimpl-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)
