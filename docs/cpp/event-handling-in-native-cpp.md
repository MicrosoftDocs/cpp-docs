---
title: "Event Handling in Native C++ | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "event handling, Visual C++"
ms.assetid: e4b9219a-15d8-42fb-83c8-6d2e4e087c8d
caps.latest.revision: 9
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
# Event Handling in Native C++
In native C++ event handling, you set up an event source and event receiver using the [event_source](../windows/event-source.md) and [event_receiver](../windows/event-receiver.md) attributes, respectively, specifying `type`=`native`. These attributes allow the classes to which they are applied to fire events and handle events in a native, non-COM context.  
  
## Declaring Events  
 In an event source class, use the [__event](../cpp/event.md) keyword on a method declaration to declare the method as an event. Make sure to declare the method, but do not define it; to do so will generate a compiler error, because the compiler defines the method implicitly when it is made into an event. Native events can be methods with zero or more parameters. The return type can be void or any integral type.  
  
## Defining Event Handlers  
 In an event receiver class, you define event handlers, which are methods with signatures (return types, calling conventions, and arguments) that match the event that they will handle.  
  
## Hooking Event Handlers to Events  
 Also in an event receiver class, you use the intrinsic function [__hook](../cpp/hook.md) to associate events with event handlers and [__unhook](../cpp/unhook.md) to dissociate events from event handlers. You can hook several events to an event handler, or several event handlers to an event.  
  
## Firing Events  
 To fire an event, simply call the method declared as an event in the event source class. If handlers have been hooked to the event, the handlers will be called.  
  
### Native C++ Event Code  
 The following example shows how to fire an event in native C++. To compile and run the example, refer to the comments in the code.  
  
## Example  
  
### Code  
  
```  
// evh_native.cpp  
#include <stdio.h>  
  
[event_source(native)]  
class CSource {  
public:  
   __event void MyEvent(int nValue);  
};  
  
[event_receiver(native)]  
class CReceiver {  
public:  
   void MyHandler1(int nValue) {  
      printf_s("MyHandler1 was called with value %d.\n", nValue);  
   }  
  
   void MyHandler2(int nValue) {  
      printf_s("MyHandler2 was called with value %d.\n", nValue);  
   }  
  
   void hookEvent(CSource* pSource) {  
      __hook(&CSource::MyEvent, pSource, &CReceiver::MyHandler1);  
      __hook(&CSource::MyEvent, pSource, &CReceiver::MyHandler2);  
   }  
  
   void unhookEvent(CSource* pSource) {  
      __unhook(&CSource::MyEvent, pSource, &CReceiver::MyHandler1);  
      __unhook(&CSource::MyEvent, pSource, &CReceiver::MyHandler2);  
   }  
};  
  
int main() {  
   CSource source;  
   CReceiver receiver;  
  
   receiver.hookEvent(&source);  
   __raise source.MyEvent(123);  
   receiver.unhookEvent(&source);  
}  
```  
  
### Output  
  
```  
MyHandler2 was called with value 123.  
MyHandler1 was called with value 123.  
```  
  
## See Also  
 [Event Handling](../cpp/event-handling.md)