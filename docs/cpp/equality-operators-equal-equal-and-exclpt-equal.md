---
title: "Equality operators: == and !="
description: "The C++ standard language equal-to and not-equal-to operator syntax and use."
ms.date: 08/09/2024
f1_keywords: ["!=", "=="]
helpviewer_keywords: ["!= operator", "equality operator", "not equal to operator", "equality operator [C++], syntax", "== operator", "equal to operator"]
---
# Equality operators: `==` and `!=`

## Syntax

> *expression* **`==`** *expression*\
> *expression* **`!=`** *expression*

## Remarks

The equal-to operator (**`==`**) returns **`true`** if both operands have the same value; otherwise **`false`**.\
The not-equal-to operator (**`!=`**) returns **`true`** if the operands don't have the same value; otherwise **`false`**.

In C and C++, **`not_eq`** can be used as alternative to **`!=`**. For more information, see [`not-eq`](../c-runtime-library/reference/not-eq.md).

## Example

```cpp
#include <iostream>

int main()
{
    int x = 1, y = 1, z = 2;
    
    if (x == y)
    {
        std::cout << "Equal\n";
    }
    
    if (x != z)
    {
        std::cout << "Not equal\n";
    }
}
```

```output
Equal
Not equal
```

## See also

[`not-eq`](../c-runtime-library/reference/not-eq.md)\
[Operator overloading](../cpp/operator-overloading.md)\
[Expressions with binary operators](../cpp/expressions-with-binary-operators.md)\
[C++ built-in operators, precedence; and associativity](../cpp/cpp-built-in-operators-precedence-and-associativity.md)\
[C relational and equality operators](../c-language/c-relational-and-equality-operators.md)
