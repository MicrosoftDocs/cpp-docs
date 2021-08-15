---
description: "Learn more about: Indirection and Address-of Operators"
title: "Indirection and Address-of Operators"
ms.date: "02/16/2018"
helpviewer_keywords: ["address-of operator (&)", "* operator", "operators [C++], address-of", "ampersand operator (&)", "* operator, indirection operator", "addresses [C++], indirection", "addresses [C++]", "indirection operator", "& operator, address-of operator", "null pointers [C++]", "* operator, address-of operator", "operators [C++], indirection"]
ms.assetid: 10d62b00-12ba-4ea9-a2d5-09ac29ca2232
---
# Indirection and Address-of Operators

The unary indirection operator (__&#42;__) accesses a value indirectly, through a pointer. The operand must be a pointer type. The result of the operation is the value addressed by the operand; that is, the value at the address to which its operand points. The type of the result is the type that the operand addresses.

The result of the indirection operator is *type* if the operand is of type *pointer to type*. If the operand points to a function, the result is a function designator. If it points to an object, the result is an lvalue that designates the object.

If the pointer value is not valid, the result of the indirection operator is undefined. These are some of the most common conditions that invalidate a pointer value:

- The pointer is a null pointer.

- The pointer specifies the address of an object after the end of its lifetime (such as an object that's gone out of scope or that's been deallocated) at the time of the reference.

- The pointer specifies an address that is inappropriately aligned for the type of the object pointed to.

- The pointer specifies an address not used by the executing program.

The unary address-of operator (**&**) gives the address of its operand. The operand must be either an lvalue that designates an object that is not declared __register__ and is not a bit-field, or the result of a unary __&#42;__ operator or an array dereference (__&#91;&#93;__) operator, or a function designator. The result is of type *pointer to type* for an operand of type *type*.

If the operand is the result of a unary __&#42;__ operator, neither operator is evaluated and the result is as if both were omitted. The result is not an lvalue, and the constraints on the operators still apply. If the operand is the result of a __&#91;&#93;__ operator, neither the __&__ operator nor the unary __&#42;__ implied by the __&#91;&#93;__ operator is evaluated. The result has the same effect as removing the __&__ operator and changing the __&#91;&#93;__ operator to a __+__ operator. Otherwise, the result is a pointer to the object or function designated by the operand.

## Examples

The following examples use these common declarations:

```C
int *pa, x;
int a[20];
double d;
```

This statement uses the address-of operator (**&**) to take the address of the sixth element of the array `a`. The result is stored in the pointer variable `pa`:

```C
pa = &a[5];
```

The indirection operator (__&#42;__) is used in this example to access the **`int`** value at the address stored in `pa`. The value is assigned to the integer variable `x`:

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

[Indirection Operator: &#42;](../cpp/indirection-operator-star.md)<br/>
[Address-of Operator: &](../cpp/address-of-operator-amp.md)
