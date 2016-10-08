---
title: "Connection Points Classes"
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
ms.assetid: 076365fa-299a-4dce-84c3-a5dff0e0da1f
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
# Connection Points Classes
The following classes provide support for connection points:  
  
-   [IConnectionPointContainerImpl](../VS_visualcpp/IConnectionPointContainerImpl-Class.md) Implements a connection point container.  
  
-   [IConnectionPointImpl](../VS_visualcpp/IConnectionPointImpl-Class.md) Implements a connection point.  
  
-   [IPropertyNotifySinkCP](../VS_visualcpp/IPropertyNotifySinkCP-Class.md) Implements a connection point representing the [IPropertyNotifySink](http://msdn.microsoft.com/library/windows/desktop/ms692638) interface.  
  
-   [CComDynamicUnkArray](../VS_visualcpp/CComDynamicUnkArray-Class.md) Manages unlimited connections between a connection point and its sinks.  
  
-   [CComUnkArray](../VS_visualcpp/CComUnkArray-Class.md) Manages a fixed number of connections between a connection point and its sinks.  
  
-   [CFirePropNotifyEvent](../VS_visualcpp/CFirePropNotifyEvent-Class.md) Notifies a client's sink that an object's property has changed or is about to change.  
  
-   [IDispEventImpl](../VS_visualcpp/IDispEventImpl-Class.md) Provides support for connection points for an ATL COM object. These connection points are mapped with an event sink map, which is provided by your COM object.  
  
-   [IDispEventSimpleImpl](../VS_visualcpp/IDispEventSimpleImpl-Class.md) Works in conjunction with the event sink map in your class to route events to the appropriate handler function.  
  
## Related Articles  
 [Connection Points](../VS_visualcpp/ATL-Connection-Points.md)  
  
 [Event Handling and ATL](../VS_visualcpp/Event-Handling-and-ATL.md)  
  
## See Also  
 [Class Overview](../VS_visualcpp/ATL-Class-Overview.md)   
 [Connection Point Macros](../VS_visualcpp/Connection-Point-Macros.md)   
 [Connection Point Global Functions](../VS_visualcpp/Connection-Point-Global-Functions.md)