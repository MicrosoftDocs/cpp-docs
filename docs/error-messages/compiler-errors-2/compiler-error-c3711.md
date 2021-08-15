---
description: "Learn more about: Compiler Error C3711"
title: "Compiler Error C3711"
ms.date: "11/04/2016"
f1_keywords: ["C3711"]
helpviewer_keywords: ["C3711"]
ms.assetid: 26d581cc-2153-4ee0-b814-a371184be3e1
---
# Compiler Error C3711

'method': an non-managed event source method must return void or an integral type

You defined a method in the event source that did not return void or an integral type. To fix this error, make the event and event handler have a return type of **`void`** or an integral type such as **`int`** or **`long`**.

The following sample generates C3711:

```cpp
// C3711.cpp
#include <atlbase.h>
#include <atlcom.h>
#include <atlctl.h>

[event_source(native)]
class CEventSrc {
public:
   __event float event1();   // C3711
   // try the following line instead
   // __event int event1();
   // also change the handler, below
};

[event_receiver(native)]
class CEventRec {
public:
   float handler1() {         // change float to int
      return 0.0;             // change 0.0 to 0
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
