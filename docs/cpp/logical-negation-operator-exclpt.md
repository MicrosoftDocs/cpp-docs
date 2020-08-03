---
title: "Logical negation operator: !"
description: "The C++ standard language logical negation operator syntax and use."
ms.date: 07/23/2020
f1_keywords: ["!"]
helpviewer_keywords: ["! operator", "NOT operator", "logical negation"]
ms.assetid: 650add9f-a7bc-426c-b01d-5fc6a81c8b62
---
# Logical negation operator: !

## Syntax

> **`!`** *cast-expression*

## Remarks

The logical negation operator (**`!`**) reverses the meaning of its operand. The operand must be of arithmetic or pointer type (or an expression that evaluates to arithmetic or pointer type). The operand is implicitly converted to type **`bool`**. The result is **`true`** if the converted operand is **`false`**; the result is **`false`** if the converted operand is **`true`**. The result is of type **`bool`**.

For an expression `e`, the unary expression `!e` is equivalent to the expression `(e == 0)`, except where overloaded operators are involved.

## Operator keyword for !

C++ specifies **`not`** as an alternative spelling for **`!`**. In C, the alternative spelling is provided as a macro in the \<iso646.h> header. In C++, the alternative spelling is a keyword; use of \<iso646.h> or the C++ equivalent \<ciso646> is deprecated. In Microsoft C++, the [`/permissive-`](../build/reference/permissive-standards-conformance.md) or [`/Za`](../build/reference/za-ze-disable-language-extensions.md) compiler option is required to enable the alternative spelling.

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

[Expressions with unary operators](../cpp/expressions-with-unary-operators.md)<br/>
[C++ built-in operators, precedence, and associativity](../cpp/cpp-built-in-operators-precedence-and-associativity.md)<br/>
[Unary arithmetic operators](../c-language/unary-arithmetic-operators.md)<br/>
