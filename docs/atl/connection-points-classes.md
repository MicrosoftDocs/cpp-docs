---
title: "Connection Points Classes"
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
  - "vc.atl.connection"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "classes [C++], connection points"
  - "connection points classes"
ms.assetid: 076365fa-299a-4dce-84c3-a5dff0e0da1f
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
# Connection Points Classes
The following classes provide support for connection points:  
  
-   [IConnectionPointContainerImpl](../atl/iconnectionpointcontainerimpl-class.md) Implements a connection point container.  
  
-   [IConnectionPointImpl](../atl/iconnectionpointimpl-class.md) Implements a connection point.  
  
-   [IPropertyNotifySinkCP](../atl/ipropertynotifysinkcp-class.md) Implements a connection point representing the [IPropertyNotifySink](http://msdn.microsoft.com/library/windows/desktop/ms692638) interface.  
  
-   [CComDynamicUnkArray](../atl/ccomdynamicunkarray-class.md) Manages unlimited connections between a connection point and its sinks.  
  
-   [CComUnkArray](../atl/ccomunkarray-class.md) Manages a fixed number of connections between a connection point and its sinks.  
  
-   [CFirePropNotifyEvent](../atl/cfirepropnotifyevent-class.md) Notifies a client's sink that an object's property has changed or is about to change.  
  
-   [IDispEventImpl](../atl/idispeventimpl-class.md) Provides support for connection points for an ATL COM object. These connection points are mapped with an event sink map, which is provided by your COM object.  
  
-   [IDispEventSimpleImpl](../atl/idispeventsimpleimpl-class.md) Works in conjunction with the event sink map in your class to route events to the appropriate handler function.  
  
## Related Articles  
 [Connection Points](../atl/atl-connection-points.md)  
  
 [Event Handling and ATL](../atl/event-handling-and-atl.md)  
  
## See Also  
 [Class Overview](../atl/atl-class-overview.md)   
 [Connection Point Macros](../atl/connection-point-macros.md)   
 [Connection Point Global Functions](../atl/connection-point-global-functions.md)