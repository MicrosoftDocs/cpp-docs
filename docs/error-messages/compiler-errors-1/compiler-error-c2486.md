---
description: "Learn more about: Compiler Error C2486"
title: "Compiler Error C2486"
ms.date: "11/04/2016"
f1_keywords: ["C2486"]
helpviewer_keywords: ["C2486"]
ms.assetid: 436da349-6461-4e32-bfca-4f3e620108e2
---
# Compiler Error C2486

'__LOCAL_SIZE' only allowed in function with the 'naked' attribute

In inline assembly functions, the name `__LOCAL_SIZE` is reserved for functions declared with the [naked](../../cpp/naked-cpp.md) attribute.

The following sample generates C2486:

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
