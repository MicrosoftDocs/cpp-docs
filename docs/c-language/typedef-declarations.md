---
description: "Learn more about: Typedef Declarations"
title: "Typedef Declarations"
ms.date: "11/04/2016"
helpviewer_keywords: ["declarations, typedef", "typedef declarations", "types [C], declarations"]
ms.assetid: e92a3b82-9269-4bc6-834a-6f431ccac83e
---
# Typedef Declarations

A typedef declaration is a declaration with typedef as the storage class. The declarator becomes a new type. You can use typedef declarations to construct shorter or more meaningful names for types already defined by C or for types that you've declared. Typedef names allow you to encapsulate implementation details that may change.

A typedef declaration is interpreted in the same way as a variable or function declaration, but the identifier, instead of assuming the type specified by the declaration, becomes a synonym for the type.

## Syntax

*`declaration`*:\
&emsp;*`declaration-specifiers`* *`init-declarator-list`*<sub>opt</sub> **`;`**

*`declaration-specifiers`*:\
&emsp;*`storage-class-specifier`* *`declaration-specifiers`*<sub>opt</sub>\
&emsp;*`type-specifier`* *`declaration-specifiers`*<sub>opt</sub>\
&emsp;*`type-qualifier`* *`declaration-specifiers`*<sub>opt</sub>

*`storage-class-specifier`*:\
&emsp;**`typedef`**

*`type-specifier`*:\
&emsp;**`void`**\
&emsp;**`char`**\
&emsp;**`short`**\
&emsp;**`int`**\
&emsp;**`long`**\
&emsp;**`float`**\
&emsp;**`double`**\
&emsp;**`signed`**\
&emsp;**`unsigned`**\
&emsp;*`struct-or-union-specifier`*\
&emsp;*`enum-specifier`*\
&emsp;*`typedef-name`*

*`typedef-name`*:\
&emsp;*`identifier`*

A typedef declaration doesn't create new types. It creates synonyms for existing types, or names for types that could be specified in other ways. When a typedef name is used as a type specifier, it can be combined with certain type specifiers, but not others. Acceptable modifiers include **`const`** and **`volatile`**.

Typedef names share the name space with ordinary identifiers. (For more information, see [Name Spaces](../c-language/name-spaces.md).) Therefore, a program can have a typedef name and a local-scope identifier by the same name. For example:

```C
typedef char FlagType;

int main()
{
}

int myproc( int )
{
    int FlagType;
}
```

When you declare a local-scope identifier by the same name as a typedef, or when you declare a member of a structure or union in the same scope or in an inner scope, you must also specify the type specifier. This example illustrates this constraint:

```C
typedef char FlagType;
const FlagType x;
```

To reuse the `FlagType` name for an identifier, a structure member, or a union member, the type must be provided:

```C
const int FlagType;  /* Type specifier required */
```

It isn't sufficient to say

```C
const FlagType;      /* Incomplete specification */
```

because the `FlagType` is taken to be part of the type, not an identifier that is being redeclared. This declaration is taken to be an illegal declaration like

```C
int;  /* Illegal declaration */
```

You can declare any type with **`typedef`**, including pointer, function, and array types. You can declare a typedef name for a pointer to a structure or union type before you define the structure or union type, as long as the definition has the same visibility as the declaration.

Typedef names can be used to improve code readability. All three of the following declarations of `signal` specify exactly the same type, the first without making use of any typedef names.

```C
typedef void fv( int ), (*pfv)( int );  /* typedef declarations */

void ( *signal( int, void (*) (int)) ) ( int );
fv *signal( int, fv * );   /* Uses typedef type */
pfv signal( int, pfv );    /* Uses typedef type */
```

## Examples

The following examples illustrate typedef declarations:

```C
typedef int WHOLE; /* Declares WHOLE to be a synonym for int */
```

For example, `WHOLE` could now be used in a variable declaration such as `WHOLE i;` or `const WHOLE i;`. However, the declaration `long WHOLE i;` would be illegal.

```C
typedef struct club
{
    char name[30];
    int size, year;
} GROUP;
```

This statement declares `GROUP` as a structure type with three members. Since a structure tag, `club`, is also specified, either the typedef name (`GROUP`) or the structure tag can be used in declarations. You must use the **`struct`** keyword with the tag, and you can't use the **`struct`** keyword with the typedef name.

```C
typedef GROUP *PG; /* Uses the previous typedef name
                      to declare a pointer            */
```

The type `PG` is declared as a pointer to the `GROUP` type, which in turn is defined as a structure type.

```C
typedef void DRAWF( int, int );
```

This example provides the type `DRAWF` for a function returning no value and taking two int arguments. It means, for example, that the declaration

```C
DRAWF box;
```

is equivalent to the declaration

```C
void box( int, int );
```

## See also

[Declarations and Types](../c-language/declarations-and-types.md)
