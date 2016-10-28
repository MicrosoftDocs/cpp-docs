---
title: "IUnknown Implementation Classes"
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
  - "vc.atl.Iunknown"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IUnknown implementation classes"
ms.assetid: 47b69bb5-69d8-4a9c-84a8-329bdde2bb3f
caps.latest.revision: 8
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
# IUnknown Implementation Classes
The following classes implement **IUnknown** and related methods:  
  
-   [CComObjectRootEx](../atl/ccomobjectrootex-class.md) Manages reference counting for both aggregated and nonaggregated objects. Allows you to specify a threading model.  
  
-   [CComObjectRoot](../atl/ccomobjectroot-class.md) Manages reference counting for both aggregated and nonaggregated objects. Uses the default threading model of the server.  
  
-   [CComAggObject](../atl/ccomaggobject-class.md) Implements **IUnknown** for an aggregated object.  
  
-   [CComObject](../atl/ccomobject-class.md) Implements **IUnknown** for a nonaggregated object.  
  
-   [CComPolyObject](../atl/ccompolyobject-class.md) Implements **IUnknown** for aggregated and nonaggregated objects. Using `CComPolyObject` avoids having both `CComAggObject` and `CComObject` in your module. A single `CComPolyObject` object handles both aggregated and nonaggregated cases.  
  
-   [CComObjectNoLock](../atl/ccomobjectnolock-class.md) Implements **IUnknown** for a nonaggregated object, without modifying the module lock count.  
  
-   [CComTearOffObject](../atl/ccomtearoffobject-class.md) Implements **IUnknown** for a tear-off interface.  
  
-   [CComCachedTearOffObject](../atl/ccomcachedtearoffobject-class.md) Implements **IUnknown** for a "cached" tear-off interface.  
  
-   [CComContainedObject](../atl/ccomcontainedobject-class.md) Implements **IUnknown** for the inner object of an aggregation or a tear-off interface.  
  
-   [CComObjectGlobal](../atl/ccomobjectglobal-class.md) Manages a reference count on the module to ensure your object won't be deleted.  
  
-   [CComObjectStack](../atl/ccomobjectstack-class.md) Creates a temporary COM object, using a skeletal implementation of **IUnknown**.  
  
## Related Articles  
 [Fundamentals of ATL COM Objects](../atl/fundamentals-of-atl-com-objects.md)  
  
## See Also  
 [Class Overview](../atl/atl-class-overview.md)   
 [Aggregation and Class Factory Macros](../atl/aggregation-and-class-factory-macros.md)   
 [COM Map Macros](../atl/com-map-macros.md)   
 [COM Map Global Functions](../atl/com-map-global-functions.md)