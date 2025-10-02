---
title: "Compiler Error C2486"
description: "Learn more about: Compiler Error C2486"
ms.date: 11/04/2016
f1_keywords: ["C2486"]
helpviewer_keywords: ["C2486"]
---
# Compiler Error C2486

> '__LOCAL_SIZE' only allowed in function with the 'naked' attribute

## Remarks

In inline assembly functions, the name `__LOCAL_SIZE` is reserved for functions declared with the [naked](../../cpp/naked-cpp.md) attribute.

## Example

The following example generates C2486:

```cpp
// C2486.cpp
// processor: x86
void __declspec(naked) f1() {
   __asm {
      mov   eax,   __LOCAL_SIZE
   }
}
void f2() {
   __asm {
      mov   eax,   __LOCAL_SIZE   // C2486
   }
}
```
