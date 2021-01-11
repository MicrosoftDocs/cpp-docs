---
description: "Learn more about: Fatal Error C1054"
title: "Fatal Error C1054"
ms.date: "11/04/2016"
f1_keywords: ["C1054"]
helpviewer_keywords: ["C1054"]
ms.assetid: 9cfb7307-b22a-4418-b7c0-2621b0ab5b1b
---
# Fatal Error C1054

compiler limit : initializers nested too deeply

The code exceeds the nesting limit on initializers (10-15 levels, depending on the combination of types being initialized).

### To fix by using the following possible solutions

1. Simplify the data types being initialized to reduce nesting.

1. Initialize variables in separate statements after the declaration.
