---
title: "Logical OR operator: || | Microsoft Docs"
ms.custom: ""
ms.date: "06/14/2018"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
f1_keywords: ["||"]
dev_langs: ["C++"]
helpviewer_keywords: ["OR operator [C++], logical", "|| operator", "OR operator", "logical OR operator"]
ms.assetid: 31837c99-2655-4bf3-8ded-f13b7a9dc533
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Logical OR operator: ||

## Syntax

> *logical-or-expression* **||** *logical-and-expression*

## Remarks

The logical OR operator (**||**) returns the boolean value TRUE if either or both operands is TRUE and returns FALSE otherwise. The operands are implicitly converted to type **bool** prior to evaluation, and the result is of type **bool**. Logical OR has left-to-right associativity.

The operands to the logical OR operator need not be of the same type, but they must be of integral or pointer type. The operands are commonly relational or equality expressions.

The first operand is completely evaluated and all side effects are completed before continuing evaluation of the logical OR expression.

The second operand is evaluated only if the first operand evaluates to false (0). This eliminates needless evaluation of the second operand when the logical OR expression is true.

```cpp
printf( "%d" , (x == w || x == y || x == z) );
```

In the above example, if `x` is equal to either `w`, `y`, or `z`, the second argument to the `printf` function evaluates to true and the value 1 is printed. Otherwise, it evaluates to false and the value 0 is printed. As soon as one of the conditions evaluates to true, evaluation ceases.

## Operator Keyword for &#124;&#124;

The **or** operator is the text equivalent of **||**. There are two ways to access the **or** operator in your programs: include the header file \<iso646.h>, or compile with the [/Za](../build/reference/za-ze-disable-language-extensions.md) (Disable language extensions) compiler option.

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

- [C++ Built-in Operators Precedence and Associativity](cpp-built-in-operators-precedence-and-associativity.md)
- [C++ Built-in Operators, Precedence and Associativity](../cpp/cpp-built-in-operators-precedence-and-associativity.md)
- [C Logical Operators](../c-language/c-logical-operators.md)