---
title: "Compiler Warning (level 4) C4611"
description: "Learn more about: Compiler Warning (level 4) C4611"
ms.date: 11/04/2016
f1_keywords: ["C4611"]
helpviewer_keywords: ["C4611"]
---
# Compiler Warning (level 4) C4611

> interaction between 'function' and C++ object destruction is non-portable

## Remarks

On some platforms, functions that include **`catch`** may not support C++ object semantics of destruction when out of scope.

To avoid unexpected behavior, avoid using **`catch`** in functions that have constructors and destructors.

This warning is only issued once; see [pragma warning](../../preprocessor/warning.md).
