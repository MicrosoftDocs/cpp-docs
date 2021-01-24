---
description: "Learn more about: Compiler Error C3703"
title: "Compiler Error C3703"
ms.date: "11/04/2016"
f1_keywords: ["C3703"]
helpviewer_keywords: ["C3703"]
ms.assetid: 7e3677d9-f2be-4c26-998f-423564e9023c
---
# Compiler Error C3703

'event handler': an event handler method must have the same storage class as the source 'event'

An [event](../../cpp/event-handling.md) has a different storage class than the event handler to which it is hooked. For example, this error occurs if the event handler is a static member function and the event is not static. To fix this error, give the event and the event handler the same storage class.

The following sample generates C3703:

```cpp
// C3703.cpp
// C3703 expected
#include <stdio.h>

[event_source(type=native)]
class CEventSrc {
public:
   __event static void MyEvent();
};

[event_receiver(type=native)]
class CEventHandler {
public:
   // delete the following line to resolve
   void MyHandler() {}

   // try the following line instead
   // static void MyHandler() {}

   void HookIt(CEventSrc* pSource) {
      __hook(CEventSrc::MyEvent, pSource, &CEventHandler::MyHandler);
   }

   void UnhookIt(CEventSrc* pSource) {
      __unhook(CEventSrc::MyEvent, pSource, &CEventHandler::MyHandler);
   }
};

int main() {
   CEventSrc src;
   CEventHandler hnd;

   hnd.HookIt(&src);
   __raise src.MyEvent();
   hnd.UnhookIt(&src);
}
```
