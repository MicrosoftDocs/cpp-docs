---
title: "One's complement operator: ~"
description: "The C++ standard language one's complement operator syntax and use."
ms.date: 07/23/2020
f1_keywords: ["~", "compl_cpp"]
helpviewer_keywords: ["tilde (~) one's complement operator", "one's complement operator", "bitwise-complement operator", "compl operator", "~ operator [C++], syntax"]
ms.assetid: 4bf81967-34f7-4b4b-aade-fd03d5da0174
---
# One's complement operator: ~

## Syntax

```cpp
~ cast-expression
```

## Remarks

The one's complement operator (**`~`**), sometimes called the *bitwise complement* operator, yields a bitwise one's complement of its operand. That is, every bit that is 1 in the operand is 0 in the result. Conversely, every bit that is 0 in the operand is 1 in the result. The operand to the one's complement operator must be an integral type.

## Operator keyword for ~

C++ specifies **`compl`** as an alternative spelling for **`~`**. In C, the alternative spelling is provided as a macro in the \<iso646.h> header. In C++, the alternative spelling is a keyword; use of \<iso646.h> or the C++ equivalent \<ciso646> is deprecated. In Microsoft C++, the [`/permissive-`](../build/reference/permissive-standards-conformance.md) or [`/Za`](../build/reference/za-ze-disable-language-extensions.md) compiler option is required to enable the alternative spelling.

## Example

```cpp
// expre_One_Complement_Operator.cpp
// compile with: /EHsc
#include <iostream>

using namespace std;

int main () {
   unsigned short y = 0xFFFF;
   cout << hex << y << endl;
   y = ~y;   // Take one's complement
   cout << hex << y << endl;
}
```

In this example, the new value assigned to `y` is the one's complement of the unsigned value 0xFFFF, or 0x0000.

Integral promotion is performed on integral operands. The type the operand is promoted to is the resultant type. For more information on integral promotion, see [Standard conversions](standard-conversions.md).

## See also

[Expressions with unary operators](expressions-with-unary-operators.md)<br/>
[C++ built-in operators, precedence, and associativity](cpp-built-in-operators-precedence-and-associativity.md)<br/>
[Unary arithmetic operators](../c-language/unary-arithmetic-operators.md)
