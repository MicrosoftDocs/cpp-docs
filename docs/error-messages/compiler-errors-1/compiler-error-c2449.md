---
description: "Learn more about: Compiler Error C2449"
title: "Compiler Error C2449"
ms.date: "11/04/2016"
f1_keywords: ["C2449"]
helpviewer_keywords: ["C2449"]
ms.assetid: 544bf0b6-daa0-40e8-9f21-8e583d472a2d
---
# Compiler Error C2449

found '{' at file scope (missing function header?)

An open brace occurs at file scope.

This error can be caused by a semicolon between a function header and the opening brace of the function definition.

The following sample generates C2499:

```c
// C2449.c
// compile with: /c
void __stdcall func(void) {}   // OK
void __stdcall func(void);  // extra semicolon on this line
{                         // C2449 detected here
```
