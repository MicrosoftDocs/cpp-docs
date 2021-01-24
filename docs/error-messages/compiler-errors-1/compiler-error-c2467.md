---
description: "Learn more about: Compiler Error C2467"
title: "Compiler Error C2467"
ms.date: "11/04/2016"
f1_keywords: ["C2467"]
helpviewer_keywords: ["C2467"]
ms.assetid: f9ead270-5d0b-41cc-bdcd-586a647c67a7
---
# Compiler Error C2467

illegal declaration of anonymous 'user-defined-type'

A nested user-defined type was declared. This is an error when compiling C source code with the ANSI compatibility option ([/Za](../../build/reference/za-ze-disable-language-extensions.md)) enabled.

The following sample generates C2467:

```c
//C2467.c
// compile with: /Za
int main() {
   struct X {
      union { int i; };   // C2467, nested declaration
   };
}
```
