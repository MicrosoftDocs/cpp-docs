---
title: "Fatal Error C1509"
description: "Learn more about: Fatal Error C1509"
ms.date: 11/04/2016
f1_keywords: ["C1509"]
helpviewer_keywords: ["C1509"]
---
# Fatal Error C1509

> compiler limit : too many exception handler states in function 'function'. simplify function

## Remarks

The code exceeds an internal limit on exception handler states (32,768 states).

The most common cause is that the function contains a complex expression of user-defined class variables and arithmetic operators.

### To fix by using the following possible solutions

1. Simplify expressions by assigning common subexpressions to temporary variables.

1. Split the function into smaller functions.
