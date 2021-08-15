---
description: "Learn more about: Compiler Warning (level 4) C4611"
title: "Compiler Warning (level 4) C4611"
ms.date: "11/04/2016"
f1_keywords: ["C4611"]
helpviewer_keywords: ["C4611"]
ms.assetid: bd90d0a6-75f9-4e97-968d-dda6773e9fd8
---
# Compiler Warning (level 4) C4611

interaction between 'function' and C++ object destruction is non-portable

On some platforms, functions that include **`catch`** may not support C++ object semantics of destruction when out of scope.

To avoid unexpected behavior, avoid using **`catch`** in functions that have constructors and destructors.

This warning is only issued once; see [pragma warning](../../preprocessor/warning.md).
