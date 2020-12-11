---
description: "Learn more about: Why Floating-Point Numbers May Lose Precision"
title: "Why Floating-Point Numbers May Lose Precision"
ms.date: "11/04/2016"
helpviewer_keywords: ["DBL_EPSILON constant", "FLT_EPSILON constant", "floating-point numbers, precision"]
ms.assetid: 1acb1add-ac06-4134-a2fd-aff13d8c4c15
---
# Why Floating-Point Numbers May Lose Precision

Floating-point decimal values generally do not have an exact binary representation. This is a side effect of how the CPU represents floating point data. For this reason, you may experience some loss of precision, and some floating-point operations may produce unexpected results.

This behavior is the result of one of the following:

- The binary representation of the decimal number may not be exact.

- There is a type mismatch between the numbers used (for example, mixing float and double).

To resolve the behavior, most programmers either ensure that the value is greater or less than what is needed, or they get and use a Binary Coded Decimal (BCD) library that will maintain the precision.

Binary representation of floating-point values affects the precision and accuracy of floating-point calculations. Microsoft Visual C++ uses [IEEE floating-point format](ieee-floating-point-representation.md).

## Example

```c
// Floating-point_number_precision.c
// Compile options needed: none. Value of c is printed with a decimal
// point precision of 10 and 6 (printf rounded value by default) to
// show the difference
#include <stdio.h>

#define EPSILON 0.0001   // Define your own tolerance
#define FLOAT_EQ(x,v) (((v - EPSILON) < x) && (x <( v + EPSILON)))

int main() {
   float a, b, c;

   a = 1.345f;
   b = 1.123f;
   c = a + b;
   // if (FLOAT_EQ(c, 2.468)) // Remove comment for correct result
   if (c == 2.468)            // Comment this line for correct result
      printf_s("They are equal.\n");
   else
      printf_s("They are not equal! The value of c is %13.10f "
                "or %f",c,c);
}
```

```Output
They are not equal! The value of c is  2.4679999352 or 2.468000
```

## Comments

For EPSILON, you can use the constants FLT_EPSILON, which is defined for float as 1.192092896e-07F, or DBL_EPSILON, which is defined for double as 2.2204460492503131e-016. You need to include float.h for these constants. These constants are defined as the smallest positive number x, such that x+1.0 is not equal to 1.0. Because this is a very small number, you should employ user-defined tolerance for calculations involving very large numbers.

## See also

[Optimizing Your Code](optimizing-your-code.md)
