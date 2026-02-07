---
title: "Math Error M6201"
description: "Learn more about: Math Error M6201"
ms.date: 11/04/2016
f1_keywords: ["M6201"]
helpviewer_keywords: ["M6201"]
---
# Math Error M6201

> 'function' : _DOMAIN error

## Remarks

An argument to the given function was outside the domain of legal input values for that function.

## Example

```
result = sqrt(-1.0)   // C statement
result = SQRT(-1.0)   !  FORTRAN statement
```

This error calls the `_matherr` function with the function name, its arguments, and the error type. You can rewrite the `_matherr` function to customize the handling of certain run-time floating-point math errors.
