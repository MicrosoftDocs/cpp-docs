---
title: "Logical OR operator: ||"
description: "The C++ standard language logical OR operator syntax and use."
ms.date: 07/23/2020
f1_keywords: ["||", "or_cpp"]
helpviewer_keywords: ["OR operator [C++], logical", "|| operator", "OR operator", "logical OR operator"]
ms.assetid: 31837c99-2655-4bf3-8ded-f13b7a9dc533
---
# Logical OR operator: `||`

## Syntax

> *logical-or-expression* **`||`** *logical-and-expression*

## Remarks

The logical OR operator (**`||`**) returns the boolean value **`true`** if either or both operands is **`true`** and returns **`false`** otherwise. The operands are implicitly converted to type **`bool`** before evaluation, and the result is of type **`bool`**. Logical OR has left-to-right associativity.

The operands to the logical OR operator don't have to have the same type, but they must be of boolean, integral, or pointer type. The operands are commonly relational or equality expressions.

The first operand is completely evaluated and all side effects are completed before continuing evaluation of the logical OR expression.

The second operand is evaluated only if the first operand evaluates to **`false`**, because evaluation isn't needed when the logical OR expression is **`true`**. It's known as *short-circuit* evaluation.

```cpp
printf( "%d" , (x == w || x == y || x == z) );
```

In the above example, if `x` is equal to either `w`, `y`, or `z`, the second argument to the `printf` function evaluates to **`true`**, which is then promoted to an integer, and the value 1 is printed. Otherwise, it evaluates to **`false`** and the value 0 is printed. As soon as one of the conditions evaluates to **`true`**, evaluation stops.

## Operator keyword for `||`

C++ specifies **`or`** as an alternative spelling for **`||`**. In C, the alternative spelling is provided as a macro in the \<iso646.h> header. In C++, the alternative spelling is a keyword; use of \<iso646.h> or the C++ equivalent \<ciso646> is deprecated. In Microsoft C++, the [`/permissive-`](../build/reference/permissive-standards-conformance.md) or [`/Za`](../build/reference/za-ze-disable-language-extensions.md) compiler option is required to enable the alternative spelling.

## Example

```cpp
// expre_Logical_OR_Operator.cpp
// compile with: /EHsc
// Demonstrate logical OR
#include <iostream>
using namespace std;
int main() {
   int a = 5, b = 10, c = 15;
   cout  << boolalpha
         << "The true expression "
         << "a < b || b > c yields "
         << (a < b || b > c) << endl
         << "The false expression "
         << "a > b || b > c yields "
         << (a > b || b > c) << endl;
}
```

## See also

[C++ built-in operators, precedence, and associativity](cpp-built-in-operators-precedence-and-associativity.md)<br/>
[C logical operators](../c-language/c-logical-operators.md)
