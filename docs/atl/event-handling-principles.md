---
title: "Event Handling Principles | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "event handling, implementing"
  - "event handling, advising event sources"
  - "interfaces, event and event sink"
  - "dual interfaces, event interfaces"
  - "event handling, dual event interfaces"
ms.assetid: d17ca7cb-54f2-4658-ab8b-b721ac56801d
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Event Handling Principles
There are three steps common to all event handling. You will need to:  
  
-   Implement the event interface on your object.  
  
-   Advise the event source that your object wants to receive events.  
  
-   Unadvise the event source when your object no longer needs to receive events.  
  
 The way that you'll implement the event interface will depend on its type. An event interface can be vtable, dual, or a dispinterface. It's up to the designer of the event source to define the interface; it's up to you to implement that interface.  
  
> [!NOTE]
>  Although there are no technical reasons that an event interface can't be dual, there are a number of good design reasons to avoid the use of duals. However, this is a decision made by the designer/implementer of the event *source*. Since you're working from the perspective of the event `sink`, you need to allow for the possibility that you might not have any choice but to implement a dual event interface. For more information on dual interfaces, see [Dual Interfaces and ATL](../atl/dual-interfaces-and-atl.md).  
  
 Advising the event source can be broken down into three steps:  
  
-   Query the source object for [IConnectionPointContainer](http://msdn.microsoft.com/library/windows/desktop/ms683857).  
  
-   Call [IConnectionPointContainer::FindConnectionPoint](http://msdn.microsoft.com/library/windows/desktop/ms692476) passing the IID of the event interface that interests you. If successful, this will return the [IConnectionPoint](http://msdn.microsoft.com/library/windows/desktop/ms694318) interface on a connection point object.  
  
-   Call [IConnectionPoint::Advise](http://msdn.microsoft.com/library/windows/desktop/ms678815) passing the **IUnknown** of the event sink. If successful, this will return a `DWORD` cookie representing the connection.  
  
 Once you have successfully registered your interest in receiving events, methods on your object's event interface will be called according to the events fired by the source object. When you no longer need to receive events, you can pass the cookie back to the connection point via [IConnectionPoint::Unadvise](http://msdn.microsoft.com/library/windows/desktop/ms686608). This will break the connection between source and sink.  
  
 Be careful to avoid reference cycles when handling events.  
  
## See Also  
 [Event Handling](../atl/event-handling-and-atl.md)

