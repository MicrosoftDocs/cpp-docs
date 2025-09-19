---
title: "Compiler Error C3709"
description: "Learn more about: Compiler Error C3709"
ms.date: 11/04/2016
f1_keywords: ["C3709"]
helpviewer_keywords: ["C3709"]
---
# Compiler Error C3709

> 'function': improper syntax for specifying event in __hook/\__unhook

## Remarks

When you specify an event source with [__hook](../../cpp/hook.md) or [__unhook](../../cpp/unhook.md), the first parameter must be a valid event method and the second parameter must be a valid event source object (not a method).

## Example

The following example generates C3709:

```cpp
// C3709.cpp
// compile with: /LD
[event_source(native)]
class CEventSrc
{
public:
   __event void event1();
};

[event_receiver(native)]
class CEventRec
{
public:
   void handler1()
   {
   }

   void HookEvents(CEventSrc* pSrc)
   {
      __hook(bad, pSrc, CEventRec::handler1);   // C3709
      // Try the following line instead:
      // __hook(&CEventSrc::event1, pSrc, CEventRec::handler1);
   }

   void UnhookEvents(CEventSrc* pSrc)
   {
      __unhook(&CEventSrc::event1, pSrc, CEventRec::handler1);
   }
};
```
