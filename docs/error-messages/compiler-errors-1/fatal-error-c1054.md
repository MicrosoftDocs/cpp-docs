---
title: "Fatal Error C1054"
description: "Learn more about: Fatal Error C1054"
ms.date: 11/04/2016
f1_keywords: ["C1054"]
helpviewer_keywords: ["C1054"]
---
# Fatal Error C1054

> compiler limit : initializers nested too deeply

## Remarks

The code exceeds the nesting limit on initializers (10-15 levels, depending on the combination of types being initialized).

### To fix by using the following possible solutions

1. Simplify the data types being initialized to reduce nesting.

1. Initialize variables in separate statements after the declaration.
