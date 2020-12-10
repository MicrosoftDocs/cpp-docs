---
description: "Learn more about: Sequential-Evaluation Operator"
title: "Sequential-Evaluation Operator"
ms.date: "11/04/2016"
helpviewer_keywords: ["operators [C++], sequential-evaluation", "sequential-evaluation operator", "comma operator"]
ms.assetid: 587514f4-c8e2-44e9-81a8-7a553ce1453a
---
# Sequential-Evaluation Operator

The sequential-evaluation operator, also called the "comma operator," evaluates its two operands sequentially from left to right.

## Syntax

*expression*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*assignment-expression*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*expression* **,** *assignment-expression*

The left operand of the sequential-evaluation operator is evaluated as a **`void`** expression. The result of the operation has the same value and type as the right operand. Each operand can be of any type. The sequential-evaluation operator does not perform type conversions between its operands, and it does not yield an l-value. There is a sequence point after the first operand, which means all side effects from the evaluation of the left operand are completed before beginning evaluation of the right operand. See [Sequence Points](../c-language/c-sequence-points.md) for more information.

The sequential-evaluation operator is typically used to evaluate two or more expressions in contexts where only one expression is allowed.

Commas can be used as separators in some contexts. However, you must be careful not to confuse the use of the comma as a separator with its use as an operator; the two uses are completely different.

## Example

This example illustrates the sequential-evaluation operator:

```
for ( i = j = 1; i + j < 20; i += i, j-- );
```

In this example, each operand of the **`for`** statement's third expression is evaluated independently. The left operand `i += i` is evaluated first; then the right operand, `j--`, is evaluated.

```
func_one( x, y + 2, z );
func_two( (x--, y + 2), z );
```

In the function call to `func_one`, three arguments, separated by commas, are passed: `x`, `y + 2`, and `z`. In the function call to `func_two`, parentheses force the compiler to interpret the first comma as the sequential-evaluation operator. This function call passes two arguments to `func_two`. The first argument is the result of the sequential-evaluation operation `(x--, y + 2)`, which has the value and type of the expression `y + 2`; the second argument is `z`.

## See also

[Comma Operator: ,](../cpp/comma-operator.md)
