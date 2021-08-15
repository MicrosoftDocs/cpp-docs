---
description: "Learn more about: Compiler Error C3714"
title: "Compiler Error C3714"
ms.date: "11/04/2016"
f1_keywords: ["C3714"]
helpviewer_keywords: ["C3714"]
ms.assetid: 17718f75-5a37-4e42-912b-487e91008a95
---
# Compiler Error C3714

'method': an event handler method must have the same calling convention as the source 'method'

You defined an event handler method that did not use the same calling convention as the source event method. To fix this error, give the event handler method the same calling conventions as those of the source event method. For example, in the code below, make the calling conventions of `handler1` and `event1` match ([__cdecl](../../cpp/cdecl.md) or [__stdcall](../../cpp/stdcall.md) or others). Removing calling convention keywords from both declarations will also solve the problem, and cause `event1` and `handler1` to default to the [thiscall](../../cpp/thiscall.md) calling convention. See [Calling Conventions](../../cpp/calling-conventions.md) for more information.

The following sample generates C3714:

```cpp
// C3714.cpp
// compile with: /c
// processor: x86
[event_source(native)]
class CEventSrc {
public:
   __event void __cdecl event1();
   // try the following line instead
   // __event void __stdcall event1();
};

[event_receiver(native)]
class CEventRec {
public:
   void __stdcall handler1() {}

   void HookEvents(CEventSrc* pSrc) {
      __hook(&CEventSrc::event1, pSrc, &CEventRec::handler1);   // C3714
   }

   void UnhookEvents(CEventSrc* pSrc) {
      __unhook(&CEventSrc::event1, pSrc, &CEventRec::handler1); // C3714
   }
};
```
