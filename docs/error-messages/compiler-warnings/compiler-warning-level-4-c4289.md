---
description: "Learn more about: Compiler Warning (level 4) C4289"
title: "Compiler Warning (level 4) C4289"
ms.date: "11/04/2016"
f1_keywords: ["C4289"]
helpviewer_keywords: ["C4289"]
ms.assetid: 0dbd2863-4cde-4e16-894b-104a2d5fa724
---
# Compiler Warning (level 4) C4289

nonstandard extension used : 'var' : loop control variable declared in the for-loop is used outside the for-loop scope

When compiling with [/Ze](../../build/reference/za-ze-disable-language-extensions.md) and **/Zc:forScope-**, a variable declared in a [for](../../cpp/for-statement-cpp.md) loop was used after the **`for`**-loop scope.

See [/Zc:forScope](../../build/reference/zc-forscope-force-conformance-in-for-loop-scope.md) for information about how to specify standard behavior in **`for`** loops with **/Ze**.

This warning is off by default. See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.

The following sample generates C4289:

```cpp
// C4289.cpp
// compile with: /W4 /Zc:forScope-
#pragma warning(default:4289)
int main() {
   for (int i = 0 ; ; )   // C4289
      break;
   i++;
}
```
