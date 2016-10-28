---
title: "Event Handling"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "attributes [C++], event handling"
  - "intrinsic functions, event handling"
  - "event handling, Visual C++"
ms.assetid: 82de3f9a-2d88-470c-9527-8a5b54c8ced4
caps.latest.revision: 7
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
# Event Handling
Event handling is primarily supported for COM classes (C++ classes that implement COM objects, typically using ATL classes or the [coclass](../windows/coclass.md) attribute).  For more information, see [Event Handling in COM](../cpp/event-handling-in-com.md).  
  
 Event handling is also supported for native C++ classes (C++ classes that do not implement COM objects), however, that support is deprecated and will be removed in a future release.  For more information, see [Event Handling in Native C++](../cpp/event-handling-in-native-c--.md).  
  
 Event handling supports single- and multithreaded usage and protects data from simultaneous multithread access. It also allows you to derive subclasses from event source or receiver classes and support extended event sourcing/receiving in the derived class.  
  
 Visual C++ includes attributes and keywords for declaring events and event handlers. The event attributes and keywords can be used in CLR programs and in native C++ programs.  
  
|Topic|Description|  
|-----------|-----------------|  
|[event_source](../windows/event_source.md)|Creates an event source.|  
|[event_receiver](../windows/event_receiver.md)|Creates an event receiver (sink).|  
|[__event](../cpp/__event.md)|Declares an event.|  
|[__raise](../cpp/__raise.md)|Emphasizes the call site of an event.|  
|[__hook](../cpp/__hook.md)|Associates a handler method with an event.|  
|[__unhook](../cpp/__unhook.md)|Dissociates a handler method from an event.|  
  
## See Also  
 [C++ Language Reference](../cpp/c---language-reference.md)   
 [Keywords](../cpp/keywords--c---.md)   
 [Event Handling Samples](assetId:///cc0287d4-f92b-4da5-85fc-a0f186e16424)