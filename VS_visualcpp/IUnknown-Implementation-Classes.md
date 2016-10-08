---
title: "IUnknown Implementation Classes"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 47b69bb5-69d8-4a9c-84a8-329bdde2bb3f
caps.latest.revision: 8
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
# IUnknown Implementation Classes
The following classes implement **IUnknown** and related methods:  
  
-   [CComObjectRootEx](../VS_visualcpp/CComObjectRootEx-Class.md) Manages reference counting for both aggregated and nonaggregated objects. Allows you to specify a threading model.  
  
-   [CComObjectRoot](../VS_visualcpp/CComObjectRoot-Class.md) Manages reference counting for both aggregated and nonaggregated objects. Uses the default threading model of the server.  
  
-   [CComAggObject](../VS_visualcpp/CComAggObject-Class.md) Implements **IUnknown** for an aggregated object.  
  
-   [CComObject](../VS_visualcpp/CComObject-Class.md) Implements **IUnknown** for a nonaggregated object.  
  
-   [CComPolyObject](../VS_visualcpp/CComPolyObject-Class.md) Implements **IUnknown** for aggregated and nonaggregated objects. Using `CComPolyObject` avoids having both `CComAggObject` and `CComObject` in your module. A single `CComPolyObject` object handles both aggregated and nonaggregated cases.  
  
-   [CComObjectNoLock](../VS_visualcpp/CComObjectNoLock-Class.md) Implements **IUnknown** for a nonaggregated object, without modifying the module lock count.  
  
-   [CComTearOffObject](../VS_visualcpp/CComTearOffObject-Class.md) Implements **IUnknown** for a tear-off interface.  
  
-   [CComCachedTearOffObject](../VS_visualcpp/CComCachedTearOffObject-Class.md) Implements **IUnknown** for a "cached" tear-off interface.  
  
-   [CComContainedObject](../VS_visualcpp/CComContainedObject-Class.md) Implements **IUnknown** for the inner object of an aggregation or a tear-off interface.  
  
-   [CComObjectGlobal](../VS_visualcpp/CComObjectGlobal-Class.md) Manages a reference count on the module to ensure your object won't be deleted.  
  
-   [CComObjectStack](../VS_visualcpp/CComObjectStack-Class.md) Creates a temporary COM object, using a skeletal implementation of **IUnknown**.  
  
## Related Articles  
 [Fundamentals of ATL COM Objects](../VS_visualcpp/Fundamentals-of-ATL-COM-Objects.md)  
  
## See Also  
 [Class Overview](../VS_visualcpp/ATL-Class-Overview.md)   
 [Aggregation and Class Factory Macros](../VS_visualcpp/Aggregation-and-Class-Factory-Macros.md)   
 [COM Map Macros](../VS_visualcpp/COM-Map-Macros.md)   
 [COM Map Global Functions](../VS_visualcpp/COM-Map-Global-Functions.md)