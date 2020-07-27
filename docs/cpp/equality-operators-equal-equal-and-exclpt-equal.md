---
title: "Equality operators: == and !="
description: "The C++ standard language equal-to and not-equal-to operator syntax and use."
ms.date: 07/23/2020
f1_keywords: ["!=", "==", "not_eq_cpp"]
helpviewer_keywords: ["!= operator", "equality operator", "not equal to comparison operator", "equality operator [C++], syntax", "== operator", "not_eq operator", "equal to operator"]
ms.assetid: ba4e9659-2392-4fb4-be5a-910a2a6df45a
---
# Equality operators: == and !=

## Syntax

> *expression* **`==`** *expression*\
> *expression* **`!=`** *expression*

## Remarks

The binary equality operators compare their operands for strict equality or inequality.

The equality operators, equal to (**`==`**) and not equal to (**`!=`**), have lower precedence than the relational operators, but they behave similarly. The result type for these operators is **`bool`**.

The equal-to operator (**`==`**) returns **`true`** if both operands have the same value; otherwise, it returns **`false`**. The not-equal-to operator (**`!=`**) returns **`true`** if the operands don't have the same value; otherwise, it returns **`false`**.

## Operator keyword for !=

C++ specifies **`not_eq`** as an alternative spelling for **`!=`**. (There's no alternative spelling for **`==`**.) In C, the alternative spelling is provided as a macro in the \<iso646.h> header. In C++, the alternative spelling is a keyword; use of \<iso646.h> or the C++ equivalent \<ciso646> is deprecated. In Microsoft C++, the [`/permissive-`](../build/reference/permissive-standards-conformance.md) or [`/Za`](../build/reference/za-ze-disable-language-extensions.md) compiler option is required to enable the alternative spelling.

## Example

```cpp
// expre_Equality_Operators.cpp
// compile with: /EHsc
#include <iostream>

using namespace std;

int main() {
   cout  << boolalpha
         << "The true expression 3 != 2 yields: "
         << (3 != 2) << endl
         << "The false expression 20 == 10 yields: "
         << (20 == 10) << endl;
}
```

Equality operators can compare pointers to members of the same type. In such a comparison, pointer-to-member conversions are performed. Pointers to members can also be compared to a constant expression that evaluates to 0.

## See also

[Expressions with binary operators](../cpp/expressions-with-binary-operators.md)<br/>
[C++ built-in operators, precedence; and associativity](../cpp/cpp-built-in-operators-precedence-and-associativity.md)<br/>
[C relational and equality operators](../c-language/c-relational-and-equality-operators.md)
