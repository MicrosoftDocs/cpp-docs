---
description: "Learn more about: Compiler Error C3717"
title: "Compiler Error C3717"
ms.date: "11/04/2016"
f1_keywords: ["C3717"]
helpviewer_keywords: ["C3717"]
ms.assetid: ae4fceb1-2583-4577-b2f1-40971a017055
---
# Compiler Error C3717

'method': a method that fires events cannot be defined

You declared an event method that includes an implementation. An [__event](../../cpp/event.md) method declaration cannot have a definition. To fix this error, ensure that no event method declarations have definitions. For example, in the code below, remove the function body from the `event1` declaration as indicated by the comments.

The following sample generates C3717:

```cpp
// C3717.cpp
[event_source(native)]
class CEventSrc {
public:
   __event void event1() {   // C3717
   }

   // remove definition for event1 and substitute following declaration
   // __event void event1();
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
