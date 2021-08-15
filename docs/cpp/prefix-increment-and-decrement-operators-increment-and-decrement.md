---
description: "Learn more about: Prefix Increment and Decrement Operators: ++ and --"
title: "Prefix Increment and Decrement Operators: ++ and --"
ms.date: "11/04/2016"
f1_keywords: ["--", "++"]
helpviewer_keywords: ["increment operators [C++], syntax", "++ operator [C++], prefix increment operators", "operators [C++], decrement", "-- operator [C++], prefix decrement operators [C++]", "operators [C++], increment", "decrement operators [C++], syntax", "decrement operators [C++]"]
ms.assetid: 45ea7fc7-f279-4be9-a216-1d9a0ef9eb7b
---
# Prefix Increment and Decrement Operators: ++ and --

## Syntax

```
++ unary-expression
-- unary-expression
```

## Remarks

The prefix increment operator (**++**) adds one to its operand; this incremented value is the result of the expression. The operand must be an l-value not of type **`const`**. The result is an l-value of the same type as the operand.

The prefix decrement operator (**--**) is analogous to the prefix increment operator, except that the operand is decremented by one and the result is this decremented value.

**Visual Studio 2017 version 15.3 and later** (available with [/std:c++17](../build/reference/std-specify-language-standard-version.md)): The operand of an increment or decrement operator may not be of type **`bool`**.

Both the prefix and postfix increment and decrement operators affect their operands. The key difference between them is the order in which the increment or decrement takes place in the evaluation of an expression. (For more information, see [Postfix Increment and Decrement Operators](../cpp/postfix-increment-and-decrement-operators-increment-and-decrement.md).) In the prefix form, the increment or decrement takes place before the value is used in expression evaluation, so the value of the expression is different from the value of the operand. In the postfix form, the increment or decrement takes place after the value is used in expression evaluation, so the value of the expression is the same as the value of the operand. For example, the following program prints "`++i = 6`":

```cpp
// expre_Increment_and_Decrement_Operators.cpp
// compile with: /EHsc
#include <iostream>

using namespace std;

int main() {
   int i = 5;
   cout << "++i = " << ++i << endl;
}
```

An operand of integral or floating type is incremented or decremented by the integer value 1. The type of the result is the same as the operand type. An operand of pointer type is incremented or decremented by the size of the object it addresses. An incremented pointer points to the next object; a decremented pointer points to the previous object.

Because increment and decrement operators have side effects, using expressions with increment or decrement operators in a [preprocessor macro](../preprocessor/macros-c-cpp.md) can have undesirable results. Consider this example:

```cpp
// expre_Increment_and_Decrement_Operators2.cpp
#define max(a,b) ((a)<(b))?(b):(a)

int main()
{
   int i = 0, j = 0, k;
   k = max( ++i, j );
}
```

The macro expands to:

```cpp
k = ((++i)<(j))?(j):(++i);
```

If `i` is greater than or equal to `j` or less than `j` by 1, it will be incremented twice.

> [!NOTE]
> C++ inline functions are preferable to macros in many cases because they eliminate side effects such as those described here, and allow the language to perform more complete type checking.

## See also

[Expressions with Unary Operators](../cpp/expressions-with-unary-operators.md)<br/>
[C++ Built-in Operators, Precedence and Associativity](../cpp/cpp-built-in-operators-precedence-and-associativity.md)<br/>
[Prefix Increment and Decrement Operators](../c-language/prefix-increment-and-decrement-operators.md)
