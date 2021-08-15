---
description: "Learn more about: Compiler Error C2381"
title: "Compiler Error C2381"
ms.date: "11/04/2016"
f1_keywords: ["C2381"]
helpviewer_keywords: ["C2381"]
ms.assetid: cc765f67-64ac-406f-93ef-ae7d548d58d7
---
# Compiler Error C2381

'function' : redefinition; __declspec(noreturn) differs

A function was declared and then defined but the definition used the [noreturn](../../cpp/noreturn.md) **`__declspec`** modifier. The use of `noreturn` constitutes a redefinition of the function; the declaration and definition need to agree on the use of `noreturn`.

The following sample generates C2381:

```cpp
// C2381.cpp
// compile with: /c
void f1();
void __declspec(noreturn) f1() {}   // C2381
void __declspec(noreturn) f2() {}   // OK
```
