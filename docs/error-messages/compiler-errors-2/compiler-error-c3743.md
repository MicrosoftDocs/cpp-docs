---
title: "Compiler Error C3743"
description: "Learn more about: Compiler Error C3743"
ms.date: 11/04/2016
f1_keywords: ["C3743"]
helpviewer_keywords: ["C3743"]
---
# Compiler Error C3743

> can only hook/unhook an entire interface when the 'layout_dependent' parameter of event_receiver is true

## Remarks

The [__unhook](../../cpp/unhook.md) function varies in the number of parameters that it takes based on the value passed to the `layout_dependent` parameter in the [event_receiver](../../windows/attributes/event-receiver.md) class.

## Example

The following example generates C3743:

```cpp
// C3743.cpp
#define _ATL_ATTRIBUTES 1
#include <atlbase.h>
#include <atlcom.h>
[module(name="xx")];
[object] __interface I { HRESULT f(); };

[event_receiver(com, layout_dependent=true), coclass]
struct R : I {
        HRESULT f() {
      return 0;
   }
        R() {
   }

   R(I* a) {
      __hook(I, a, &R::f);   // C3743
      // The following line resolves the error.
      // __hook(I, a);
   }
};
```
