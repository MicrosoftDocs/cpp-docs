---
title: "Compiler Error C3713 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3713"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3713"]
ms.assetid: 75c6b9b6-955b-49bd-9bc8-ced88b496a1f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3713

'method': an event handler method must have the same function parameters as the source 'method'

You defined an event handler method that did not use the same parameters as the source event method. To fix this error, give the event handler method the same parameters as those of the source event method.

The following sample generates C3713:

```
// C3713.cpp
// compile with: /c
[event_source(native)]
class CEventSrc {
public:
   __event void event1(int nValue);
   // try the following line instead
   // __event void event1();
};

[event_receiver(native)]
class CEventRec {
public:
   void handler1() {}

   void HookEvents(CEventSrc* pSrc) {
      __hook(&CEventSrc::event1, pSrc, &CEventRec::handler1);   // C3713
   }

   void UnhookEvents(CEventSrc* pSrc) {
      __unhook(&CEventSrc::event1, pSrc, &CEventRec::handler1); // C3713
   }
};
```