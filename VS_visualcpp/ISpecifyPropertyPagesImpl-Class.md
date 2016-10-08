---
title: "ISpecifyPropertyPagesImpl Class"
ms.custom: na
ms.date: 10/04/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 4e4b9795-b656-4d56-9b8c-85941e7731f9
caps.latest.revision: 14
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# ISpecifyPropertyPagesImpl Class
This class implements **IUnknown** and provides a default implementation of the [ISpecifyPropertyPages](http://msdn.microsoft.com/library/windows/desktop/ms695217) interface.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```  
template<  
    class T>  
    class ATL_NO_VTABLE ISpecifyPropertyPagesImpl :  
    public ISpecifyPropertyPages  
```  
  
#### Parameters  
 `T`  
 Your class, derived from `ISpecifyPropertyPagesImpl`.  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[ISpecifyPropertyPagesImpl::GetPages](../Topic/ISpecifyPropertyPagesImpl::GetPages.md)|Fills a Counted Array of UUID values. Each UUID corresponds to the CLSID for one of the property pages that can be displayed in the object's property sheet.|  
  
## Remarks  
 The [ISpecifyPropertyPages](http://msdn.microsoft.com/library/windows/desktop/ms695217) interface allows a client to obtain a list of CLSIDs for the property pages supported by an object. Class `ISpecifyPropertyPagesImpl` provides a default implementation of this interface and implements **IUnknown** by sending information to the dump device in debug builds.  
  
> [!NOTE]
>  Do not expose the **ISpecifyPropertyPages** interface if your object does not support property pages.  
  
 **Related Articles** [ATL Tutorial](../VS_visualcpp/Active-Template-Library--ATL--Tutorial.md), [Creating an ATL Project](../VS_visualcpp/Creating-an-ATL-Project.md)  
  
## Inheritance Hierarchy  
 `ISpecifyPropertyPages`  
  
 `ISpecifyPropertyPagesImpl`  
  
## Requirements  
 **Header:** atlcom.h  
  
##  <a name="ispecifypropertypagesimpl__getpages"></a>  ISpecifyPropertyPagesImpl::GetPages  
 Fills the array in the [CAUUID](http://msdn.microsoft.com/library/windows/desktop/ms680048) structure with the CLSIDs for the property pages that can be displayed in the object's property sheet.  
  
```  
STDMETHOD(GetPages)(    CAUUID* pPages );  
```  
  
### Remarks  
 ATL uses the object's property map to retrieve each CLSID.  
  
 See [ISpecifyPropertyPages::GetPages](http://msdn.microsoft.com/library/windows/desktop/ms687276) in the Windows SDK.  
  
## See Also  
 [IPropertyPageImpl Class](../VS_visualcpp/IPropertyPageImpl-Class.md)   
 [IPerPropertyBrowsingImpl Class](../VS_visualcpp/IPerPropertyBrowsingImpl-Class.md)   
 [Class Overview](../VS_visualcpp/ATL-Class-Overview.md)