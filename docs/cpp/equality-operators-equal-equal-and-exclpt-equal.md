---
title: "Equality operators: == and !="
description: "The C++ standard language equal-to and not-equal-to operator syntax and use."
ms.date: 8/2/2024
f1_keywords: ["!=", "==", "not_eq_cpp"]
helpviewer_keywords: ["!= operator", "equality operator", "not equal to comparison operator", "equality operator [C++], syntax", "== operator", "not_eq operator", "equal to operator"]
---
# Equality operators: `==` and `!=`

## Syntax

> *expression* **`==`** *expression*\
> *expression* **`!=`** *expression*

## Remarks

The binary equality operators compare their operands for strict equality or inequality. If you are looking for information about overloading these operators instead, see [Operator overloading](../cpp/overloading.md).

The equal-to operator (**`==`**) returns **`true`** if both operands have the same value; otherwise **`false`**.\
The not-equal-to operator (**`!=`**) returns **`true`** if the operands don't have the same value; otherwise **`false`**.\
The alternative spelling `not_eq` returns **`true`** if the operands don't have the same value; otherwise **`false`**.

## `not_eq` keyword for `!=`

C++:
- **`not_eq`** can be used as alternative to **`!=`**. The [`/permissive-`](../build/reference/permissive-standards-conformance.md) or [`/Za`](../build/reference/za-ze-disable-language-extensions.md) compiler option is required to use the alternative spelling.
- There's no alternative spelling for **`==`**.
- Including `<iso646.h>` or `<ciso646>` to use the keyword is deprecated. Use the alternative spelling directly as it is now treated as a keyword.

C:
- **`not_eq`** is an alternative spelling for **`!=`**. It is provided as a macro in `<iso646.h>`, which you must `#include`.
- The alternative spelling isn't treated as a keyword.
- There's no alternative spelling for **`==`**.

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
    
    // The alternative spelling is available in C++ and C
    // This example is for C++, so no header file is needed to use the alternative spelling
    // When compiling for C, #include <iso646.h> to use the alternative spelling because
    // C doesn't treat it as a keyword like C++ does.
    if (x not_eq z)
    {
        std::cout << "Not equal\n";
    }
}
```

```output
Equal
Not equal
Not equal
```

Equality operators can compare pointers to members of the same type. The pointers are equal if they point to the same member or if they are both **`nullptr`**. Otherwise, they are not equal.  For examle

```cpp

```

## See also

[not_eq](/cpp/c-runtime-library/reference/not-eq)\
[Expressions with binary operators](../cpp/expressions-with-binary-operators.md)\
[C++ built-in operators, precedence; and associativity](../cpp/cpp-built-in-operators-precedence-and-associativity.md)\
[C relational and equality operators](../c-language/c-relational-and-equality-operators.md)
