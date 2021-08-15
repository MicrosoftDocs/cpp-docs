---
description: "Learn more about: Postfix Increment and Decrement Operators: ++ and --"
title: "Postfix Increment and Decrement Operators: ++ and --"
ms.date: "11/04/2016"
f1_keywords: ["--", "++"]
helpviewer_keywords: ["increment operators [C++], syntax", "member-selection operators [C++]", "-- operator [C++], postfix decrement operators", "postfix operators [C++]", "++ operator [C++], postfix increment operators", "decrement operators [C++], syntax", "operators [C++], postfix", "decrement operators [C++]"]
ms.assetid: 0204d5c8-51b0-4108-b8a1-074c5754d89c
---
# Postfix Increment and Decrement Operators: ++ and --

## Syntax

```
postfix-expression ++
postfix-expression --
```

## Remarks

C++ provides prefix and postfix increment and decrement operators; this section describes only the postfix increment and decrement operators. (For more information, see [Prefix Increment and Decrement Operators](../cpp/prefix-increment-and-decrement-operators-increment-and-decrement.md).) The difference between the two is that in the postfix notation, the operator appears after *postfix-expression*, whereas in the prefix notation, the operator appears before *expression.* The following example shows a postfix-increment operator:

```cpp
i++;
```

The effect of applying the postfix increment operator (**++**) is that the operand's value is increased by one unit of the appropriate type. Similarly, the effect of applying the postfix decrement operator (**--**) is that the operand's value is decreased by one unit of the appropriate type.

It is important to note that a postfix increment or decrement expression evaluates to the value of the expression *prior to* application of the respective operator. The increment or decrement operation occurs *after* the operand is evaluated. This issue arises only when the postfix increment or decrement operation occurs in the context of a larger expression.

When a postfix operator is applied to a function argument, the value of the argument is not guaranteed to be incremented or decremented before it is passed to the function.  See section 1.9.17 in the C++ standard for more information.

Applying the postfix increment operator to a pointer to an array of objects of type **`long`** actually adds four to the internal representation of the pointer. This behavior causes the pointer, which previously referred to the *n*th element of the array, to refer to the (*n*+1)th element.

The operands to postfix increment and postfix decrement operators must be modifiable (not **`const`**) l-values of arithmetic or pointer type. The type of the result is the same as that of the *postfix-expression*, but it is no longer an l-value.

**Visual Studio 2017 version 15.3 and later** (available with [/std:c++17](../build/reference/std-specify-language-standard-version.md)): The operand of a postfix increment  or decrement operator may not be of type **`bool`**.

The following code illustrates the postfix increment operator:

```cpp
// expre_Postfix_Increment_and_Decrement_Operators.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;

int main() {
   int i = 10;
   cout << i++ << endl;
   cout << i << endl;
}
```

Postincrement and postdecrement operations on enumerated types are not supported:

```cpp
enum Compass { North, South, East, West );
Compass myCompass;
for( myCompass = North; myCompass != West; myCompass++ ) // Error
```

## See also

[Postfix Expressions](../cpp/postfix-expressions.md)<br/>
[C++ Built-in Operators, Precedence and Associativity](../cpp/cpp-built-in-operators-precedence-and-associativity.md)<br/>
[C Postfix Increment and Decrement Operators](../c-language/c-postfix-increment-and-decrement-operators.md)
