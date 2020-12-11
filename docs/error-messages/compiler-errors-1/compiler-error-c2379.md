---
description: "Learn more about: Compiler Error C2379"
title: "Compiler Error C2379"
ms.date: "11/04/2016"
f1_keywords: ["C2379"]
helpviewer_keywords: ["C2379"]
ms.assetid: 37dc3015-a4af-4341-bbf3-da6150df7e51
---
# Compiler Error C2379

formal parameter number has different type when promoted

The type of the specified parameter is not compatible, through default promotions, with the type in a previous declaration. This is an error in ANSI C ([/Za](../../build/reference/za-ze-disable-language-extensions.md)) and a warning with Microsoft extensions (**/Ze**).

The following sample generates C2379:

```c
// C2379.c
// compile with: /Za
void func();
void func(char);   // C2379, char promotes to int
```
