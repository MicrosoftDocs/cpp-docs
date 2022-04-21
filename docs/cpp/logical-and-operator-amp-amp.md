---
title: "Logical AND Operator: &&"
description: "The C++ standard language logical AND operator syntax and use."
ms.date: 07/23/2020
f1_keywords: ["&&", "and_cpp"]
helpviewer_keywords: ["logical AND operator", "AND operator", "&& operator"]
ms.assetid: 50cfa664-a8c4-4b31-9bab-2f80d7cd2d1f
---
# Logical AND operator: `&&`

## Syntax

*`logical-and-expression`*:\
&emsp; *`equality-expression`*\
&emsp; *`logical-and-expression`* **`&&`** *`equality-expression`*

## Remarks

The logical AND operator (**`&&`**) returns **`true`** if both operands are **`true`** and returns **`false`** otherwise. The operands are implicitly converted to type **`bool`** before evaluation, and the result is of type **`bool`**. Logical AND has left-to-right associativity.

The operands to the logical AND operator don't need to have the same type, but they must have boolean, integral, or pointer type. The operands are commonly relational or equality expressions.

The first operand is completely evaluated and all side effects are completed before evaluation of the logical AND expression continues.

The second operand is evaluated only if the first operand evaluates to **`true`** (nonzero). This evaluation eliminates needless evaluation of the second operand when the logical AND expression is **`false`**. You can use this short-circuit evaluation to prevent null-pointer dereferencing, as shown in the following example:

```cpp
char *pch = 0;
// ...
(pch) && (*pch = 'a');
```

If `pch` is null (0), the right side of the expression is never evaluated. This short-circuit evaluation makes the assignment through a null pointer impossible.

## Operator keyword for `&&`

C++ specifies **`and`** as an alternative spelling for **`&&`**. In C, the alternative spelling is provided as a macro in the \<iso646.h> header. In C++, the alternative spelling is a keyword; use of \<iso646.h> or the C++ equivalent \<ciso646> is deprecated. In Microsoft C++, the [`/permissive-`](../build/reference/permissive-standards-conformance.md) or [`/Za`](../build/reference/za-ze-disable-language-extensions.md) compiler option is required to enable the alternative spelling.

## Example

```cpp
// expre_Logical_AND_Operator.cpp
// compile with: /EHsc
// Demonstrate logical AND
#include <iostream>

using namespace std;

int main() {
   int a = 5, b = 10, c = 15;
   cout  << boolalpha
         << "The true expression "
         << "a < b && b < c yields "
         << (a < b && b < c) << endl
         << "The false expression "
         << "a > b && b < c yields "
         << (a > b && b < c) << endl;
}
```

## See also

[C++ built-in operators, precedence, and associativity](cpp-built-in-operators-precedence-and-associativity.md)\
[C logical operators](../c-language/c-logical-operators.md)
