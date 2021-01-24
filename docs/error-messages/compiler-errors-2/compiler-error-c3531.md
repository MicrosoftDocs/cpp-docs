---
description: "Learn more about: Compiler Error C3531"
title: "Compiler Error C3531"
ms.date: "11/04/2016"
f1_keywords: ["C3531"]
helpviewer_keywords: ["C3531"]
ms.assetid: 2bdb9fdc-9ddf-403e-8b92-02763d434487
---
# Compiler Error C3531

'symbol': a symbol whose type contains 'auto' must have an initializer

The specified variable does not have an initializer expression.

### To correct this error

1. Specify an initializer expression, such as a simple assignment that uses equal-sign syntax, when you declare the variable.

## Example

The following example yields C3531 because variables `x1`, `y1, y2, y3`, and `z2` are not initialized.

```cpp
// C3531.cpp
// Compile with /Zc:auto
int main()
{
   auto x1;                  // C3531
   auto y1, y2, y3;          // C3531
   auto z1 = 1, z2, z3 = -1; // C3531
   return 0;
}
```

## See also

[auto Keyword](../../cpp/auto-cpp.md)
