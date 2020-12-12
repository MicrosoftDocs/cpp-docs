---
description: "Learn more about: Compiler Warning (level 1) C4683"
title: "Compiler Warning (level 1) C4683"
ms.date: "08/27/2018"
f1_keywords: ["C4683"]
helpviewer_keywords: ["C4683"]
ms.assetid: e6e77364-dba1-46dd-ae1d-03da23070bce
---
# Compiler Warning (level 1) C4683

> '*function*': event source has an 'out'-parameter; exercise caution when hooking multiple event handlers

## Remarks

If more than one event sink is listening to a COM event source, the value of an out parameter may be ignored.

Be aware that a memory leak will occur in the following situations:

1. If a method has an out parameter that is internally allocated, for example a BSTR *.

2. If the event has more than one handler (is a multicast event).

The reason for the leak is that the out parameter will be set by more than one handler, but returned to the call site only by the last handler.

## Example

The following sample generates C4683 and shows how to fix it:

```cpp
// C4683.cpp
// compile with: /W1 /LD
#define _ATL_ATTRIBUTES 1
#include "atlbase.h"
#include "atlcom.h"

[ module(name="xx") ];

[ object ]
__interface I {
   HRESULT f([out] int* pi);
   // try the following line instead
   // HRESULT f(int* pi);
};

[ coclass, event_source(com) ]
struct E {
   __event __interface I;   // C4683
};
```
