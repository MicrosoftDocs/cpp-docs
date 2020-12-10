---
description: "Learn more about: Compiler Error C3712"
title: "Compiler Error C3712"
ms.date: "11/04/2016"
f1_keywords: ["C3712"]
helpviewer_keywords: ["C3712"]
ms.assetid: 65b1fcaf-be89-4c55-9e40-25ec03457253
---
# Compiler Error C3712

'method': an event handler method must return the same type as the source 'method'

You defined an event handler method that did not return the same type as the source event method. To fix this error, give the event handler method the same return type as that of the source event method.

The following sample generates C3712:

```cpp
// C3712.cpp
// compile with: /c
[event_source(native)]
class CEventSrc {
public:
   __event void event1();
};

[event_receiver(native)]
class CEventRec {
public:
   int handler1() { return 0; }
   // try the following line instead
   // void handler1() {}

   void HookEvents(CEventSrc* pSrc) {
      __hook(&CEventSrc::event1, pSrc, &CEventRec::handler1);   // C3712
   }
   void UnhookEvents(CEventSrc* pSrc) {
      __unhook(&CEventSrc::event1, pSrc, &CEventRec::handler1);   // C3712
   }
};
```
