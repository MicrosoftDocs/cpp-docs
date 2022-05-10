---
description: "Learn more about: Indirection and address-of operators"
title: "Indirection and address-of operators"
ms.date: 05/09/2022
helpviewer_keywords: ["address-of operator (&)", "* operator", "operators [C++], address-of", "ampersand operator (&)", "* operator, indirection operator", "addresses [C++], indirection", "addresses [C++]", "indirection operator", "& operator, address-of operator", "null pointers [C++]", "* operator, address-of operator", "operators [C++], indirection"]
ms.assetid: 10d62b00-12ba-4ea9-a2d5-09ac29ca2232
---
# Indirection and address-of operators

The unary indirection operator (**`*`**) accesses a value indirectly, through a pointer. The operand must be a pointer type. The result of the operation is the value addressed by the operand; that is, the value at the address to which its operand points. The type of the result is the type that the operand addresses.

The result of the indirection operator is *type* if the operand is of type *pointer to type*. If the operand points to a function, the result is a function designator. If it points to an object, the result is an lvalue that designates the object.

If the pointer value isn't valid, the result of the indirection operator is undefined. Here are some of the most common conditions that invalidate a pointer value:

- The pointer is a null pointer.

- The pointer specifies the address of an object after the end of its lifetime at the time of the reference. (For example, an object that's gone out of scope or that's been deallocated.)

- The pointer specifies an address that's inappropriately aligned for the type of the object pointed to.

- The pointer specifies an address not used by the executing program.

The unary address-of operator (**`&`**) gives the address of its operand. The operand must be one of these things:

- An lvalue that designates an object that isn't declared **`register`** and isn't a bit-field.

- The result of a unary dereference (**`*`**) or array dereference (**`[]`**) operator.

- A function designator.

The result is of type *pointer to operand_type* for an operand of type *operand_type*.

If the operand is the result of a unary **`*`** operator, neither operator is evaluated and the result is as if both were omitted. The result isn't an lvalue, and the constraints on the operators still apply. If the operand is the result of a **`[]`** operator, the **`&`** operator and the unary **`*`** implied by the **`[]`** operator aren't evaluated. The result has the same effect as removing the **`&`** operator and changing the **`[]`** operator to a **`+`** operator. Otherwise, the result is a pointer to the object or function designated by the operand.

## Examples

The following examples use these common declarations:

```C
int *pa, x;
int a[20];
```

This statement uses the address-of operator (**`&`**) to take the address of the sixth element of the array `a`. The result is stored in the pointer variable `pa`:

```C
pa = &a[5];
```

The indirection operator (**`*`**) is used in this example to access the **`int`** value at the address stored in `pa`. The value is assigned to the integer variable `x`:

```C
x = *pa;
```

This example demonstrates that the result of applying the indirection operator to the address of `x` is the same as `x`:

```C
assert( x == *&x );
```

This example shows equivalent ways of declaring a pointer to a function:

```C
int roundup( void );     /* Function declaration */

int  *proundup  = roundup;
int  *pround  = &roundup;
assert( pround == proundup );
```

Once the function `roundup` is declared, two pointers to `roundup` are declared and initialized. The first pointer, `proundup`, is initialized using only the name of the function, while the second, `pround`, uses the address-of operator in the initialization. The initializations are equivalent.

## See also

[Indirection operator: `*`](../cpp/indirection-operator-star.md)\
[Address-of operator: `&`](../cpp/address-of-operator-amp.md)
