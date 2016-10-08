---
title: "Event Handling"
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
ms.topic: language-reference
ms.assetid: 82de3f9a-2d88-470c-9527-8a5b54c8ced4
caps.latest.revision: 7
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
# Event Handling
Event handling is primarily supported for COM classes (C++ classes that implement COM objects, typically using ATL classes or the [coclass](../VS_visualcpp/coclass.md) attribute).  For more information, see [Event Handling in COM](../VS_visualcpp/Event-Handling-in-COM.md).  
  
 Event handling is also supported for native C++ classes (C++ classes that do not implement COM objects), however, that support is deprecated and will be removed in a future release.  For more information, see [Event Handling in Native C++](../VS_visualcpp/Event-Handling-in-Native-C--.md).  
  
 Event handling supports single- and multithreaded usage and protects data from simultaneous multithread access. It also allows you to derive subclasses from event source or receiver classes and support extended event sourcing/receiving in the derived class.  
  
 Visual C++ includes attributes and keywords for declaring events and event handlers. The event attributes and keywords can be used in CLR programs and in native C++ programs.  
  
|Topic|Description|  
|-----------|-----------------|  
|[event_source](../VS_visualcpp/event_source.md)|Creates an event source.|  
|[event_receiver](../VS_visualcpp/event_receiver.md)|Creates an event receiver (sink).|  
|[__event](../VS_visualcpp/__event.md)|Declares an event.|  
|[__raise](../VS_visualcpp/__raise.md)|Emphasizes the call site of an event.|  
|[__hook](../VS_visualcpp/__hook.md)|Associates a handler method with an event.|  
|[__unhook](../VS_visualcpp/__unhook.md)|Dissociates a handler method from an event.|  
  
## See Also  
 [C++ Language Reference](../VS_visualcpp/C---Language-Reference.md)   
 [Keywords](../VS_visualcpp/Keywords--C---.md)   
 [Event Handling Samples](assetId:///cc0287d4-f92b-4da5-85fc-a0f186e16424)