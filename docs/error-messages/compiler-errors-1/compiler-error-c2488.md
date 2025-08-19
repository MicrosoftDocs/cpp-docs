---
title: "Compiler Error C2488"
description: "Learn more about: Compiler Error C2488"
ms.date: 11/04/2016
f1_keywords: ["C2488"]
helpviewer_keywords: ["C2488"]
---
# Compiler Error C2488

> 'identifier' : 'naked' can only be applied to non-member function definitions

## Remarks

The [naked](../../cpp/naked-cpp.md) attribute was applied to a function declaration.

## Example

The following example generates C2488:

```cpp
// C2488.cpp
// compile with: /c
// processor: x86
__declspec( naked ) void func();   // C2488  declaration, not definition
__declspec( naked ) void i;   // C2488  i is not a function

__declspec( naked ) void func() {}   // OK
```
