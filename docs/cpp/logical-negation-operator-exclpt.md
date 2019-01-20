---
title: "Logical Negation Operator: !"
ms.date: "08/27/2018"
f1_keywords: ["!", "Not"]
helpviewer_keywords: ["! operator", "NOT operator", "logical negation"]
ms.assetid: 650add9f-a7bc-426c-b01d-5fc6a81c8b62
---
# Logical Negation Operator: !

## Syntax

```
! cast-expression
```

## Remarks

The logical negation operator (**!**) reverses the meaning of its operand. The operand must be of arithmetic or pointer type (or an expression that evaluates to arithmetic or pointer type). The operand is implicitly converted to type **bool**. The result is TRUE if the converted operand is FALSE; the result is FALSE if the converted operand is TRUE. The result is of type **bool**.

For an expression *e*, the unary expression `!e` is equivalent to the expression `(e == 0)`, except where overloaded operators are involved.

## Operator Keyword for !

The **not** operator is an alternative spelling of **!**. There are two ways to access the **not** operator in your programs: include the header file \<iso646.h>, or compile with the [/Za](../build/reference/za-ze-disable-language-extensions.md) (Disable language extensions) compiler option.

## Example

```cpp
// expre_Logical_NOT_Operator.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;

int main() {
    int i = 0;
    if (!i)
        cout << "i is zero" << endl;
}
```

## See also

- [Expressions with Unary Operators](../cpp/expressions-with-unary-operators.md)
- [C++ Built-in Operators, Precedence and Associativity](../cpp/cpp-built-in-operators-precedence-and-associativity.md)
- [Unary Arithmetic Operators](../c-language/unary-arithmetic-operators.md)
