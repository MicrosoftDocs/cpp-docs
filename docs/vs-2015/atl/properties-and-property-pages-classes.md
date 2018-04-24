---
title: "Properties and Property Pages Classes | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.atl.properties"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "property pages, classes"
  - "properties [ATL], classes"
  - "properties [ATL]"
ms.assetid: 31616f98-69f8-48b2-8d58-b8e7d1c2b2d8
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Properties and Property Pages Classes
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Properties and Property Pages Classes (ATL)](https://docs.microsoft.com/cpp/atl/properties-and-property-pages-classes).  
  
  
The following classes support properties and property pages:  
  
-   [CComDispatchDriver](http://msdn.microsoft.com/library/3c1171f6-0f5b-439d-bd5f-30e8ac5a7245) Retrieves or sets an object's properties through an `IDispatch` pointer.  
  
-   [CStockPropImpl](../atl/reference/cstockpropimpl-class.md) Implements the stock properties supported by ATL.  
  
-   [IPerPropertyBrowsingImpl](../atl/reference/iperpropertybrowsingimpl-class.md) Accesses the information in an object's property pages.  
  
-   [IPersistPropertyBagImpl](../atl/reference/ipersistpropertybagimpl-class.md) Stores an object's properties in a client-supplied property bag.  
  
-   [IPropertyPageImpl](../atl/reference/ipropertypageimpl-class.md) Manages a particular property page within a property sheet.  
  
-   [IPropertyPage2Impl](../atl/reference/ipropertypage2impl-class.md) Similar to `IPropertyPageImpl`, but also allows a client to select a specific property in a property page.  
  
-   [ISpecifyPropertyPagesImpl](../atl/reference/ispecifypropertypagesimpl-class.md) Obtains the CLSIDs for the property pages supported by an object.  
  
## Related Articles  
 [ATL Tutorial](../atl/active-template-library-atl-tutorial.md)  
  
 [ATL COM Property Pages](../atl/atl-com-property-pages.md)  
  
## See Also  
 [Class Overview](../atl/atl-class-overview.md)   
 [Property Map Macros](../atl/reference/property-map-macros.md)





