---
description: "Learn more about: Compiler Warning (level 4) C4431"
title: "Compiler Warning (level 4) C4431"
ms.date: "11/04/2016"
f1_keywords: ["C4431"]
helpviewer_keywords: ["C4431"]
ms.assetid: 58434ab6-dd8d-427b-953a-602fb7453ae6
---
# Compiler Warning (level 4) C4431

missing type specifier - int assumed. Note: C no longer supports default-int

This error can be generated as a result of compiler conformance work that was done for Visual Studio 2005: Visual C++ no longer creates untyped identifiers as int by default. The type of an identifier must be specified explicitly.

This warning is off by default. See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.

## Example

The following sample generates C4431.

```c
// C4431.c
// compile with: /c /W4
#pragma warning(default:4431)
i;   // C4431
int i;   // OK
```
