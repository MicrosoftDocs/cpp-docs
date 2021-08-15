---
description: "Learn more about: Compiler Error C3732"
title: "Compiler Error C3732"
ms.date: "11/04/2016"
f1_keywords: ["C3732"]
helpviewer_keywords: ["C3732"]
ms.assetid: 2d55a7e1-9c39-4379-a093-2f7beb27e2ca
---
# Compiler Error C3732

'interface': a custom interface that fires COM events cannot inherit from IDispatch

An interface that supports COM events cannot inherit from `IDispatch`. For more information, see [Event Handling in COM](../../cpp/event-handling-in-com.md).

The following error generates C3732:

```cpp
// C3732.cpp
#define _ATL_ATTRIBUTES 1
#include "atlbase.h"
#include "atlcom.h"

[module(name="test")];

// to resolve this C3732, use dual instead of object
// or inherit from IUnknown
[ object ]
__interface I : IDispatch
{
};

[ event_source(com), coclass ]
struct A
{
   __event __interface I;   // C3732
};

int main()
{
}
```
