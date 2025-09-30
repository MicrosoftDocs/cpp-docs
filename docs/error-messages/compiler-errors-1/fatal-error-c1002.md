---
title: "Fatal Error C1002"
description: "Learn more about: Fatal Error C1002"
ms.date: 11/04/2016
f1_keywords: ["C1002"]
helpviewer_keywords: ["C1002"]
---
# Fatal Error C1002

> compiler is out of heap space in pass 2

## Remarks

The compiler ran out of dynamic memory space during its second pass, probably due to a program with too many symbols or complex expressions.

### To fix by using the following possible solutions

1. Divide the source file into several smaller files.

1. Break expressions into smaller subexpressions.

1. Remove other programs or drivers that consume memory.
