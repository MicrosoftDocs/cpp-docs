---
description: "Learn more about: sizeof Operator"
title: "sizeof Operator"
ms.date: "11/04/2016"
f1_keywords: ["sizeof_cpp"]
helpviewer_keywords: ["sizeof operator"]
ms.assetid: 8bc3b6fb-54a1-4eb7-ada0-05f8c5efc532
---
# sizeof Operator

Yields the size of its operand with respect to the size of type **`char`**.

> [!NOTE]
> For information about the `sizeof ...` operator, see [Ellipsis and variadic templates](../cpp/ellipses-and-variadic-templates.md).

## Syntax

```
sizeof unary-expression
sizeof  ( type-name )
```

## Remarks

The result of the **`sizeof`** operator is of type `size_t`, an integral type defined in the include file \<stddef.h>. This operator allows you to avoid specifying machine-dependent data sizes in your programs.

The operand to **`sizeof`** can be one of the following:

- A type name. To use **`sizeof`** with a type name, the name must be enclosed in parentheses.

- An expression. When used with an expression, **`sizeof`** can be specified with or without the parentheses. The expression is not evaluated.

When the **`sizeof`** operator is applied to an object of type **`char`**, it yields 1. When the **`sizeof`** operator is applied to an array, it yields the total number of bytes in that array, not the size of the pointer represented by the array identifier. To obtain the size of the pointer represented by the array identifier, pass it as a parameter to a function that uses **`sizeof`**. For example:

## Example

```cpp
#include <iostream>
using namespace std;

size_t getPtrSize( char *ptr )
{
   return sizeof( ptr );
}

int main()
{
   char szHello[] = "Hello, world!";

   cout  << "The size of a char is: "
         << sizeof( char )
         << "\nThe length of " << szHello << " is: "
         << sizeof szHello
         << "\nThe size of the pointer is "
         << getPtrSize( szHello ) << endl;
}
```

## Sample Output

```Output
The size of a char is: 1
The length of Hello, world! is: 14
The size of the pointer is 4
```

When the **`sizeof`** operator is applied to a **`class`**, **`struct`**, or **`union`** type, the result is the number of bytes in an object of that type, plus any padding added to align members on word boundaries. The result does not necessarily correspond to the size calculated by adding the storage requirements of the individual members. The [/Zp](../build/reference/zp-struct-member-alignment.md) compiler option and the [pack](../preprocessor/pack.md) pragma affect alignment boundaries for members.

The **`sizeof`** operator never yields 0, even for an empty class.

The **`sizeof`** operator cannot be used with the following operands:

- Functions. (However, **`sizeof`** can be applied to pointers to functions.)

- Bit fields.

- Undefined classes.

- The type **`void`**.

- Dynamically allocated arrays.

- External arrays.

- Incomplete types.

- Parenthesized names of incomplete types.

When the **`sizeof`** operator is applied to a reference, the result is the same as if **`sizeof`** had been applied to the object itself.

If an unsized array is the last element of a structure, the **`sizeof`** operator returns the size of the structure without the array.

The **`sizeof`** operator is often used to calculate the number of elements in an array using an expression of the form:

```cpp
sizeof array / sizeof array[0]
```

## See also

[Expressions with Unary Operators](../cpp/expressions-with-unary-operators.md)<br/>
[Keywords](../cpp/keywords-cpp.md)
