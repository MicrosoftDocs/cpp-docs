---
description: "Learn more about: Compiler Error C2093"
title: "Compiler Error C2093"
ms.date: "11/04/2016"
f1_keywords: ["C2093"]
helpviewer_keywords: ["C2093"]
ms.assetid: 17529a70-9169-46b5-9fc6-57a5ce224e6a
---
# Compiler Error C2093

'variable1' : cannot be initialized using address of automatic variable 'variable2'

When compiling with [/Za](../../build/reference/za-ze-disable-language-extensions.md), the program tried to use the address of an automatic variable as an initializer.

The following sample generates C2093:

```c
// C2093.c
// compile with: /Za /c
void func() {
   int li;   // an implicit auto variable
   int * s[]= { &li };   // C2093 address is not a constant

   // OK
   static int li2;
   int * s2[]= { &li2 };
}
```
