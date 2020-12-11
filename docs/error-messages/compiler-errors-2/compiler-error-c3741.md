---
description: "Learn more about: Compiler Error C3741"
title: "Compiler Error C3741"
ms.date: "11/04/2016"
f1_keywords: ["C3741"]
helpviewer_keywords: ["C3741"]
ms.assetid: ed311315-cc32-49c9-97fa-01b293d81526
---
# Compiler Error C3741

'class': must be a coclass when the 'layout_dependent' parameter of event_receiver = true

When `layout_dependent=true` for an [event_receiver](../../windows/attributes/event-receiver.md) class, then the class must also have the [coclass](../../windows/attributes/coclass.md) attribute.

The following sample generates C3741

```cpp
// C3741.cpp
// compile with: /c
// C3741 expected
#define _ATL_ATTRIBUTES 1
#include <atlbase.h>
#include <atlcom.h>
[module(name="xx")];

[object, uuid("00000000-0000-0000-0000-000000000001")]
__interface I{ HRESULT f(); };

// Delete the following line to resolve.
[ event_receiver(com, layout_dependent=true)]

// class or struct must be declared with coclass
// Uncomment the following line to resolve.
// [ event_receiver(com, layout_dependent=true), coclass, uuid("00000000-0000-0000-0000-000000000002")]
struct R : I {
   HRESULT f(){ return 0; }
   R(){}
   R(I* a){ __hook(I, a); }
};
```
