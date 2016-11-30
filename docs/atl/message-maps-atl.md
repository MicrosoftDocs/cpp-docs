---
title: "Message Maps (ATL) | Microsoft Docs"
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
  - "message maps, ATL"
  - "ATL, message handlers"
ms.assetid: 9e100400-65c7-4a85-8857-4e6cb6dd7340
caps.latest.revision: 10
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
# Message Maps (ATL)
A message map associates a handler function with a particular message, command, or notification. By using ATL's [message map macros](../atl/reference/message-map-macros-atl.md), you can specify a message map for a window. The window procedures in `CWindowImpl`, `CDialogImpl`, and `CContainedWindowT` direct a window's messages to its message map.  
  
 The [message handler functions](../atl/message-handler-functions.md) accept an additional argument of type `BOOL&`. This argument indicates whether a message has been processed, and it is set to `TRUE` by default. A handler function can then set the argument to `FALSE` to indicate that it has not handled a message. In this case, ATL will continue to look for a handler function further in the message map. By setting this argument to `FALSE`, you can first perform some action in response to a message and then allow the default processing or another handler function to finish handling the message.  
  
## Chained Message Maps  
 ATL also allows you to chain message maps, which directs the message handling to a message map defined in another class. For example, you can implement common message handling in a separate class to provide uniform behavior for all windows chaining to that class. You can chain to a base class or to a data member of your class.  
  
 ATL also supports dynamic chaining, which allows you to chain to another object's message map at run time. To implement dynamic chaining, you must derive your class from [CDynamicChain](../atl/reference/cdynamicchain-class.md). Then declare the [CHAIN_MSG_MAP_DYNAMIC](http://msdn.microsoft.com/library/7e5c72b7-cb31-4f3b-8a1b-6293804af220) macro in your message map. `CHAIN_MSG_MAP_DYNAMIC` requires a unique number that identifies the object and the message map to which you are chaining. You must define this unique value through a call to `CDynamicChain::SetChainEntry`.  
  
 You can chain to any class that declares a message map, provided the class derives from [CMessageMap](../atl/reference/cmessagemap-class.md). `CMessageMap` allows an object to expose its message maps to other objects. Note that `CWindowImpl` already derives from `CMessageMap`.  
  
## Alternate Message Maps  
 Finally, ATL supports alternate message maps, declared with the [ALT_MSG_MAP](http://msdn.microsoft.com/library/2c8871bf-abc0-4d52-bcf7-6b2ab9eb5af8) macro. Each alternate message map is identified by a unique number, which you pass to `ALT_MSG_MAP`. Using alternate message maps, you can handle the messages of multiple windows in one map. Note that by default, `CWindowImpl` does not use alternate message maps. To add this support, override the `WindowProc` method in your `CWindowImpl`-derived class and call `ProcessWindowMessage` with the message map identifier.  
  
## See Also  
 [Implementing a Window](../atl/implementing-a-window.md)

