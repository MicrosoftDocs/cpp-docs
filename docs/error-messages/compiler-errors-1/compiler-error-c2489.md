---
title: "Compiler Error C2489"
description: "Learn more about: Compiler Error C2489"
ms.date: 11/04/2016
f1_keywords: ["C2489"]
helpviewer_keywords: ["C2489"]
---
# Compiler Error C2489

> 'identifier' : initialized auto or register variable not allowed at function scope in 'naked' function

## Remarks

For more information, see [naked](../../cpp/naked-cpp.md).

## Example

The following example generates C2489:

```cpp
// C2489.cpp
// processor: x86
__declspec( naked ) int func() {
   int i = 1;   // C2489
   register int j = 1;   // C2489
}
```
