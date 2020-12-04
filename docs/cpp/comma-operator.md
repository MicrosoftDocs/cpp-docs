---
description: "Learn more about: Comma Operator: ,"
title: "Comma Operator: ,"
ms.date: "11/04/2016"
f1_keywords: ["%2C"]
helpviewer_keywords: ["comma operator"]
ms.assetid: 38e0238e-19da-42ba-ae62-277bfdab6090
---
# Comma Operator: ,

Allows grouping two statements where one is expected.

## Syntax

```
expression , expression
```

## Remarks

The comma operator has left-to-right associativity. Two expressions separated by a comma are evaluated left to right. The left operand is always evaluated, and all side effects are completed before the right operand is evaluated.

Commas can be used as separators in some contexts, such as function argument lists. Do not confuse the use of the comma as a separator with its use as an operator; the two uses are completely different.

Consider the expression `e1, e2`. The type and value of the expression are the type and value of *e2*; the result of evaluating *e1* is discarded. The result is an l-value if the right operand is an l-value.

Where the comma is normally used as a separator (for example in actual arguments to functions or aggregate initializers), the comma operator and its operands must be enclosed in parentheses. For example:

```cpp
func_one( x, y + 2, z );
func_two( (x--, y + 2), z );
```

In the function call to `func_one` above, three arguments, separated by commas, are passed: `x`, `y + 2`, and `z`. In the function call to `func_two`, parentheses force the compiler to interpret the first comma as the sequential-evaluation operator. This function call passes two arguments to `func_two`. The first argument is the result of the sequential-evaluation operation `(x--, y + 2)`, which has the value and type of the expression `y + 2`; the second argument is `z`.

## Example

```cpp
// cpp_comma_operator.cpp
#include <stdio.h>
int main () {
   int i = 10, b = 20, c= 30;
   i = b, c;
   printf("%i\n", i);

   i = (b, c);
   printf("%i\n", i);
}
```

```Output
20
30
```

## See also

[Expressions with Binary Operators](../cpp/expressions-with-binary-operators.md)<br/>
[C++ Built-in Operators, Precedence and Associativity](../cpp/cpp-built-in-operators-precedence-and-associativity.md)<br/>
[Sequential-Evaluation Operator](../c-language/sequential-evaluation-operator.md)
