---
description: "Learn more about: Using the Additive Operators"
title: "Using the Additive Operators"
ms.date: "11/04/2016"
helpviewer_keywords: ["operators [C++], addition", "additive operators"]
ms.assetid: 7d54841e-436d-4ae8-9865-1ac1829e6f22
---
# Using the Additive Operators

The following examples, which illustrate the addition and subtraction operators, use these declarations:

```
int i = 4, j;
float x[10];
float *px;
```

These statements are equivalent:

```
px = &x[4 + i];
px = &x[4] + i;
```

The value of `i` is multiplied by the length of a **`float`** and added to `&x[4]`. The resulting pointer value is the address of `x[8]`.

```
j = &x[i] - &x[i-2];
```

In this example, the address of the third element of `x` (given by `x[i-2]`) is subtracted from the address of the fifth element of `x` (given by `x[i]`). The difference is divided by the length of a **`float`**; the result is the integer value 2.

## See also

[C Additive Operators](../c-language/c-additive-operators.md)
