---
title: "__unhook"
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
ms.assetid: 953a14f3-5199-459d-81e5-fcf015a19878
caps.latest.revision: 9
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
# __unhook
Dissociates a handler method from an event.  
  
## Syntax  
  
```  
  
      long  __unhook(  
   &SourceClass::EventMethod,  
   source,  
   &ReceiverClass::HandlerMethod  
   [, receiver = this]   
);  
long  __unhook(   
   interface,  
   source  
);  
long  __unhook(  
   source   
);  
```  
  
#### Parameters  
 **&** *SourceClass* `::` *EventMethod*  
 A pointer to the event method from which you unhook the event handler method:  
  
-   Native C++ events: *SourceClass* is the event source class and *EventMethod* is the event.  
  
-   COM events: *SourceClass* is the event source interface and *EventMethod* is one of its methods.  
  
-   Managed events: *SourceClass* is the event source class and *EventMethod* is the event.  
  
 `interface`  
 The interface name being unhooked from `receiver`, only for COM event receivers in which the *layout_dependent* parameter of the [event_receiver](../VS_visualcpp/event_receiver.md) attribute is **true**.  
  
 *source*  
 A pointer to an instance of the event source. Depending on the code `type` specified in **event_receiver**, *source* can be one of the following:  
  
-   A native event source object pointer.  
  
-   An **IUnknown**-based pointer (COM source).  
  
-   A managed object pointer (for managed events).  
  
 **&** *ReceiverClass* `::` `HandlerMethod`  
 A pointer to the event handler method to be unhooked from an event. The handler is specified as a method of a class or a reference to the same; if you do not specify the class name, `__unhook` assumes the class to be that in which it is called.  
  
-   Native C++ events: *ReceiverClass* is the event receiver class and `HandlerMethod` is the handler.  
  
-   COM events: *ReceiverClass* is the event receiver interface and `HandlerMethod` is one of its handlers.  
  
-   Managed events: *ReceiverClass* is the event receiver class and `HandlerMethod` is the handler.  
  
 `receiver`(optional)  
 A pointer to an instance of the event receiver class. If you do not specify a receiver, the default is the receiver class or structure in which `__unhook` is called.  
  
## Usage  
 Can be use in any function scope, including main, outside the event receiver class.  
  
## Remarks  
 Use the intrinsic function `__unhook` in an event receiver to dissociate or "unhook" a handler method from an event method.  
  
 There are three forms of `__unhook`. You can use the first (four-argument) form in most cases. You can use the second (two-argument) form of `__unhook` only for a COM event receiver; this unhooks the entire event interface. You can use the third (one-argument) form to unhook all delegates from the specified source.  
  
 A nonzero return value indicates that an error has occurred (managed events will throw an exception).  
  
 If you call `__unhook` on an event and event handler that are not already hooked, it will have no effect.  
  
 At compile time, the compiler verifies that the event exists and does parameter type checking with the specified handler.  
  
 With the exception of COM events, `__hook` and `__unhook` can be called outside the event receiver.  
  
 An alternative to using `__unhook` is to use the -= operator.  
  
 For information on coding managed events in the new syntax, see [event](../VS_visualcpp/event---C---Component-Extensions-.md).  
  
> [!NOTE]
>  A templated class or struct cannot contain events.  
  
## Example  
 See [Event Handling in Native C++](../VS_visualcpp/Event-Handling-in-Native-C--.md) and [Event Handling in COM](../VS_visualcpp/Event-Handling-in-COM.md) for samples.  
  
## See Also  
 [Keywords](../VS_visualcpp/Keywords--C---.md)   
 [event_source](../VS_visualcpp/event_source.md)   
 [event_receiver](../VS_visualcpp/event_receiver.md)   
 [__event](../VS_visualcpp/__event.md)   
 [__hook](../VS_visualcpp/__hook.md)   
 [__raise](../VS_visualcpp/__raise.md)