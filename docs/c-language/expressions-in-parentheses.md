---
description: "Learn more about: Expressions in Parentheses"
title: "Expressions in Parentheses"
ms.date: "11/04/2016"
helpviewer_keywords: ["parentheses", "expression evaluation, evaluation order", "expressions [C++], evaluating", "parentheses, expressions"]
ms.assetid: b8636147-6982-408c-9e64-29e40678ee43
---
# Expressions in Parentheses

You can enclose any operand in parentheses without changing the type or value of the enclosed expression. For example, in the expression:

```
( 10 + 5 ) / 5
```

the parentheses around `10 + 5` mean that the value of `10 + 5` is evaluated first and it becomes the left operand of the division (**/**) operator. The result of `( 10 + 5 ) / 5` is 3. Without the parentheses, `10 + 5 / 5` would evaluate to 11.

Although parentheses affect the way operands are grouped in an expression, they cannot guarantee a particular order of evaluation in all cases. For example, neither the parentheses nor the left-to-right grouping of the following expression guarantees what the value of `i` will be in either of the subexpressions:

```
( i++ +1 ) * ( 2 + i )
```

The compiler is free to evaluate the two sides of the multiplication in any order. If the initial value of `i` is zero, the whole expression could be evaluated as either of these two statements:

```
( 0 + 1 + 1 ) * ( 2 + 1 )
( 0 + 1 + 1 ) * ( 2 + 0 )
```

Exceptions resulting from side effects are discussed in [Side Effects](../c-language/side-effects.md).

## See also

[C Primary Expressions](../c-language/c-primary-expressions.md)
