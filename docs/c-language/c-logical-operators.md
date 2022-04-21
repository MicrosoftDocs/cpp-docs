---
description: "Learn more about: C logical operators"
title: "C logical operators"
ms.date: "06/14/2018"
helpviewer_keywords: ["logical operators, expression sequence points", "logical operators, C", "logical AND operator", "|| operator", "operators [C], logical", "short-circuit evaluation", "&& operator", "logical OR operator"]
ms.assetid: c0a4e766-ad56-4300-bf76-b28dc0e19b43
---
# C logical operators

The logical operators perform logical-AND (**`&&`**) and logical-OR (**`||`**) operations.

## Syntax

*`logical-AND-expression`*:\
&emsp;*`inclusive-OR-expression`*\
&emsp;*`logical-AND-expression`*  **`&&`**  *`inclusive-OR-expression`*

*`logical-OR-expression`*:\
&emsp;*`logical-AND-expression`*\
&emsp;*`logical-OR-expression`*  **`||`**  *`logical-AND-expression`*

## Remarks

Logical operators don't perform the usual arithmetic conversions. Instead, they evaluate each operand in terms of its equivalence to 0. The result of a logical operation is either 0 or 1. The type of the result is **`int`**.

The C logical operators are described below:

| Operator | Description |
|--|--|
| **`&&`** | The logical-AND operator produces the value 1 if both operands have nonzero values. If either operand is equal to 0, the result is 0. If the first operand of a logical-AND operation is equal to 0, the second operand isn't evaluated. |
| **`||`** | The logical-OR operator performs an inclusive-OR operation on its operands. The result is 0 if both operands have 0 values. If either operand has a nonzero value, the result is 1. If the first operand of a logical-OR operation has a nonzero value, the second operand isn't evaluated. |

The operands of logical-AND and logical-OR expressions are evaluated from left to right. If the value of the first operand is sufficient to determine the result of the operation, the second operand isn't evaluated. This effect is known as "short-circuit" evaluation. There's a sequence point after the first operand in the expression. For more information, see [Sequence points](../c-language/c-sequence-points.md).

## Examples

The following examples illustrate the logical operators:

```C
int w, x, y, z;

if ( x < y && y < z )
    printf( "x is less than z\n" );
```

In this example, the `printf` function is called to print a message if `x` is less than `y` and `y` is less than `z`. If `x` is greater than `y`, the second operand (`y < z`) isn't evaluated and nothing is printed. It's another case of short-circuit evaluation that must be considered when writing logical comparisons. Otherwise, it could cause problems if code relies on the side-effects of evaluating the second operand.

```C
printf( "%d" , (x == w || x == y || x == z) );
```

In this example, if `x` is equal to either `w`, `y`, or `z`, the second argument to the `printf` function evaluates to true and the value 1 is printed. Otherwise, it evaluates to false and the value 0 is printed. As soon as one of the conditions evaluates to true, evaluation ceases.

## See also

- [Logical AND operator: `&&`](../cpp/logical-and-operator-amp-amp.md)
- [Logical OR operator: `||`](../cpp/logical-or-operator-pipe-pipe.md)
