---
title: "ISpecifyPropertyPagesImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "reference"
f1_keywords: ["ISpecifyPropertyPagesImpl", "ATLCOM/ATL::ISpecifyPropertyPagesImpl", "ATLCOM/ATL::ISpecifyPropertyPagesImpl::GetPages"]
dev_langs: ["C++"]
helpviewer_keywords: ["property pages, CLSIDs associated with", "ISpecifyPropertyPages", "ISpecifyPropertyPagesImpl class"]
ms.assetid: 4e4b9795-b656-4d56-9b8c-85941e7731f9
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# ISpecifyPropertyPagesImpl Class
This class implements `IUnknown` and provides a default implementation of the [ISpecifyPropertyPages](/windows/desktop/api/ocidl/nn-ocidl-ispecifypropertypages) interface.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
template<class T>  
class ATL_NO_VTABLE ISpecifyPropertyPagesImpl 
   : public ISpecifyPropertyPages
```  
  
#### Parameters  
 *T*  
 Your class, derived from `ISpecifyPropertyPagesImpl`.  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[ISpecifyPropertyPagesImpl::GetPages](#getpages)|Fills a Counted Array of UUID values. Each UUID corresponds to the CLSID for one of the property pages that can be displayed in the object's property sheet.|  
  
## Remarks  
 The [ISpecifyPropertyPages](/windows/desktop/api/ocidl/nn-ocidl-ispecifypropertypages) interface allows a client to obtain a list of CLSIDs for the property pages supported by an object. Class `ISpecifyPropertyPagesImpl` provides a default implementation of this interface and implements `IUnknown` by sending information to the dump device in debug builds.  
  
> [!NOTE]
>  Do not expose the `ISpecifyPropertyPages` interface if your object does not support property pages.  
  
 **Related Articles** [ATL Tutorial](../../atl/active-template-library-atl-tutorial.md), [Creating an ATL Project](../../atl/reference/creating-an-atl-project.md)  
  
## Inheritance Hierarchy  
 `ISpecifyPropertyPages`  
  
 `ISpecifyPropertyPagesImpl`  
  
## Requirements  
 **Header:** atlcom.h  
  
##  <a name="getpages"></a>  ISpecifyPropertyPagesImpl::GetPages  
 Fills the array in the [CAUUID](/windows/desktop/api/ocidl/ns-ocidl-tagcauuid) structure with the CLSIDs for the property pages that can be displayed in the object's property sheet.  
  
```
STDMETHOD(GetPages)(CAUUID* pPages);
```  
  
### Remarks  
 ATL uses the object's property map to retrieve each CLSID.  
  
 See [ISpecifyPropertyPages::GetPages](/windows/desktop/api/ocidl/nf-ocidl-ispecifypropertypages-getpages) in the Windows SDK.  
  
## See Also  
 [IPropertyPageImpl Class](../../atl/reference/ipropertypageimpl-class.md)   
 [IPerPropertyBrowsingImpl Class](../../atl/reference/iperpropertybrowsingimpl-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)
