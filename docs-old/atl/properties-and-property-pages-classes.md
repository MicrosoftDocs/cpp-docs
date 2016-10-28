---
title: "Properties and Property Pages Classes"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
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
caps.latest.revision: 12
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
# Properties and Property Pages Classes
The following classes support properties and property pages:  
  
-   [CComDispatchDriver](../Topic/CComDispatchDriver.md) Retrieves or sets an object's properties through an `IDispatch` pointer.  
  
-   [CStockPropImpl](../atl/cstockpropimpl-class.md) Implements the stock properties supported by ATL.  
  
-   [IPerPropertyBrowsingImpl](../atl/iperpropertybrowsingimpl-class.md) Accesses the information in an object's property pages.  
  
-   [IPersistPropertyBagImpl](../atl/ipersistpropertybagimpl-class.md) Stores an object's properties in a client-supplied property bag.  
  
-   [IPropertyPageImpl](../atl/ipropertypageimpl-class.md) Manages a particular property page within a property sheet.  
  
-   [IPropertyPage2Impl](../atl/ipropertypage2impl-class.md) Similar to `IPropertyPageImpl`, but also allows a client to select a specific property in a property page.  
  
-   [ISpecifyPropertyPagesImpl](../atl/ispecifypropertypagesimpl-class.md) Obtains the CLSIDs for the property pages supported by an object.  
  
## Related Articles  
 [ATL Tutorial](../atl/active-template-library--atl--tutorial.md)  
  
 [ATL COM Property Pages](../atl/atl-com-property-pages.md)  
  
## See Also  
 [Class Overview](../atl/atl-class-overview.md)   
 [Property Map Macros](../atl/property-map-macros.md)