---
description: "Learn more about: Usual Arithmetic Conversions"
title: "Usual Arithmetic Conversions"
ms.date: "11/04/2016"
helpviewer_keywords: ["arithmetic conversions [C++]", "type conversion [C++], arithmetic", "operators [C], arithmetic conversions", "data type conversion [C++], arithmetic", "conversions [C++], arithmetic", "arithmetic operators [C++], type conversions"]
ms.assetid: bfa49803-0efd-45d0-b987-111412a140d7
---
# Usual Arithmetic Conversions

Most C operators perform type conversions to bring the operands of an expression to a common type or to extend short values to the integer size used in machine operations. The conversions performed by C operators depend on the specific operator and the type of the operand or operands. However, many operators perform similar conversions on operands of integral and floating types. These conversions are known as "arithmetic conversions." Conversion of an operand value to a compatible type causes no change to its value.

The arithmetic conversions summarized below are called "usual arithmetic conversions." These steps are applied only for binary operators that expect arithmetic type. The purpose is to yield a common type which is also the type of the result. To determine which conversions actually take place, the compiler applies the following algorithm to binary operations in the expression. The steps below are not a precedence order.

1. If either operand is of type **`long double`**, the other operand is converted to type **`long double`**.

1. If the above condition is not met and either operand is of type **`double`**, the other operand is converted to type **`double`**.

1. If the above two conditions are not met and either operand is of type **`float`**, the other operand is converted to type **`float`**.

1. If the above three conditions are not met (none of the operands are of floating types), then integral conversions are performed on the operands as follows:

   - If either operand is of type **`unsigned long`**, the other operand is converted to type **`unsigned long`**.

   - If the above condition is not met and either operand is of type **`long`** and the other of type **`unsigned int`**, both operands are converted to type **`unsigned long`**.

   - If the above two conditions are not met, and either operand is of type **`long`**, the other operand is converted to type **`long`**.

   - If the above three conditions are not met, and either operand is of type **`unsigned int`**, the other operand is converted to type **`unsigned int`**.

   - If none of the above conditions are met, both operands are converted to type **`int`**.

The following code illustrates these conversion rules:

```
float   fVal;
double  dVal;
int   iVal;
unsigned long ulVal;

dVal = iVal * ulVal; /* iVal converted to unsigned long
                      * Uses step 4.
                      * Result of multiplication converted to double
                      */
dVal = ulVal + fVal; /* ulVal converted to float
                      * Uses step 3.
                      * Result of addition converted to double
                      */
```

## See also

[C Operators](../c-language/c-operators.md)
