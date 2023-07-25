---
description: "Learn more about: C Type Specifiers"
title: "C Type Specifiers"
ms.date: "01/29/2018"
helpviewer_keywords: ["type specifiers, C", "specifiers, type"]
ms.assetid: fbe13441-04c3-4829-b047-06d374adc2b6
---
# C Type Specifiers

Type specifiers in declarations define the type of a variable or function declaration.

## Syntax

*`type-specifier`*:
&emsp;**`void`**
&emsp;**`char`**
&emsp;**`short`**
&emsp;**`int`**
&emsp;**`long`**
&emsp;**`float`**
&emsp;**`double`**
&emsp;**`signed`**
&emsp;**`unsigned`**
&emsp;*`struct-or-union-specifier`*
&emsp;*`enum-specifier`*
&emsp;*`typedef-name`*

The **`signed char`**, **`signed int`**, **`signed short int`**, and **signed long int** types, together with their **`unsigned`** counterparts and **`enum`**, are called *integral* types. The **`float`**, **`double`**, and **`long double`** type specifiers are referred to as *floating* or *floating-point* types. You can use any integral or floating-point type specifier in a variable or function declaration. Originally, if a *`type-specifier`* wasn't provided in a declaration, it was taken to be **`int`**. The Microsoft compiler no longer accepts default **`int`** declarations.

The optional keywords **`signed`** and **`unsigned`** can precede or follow any of the integral types, except **`enum`**, and can also be used alone as type specifiers, in which case they're understood as **`signed int`** and **`unsigned int`**, respectively. When used alone, the keyword **`int`** is assumed to be **`signed`**. When used alone, the keywords **`long`** and **`short`** are understood as **long int** and **`short int`**.

Enumeration types are considered basic types. Type specifiers for enumeration types are discussed in [Enumeration Declarations](../c-language/c-enumeration-declarations.md).

The keyword **`void`** has three uses: to specify a function return type, to specify an argument-type list for a function that takes no arguments, and to specify a pointer to an unspecified type. You can use the **`void`** type to declare functions that return no value or to declare a pointer to an unspecified type. See [Arguments](../c-language/arguments.md) for information on **`void`** when it appears alone within the parentheses following a function name.

**Microsoft Specific**

Type checking is now ANSI-conforming, which means that type **`short`** and type **`int`** are distinct types. For example, this sample shows a redefinition in the Microsoft C compiler that was accepted by previous versions of the compiler.

```C
int   myfunc();
short myfunc();
```

This next example also generates a warning about indirection to different types:

```C
int *pi;
short *ps;

ps = pi;  /* Now generates warning */
```

The Microsoft C compiler also generates warnings for differences in sign. For example:

```C
signed int *pi;
unsigned int *pu;

pi = pu;  /* Now generates warning */
```

Type **`void`** expressions are evaluated for side effects. You can't use the (nonexistent) value of an expression that has type **`void`** in any way, nor can you convert a **`void`** expression (by implicit or explicit conversion) to any type except **`void`**. If you do use an expression of any other type in a context where a **`void`** expression is required, its value is discarded.

To conform to the ANSI specification, `void**` can't be used as `int**`. Only `void*` can be used as a pointer to an unspecified type.

**END Microsoft Specific**

You can create more type specifiers with **`typedef`** declarations, as described in [Typedef Declarations](../c-language/typedef-declarations.md). See [Storage of Basic Types](../c-language/storage-of-basic-types.md) for information on the size of each type.

## See also

[Declarations and Types](../c-language/declarations-and-types.md)
