---
description: "Learn more about: Compiler Warning (level 1) C4288"
title: "Compiler Warning (level 1) C4288"
ms.date: "11/04/2016"
f1_keywords: ["C4288"]
helpviewer_keywords: ["C4288"]
ms.assetid: 6aaeb139-90cd-457a-9d37-65687042736f
---
# Compiler Warning (level 1) C4288

> nonstandard extension used : 'var' : loop control variable declared in the for-loop is used outside the for-loop scope; it conflicts with the declaration in the outer scope

When compiling with [`/Ze`](../../build/reference/za-ze-disable-language-extensions.md) and **/Zc:forscope-**, a variable declared in a **`for`** loop was used after the [for](../../cpp/for-statement-cpp.md)-loop scope. A Microsoft extension to the C++ language allows this variable to remain in scope, and C4288 reminds you that the first declaration of the variable is not used.

See [`/Zc:forScope`](../../build/reference/zc-forscope-force-conformance-in-for-loop-scope.md) for information about how to specify the Microsoft extension in **`for`** loops with /Ze.

The following sample generates C4288:

```cpp
// C4288.cpp
// compile with: /W1 /c /Zc:forScope-
int main() {
   int i = 0;    // not used in this program
   for (int i = 0 ; ; ) ;
   i++;   // C4288 using for-loop declaration of i
}
```
