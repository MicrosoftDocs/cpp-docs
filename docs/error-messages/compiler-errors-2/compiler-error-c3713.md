---
title: "Compiler Error C3713"
description: "Learn more about: Compiler Error C3713"
ms.date: 11/04/2016
f1_keywords: ["C3713"]
helpviewer_keywords: ["C3713"]
---
# Compiler Error C3713

> 'method': an event handler method must have the same function parameters as the source 'method'

## Remarks

You defined an event handler method that did not use the same parameters as the source event method. To fix this error, give the event handler method the same parameters as those of the source event method.

## Example

The following example generates C3713:

```cpp
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
