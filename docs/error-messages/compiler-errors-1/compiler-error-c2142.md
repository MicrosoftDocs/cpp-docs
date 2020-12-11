---
description: "Learn more about: Compiler Error C2142"
title: "Compiler Error C2142"
ms.date: "11/04/2016"
f1_keywords: ["C2142"]
helpviewer_keywords: ["C2142"]
ms.assetid: d0dbe10e-0952-49a4-8b33-e82fb7558b19
---
# Compiler Error C2142

function declarations differ, variable parameters specified only in one of them

One declaration of the function contains a variable parameter list. Another declaration does not. ANSI C ([/Za](../../build/reference/za-ze-disable-language-extensions.md)) only.

The following sample generates C2142:

```c
// C2142.c
// compile with: /Za /c
void func();
void func( int, ... );   // C2142
void func2( int, ... );   // OK
```
