---
description: "Learn more about: Compiler Error C2488"
title: "Compiler Error C2488"
ms.date: "11/04/2016"
f1_keywords: ["C2488"]
helpviewer_keywords: ["C2488"]
ms.assetid: cd435909-43e4-43c6-a57c-5d02468ef75f
---
# Compiler Error C2488

'identifier' : 'naked' can only be applied to non-member function definitions

The [naked](../../cpp/naked-cpp.md) attribute was applied to a function declaration.

The following sample generates C2488:

```cpp
// C2488.cpp
// compile with: /c
// processor: x86
__declspec( naked ) void func();   // C2488  declaration, not definition
__declspec( naked ) void i;   // C2488  i is not a function

__declspec( naked ) void func() {}   // OK
```
