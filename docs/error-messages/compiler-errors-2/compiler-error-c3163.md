---
description: "Learn more about: Compiler Error C3163"
title: "Compiler Error C3163"
ms.date: "11/04/2016"
f1_keywords: ["C3163"]
helpviewer_keywords: ["C3163"]
ms.assetid: 17dcafa3-f416-4e04-a232-f9569218ba75
---
# Compiler Error C3163

> '*construct*': attributes inconsistent with previous declaration

The attribute(s) that are applied to a definition conflict with the attribute(s) that are applied to a declaration.

One way to resolve C3163 is to eliminate attributes on the forward declaration. Any attributes on a forward declaration should be less than the attributes on the definition or, at most, equal to them.

A possible cause of the C3163 error involves the Microsoft source code annotation language (SAL). The SAL macros do not expand unless you compile your project by using the **`/analyze`** flag. A program that compiles cleanly without **`/analyze`** might throw C3163 if you attempt to recompile it with the **`/analyze`** option. For more information about SAL, see [SAL Annotations](../../c-runtime-library/sal-annotations.md).

## Example

The following sample generates C3163.

```cpp
// C3163.cpp
// compile with: /clr /c
using namespace System;

[CLSCompliant(true)] void f();
[CLSCompliant(false)] void f() {}   // C3163
// try the following line instead
// [CLSCompliant(true)] void f() {}
```

## See also

[SAL Annotations](../../c-runtime-library/sal-annotations.md)
