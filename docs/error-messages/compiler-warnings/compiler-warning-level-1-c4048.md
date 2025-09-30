---
title: "Compiler Warning (level 1) C4048"
description: "Learn more about: Compiler Warning (level 1) C4048"
ms.date: 11/04/2016
f1_keywords: ["C4048"]
helpviewer_keywords: ["C4048"]
---
# Compiler Warning (level 1) C4048

> different declared array subscripts : 'identifier1' and 'identifier2'

## Remarks

An expression involves pointers to arrays of different size. The pointers are used without conversion.

This warning may be fixed if you explicitly cast the arrays to the same or equivalent type.
