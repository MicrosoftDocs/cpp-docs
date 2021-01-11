---
description: "Learn more about: Compiler Warning (level 4) C4255"
title: "Compiler Warning (level 4) C4255"
ms.date: "11/04/2016"
f1_keywords: ["C4255"]
helpviewer_keywords: ["C4255"]
ms.assetid: 2087b635-4b4c-4182-8a01-c26770d2bb88
---
# Compiler Warning (level 4) C4255

'function' : no function prototype given: converting '()' to '(void)'

The compiler did not find an explicit list of arguments to a function. This warning is for the C compiler only.

This warning is off by default. See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.

The following sample generates C4255:

```c
// C4255.c
// compile with: /W4 /WX
#pragma warning (default : 4255)

void f()  { // C4255
// try the following line instead
//void f(void) {
}

int main(int argc, char *argv[]) {
   f();
}
```
