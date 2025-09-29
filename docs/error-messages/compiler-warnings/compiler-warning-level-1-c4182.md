---
title: "Compiler Warning (level 1) C4182"
description: "Learn more about: Compiler Warning (level 1) C4182"
ms.date: 11/04/2016
f1_keywords: ["C4182"]
helpviewer_keywords: ["C4182"]
---
# Compiler Warning (level 1) C4182

> #include nesting level is 'number' deep; possible infinite recursion

## Remarks

The compiler ran out of space on the heap because of the number of nested include files. An include file is nested when it is included from another include file.

This message is informational and precedes error [C1076](../../error-messages/compiler-errors-1/fatal-error-c1076.md).
