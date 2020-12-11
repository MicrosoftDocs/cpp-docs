---
description: "Learn more about: Compiler Warning (level 3) C4619"
title: "Compiler Warning (level 3) C4619"
ms.date: "11/04/2016"
f1_keywords: ["C4619"]
helpviewer_keywords: ["C4619"]
ms.assetid: 701fea21-01aa-4bea-93d4-1cb8824170b0
---
# Compiler Warning (level 3) C4619

\#pragma warning : there is no warning number 'number'

An attempt was made to disable a warning that does not exist.

This warning is off by default. See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.

The following sample generates C4619:

```cpp
// C4619.cpp
// compile with: /W3 /c
#pragma warning(default : 4619)
#pragma warning(disable : 4354)   // C4619, C4354 does not exist
```
