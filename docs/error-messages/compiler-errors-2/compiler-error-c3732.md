---
title: "Compiler Error C3732"
description: "Learn more about: Compiler Error C3732"
ms.date: 11/04/2016
f1_keywords: ["C3732"]
helpviewer_keywords: ["C3732"]
---
# Compiler Error C3732

> 'interface': a custom interface that fires COM events cannot inherit from IDispatch

## Remarks

An interface that supports COM events cannot inherit from `IDispatch`. For more information, see [Event Handling in COM](../../cpp/event-handling-in-com.md).

## Example

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
