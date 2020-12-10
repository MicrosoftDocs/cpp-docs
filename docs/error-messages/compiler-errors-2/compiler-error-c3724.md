---
description: "Learn more about: Compiler Error C3724"
title: "Compiler Error C3724"
ms.date: "11/04/2016"
f1_keywords: ["C3724"]
helpviewer_keywords: ["C3724"]
ms.assetid: cab8aba7-14fc-406f-8cc6-32744c8f31c1
---
# Compiler Error C3724

must #include \<windows.h> to use multi-threading with events

The windows.h file is required if you use multi-threading with events. To fix this error, add `#include <windows.h>` to the top of the file in which event sources and event receivers are defined.

```cpp
// C3724.cpp
// uncomment the following line to resolve
// #include <windows.h>

[event_source(native), threading(apartment)]
class CEventSrc {
public:
   __event void event1();   // C3724
};

[event_receiver(native)]
class CEventRec {
public:
   void handler1() {
   }

   void HookEvents(CEventSrc* pSrc) {
      __hook(CEventSrc::event1, pSrc, CEventRec::handler1);
   }

   void UnhookEvents(CEventSrc* pSrc) {
      __unhook(CEventSrc::event1, pSrc, CEventRec::handler1);
   }
};

int main() {
}
```
