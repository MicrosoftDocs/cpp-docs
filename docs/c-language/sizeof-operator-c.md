---
description: "Learn more about: sizeof Operator (C)"
title: "sizeof Operator (C)"
ms.date: "11/04/2016"
f1_keywords: ["sizeof"]
helpviewer_keywords: ["sizeof operator"]
ms.assetid: 70826d03-3451-41e4-bebb-a820ae66d53f
---
# sizeof Operator (C)

The **`sizeof`** operator gives the amount of storage, in bytes, required to store an object of the type of the operand. This operator allows you to avoid specifying machine-dependent data sizes in your programs.

## Syntax

```
sizeof unary-expression
sizeof ( type-name )
```

## Remarks

The operand is either an identifier that is a *unary-expression*, or a type-cast expression (that is, a type specifier enclosed in parentheses). The *unary-expression* cannot represent a bit-field object, an incomplete type, or a function designator. The result is an unsigned integral constant. The standard header STDDEF.H defines this type as **size_t**.

When you apply the **`sizeof`** operator to an array identifier, the result is the size of the entire array rather than the size of the pointer represented by the array identifier.

When you apply the **`sizeof`** operator to a structure or union type name, or to an identifier of structure or union type, the result is the number of bytes in the structure or union, including internal and trailing padding. This size may include internal and trailing padding used to align the members of the structure or union on memory boundaries. Thus, the result may not correspond to the size calculated by adding up the storage requirements of the individual members.

If an unsized array is the last element of a structure, the **`sizeof`** operator returns the size of the structure without the array.

```
buffer = calloc(100, sizeof (int) );
```

This example uses the **`sizeof`** operator to pass the size of an **`int`**, which varies among machines, as an argument to a run-time function named `calloc`. The value returned by the function is stored in `buffer`.

```
static char *strings[] = {
      "this is string one",
      "this is string two",
      "this is string three",
   };
const int string_no = ( sizeof strings ) / ( sizeof strings[0] );
```

In this example, `strings` is an array of pointers to **`char`**. The number of pointers is the number of elements in the array, but is not specified. It is easy to determine the number of pointers by using the **`sizeof`** operator to calculate the number of elements in the array. The **`const`** integer value `string_no` is initialized to this number. Because it is a **`const`** value, `string_no` cannot be modified.

## See also

[C Operators](c-operators.md)<br/>
[C++ Built-in Operators, Precedence and Associativity](../cpp/cpp-built-in-operators-precedence-and-associativity.md)
