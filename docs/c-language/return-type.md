---
description: "Learn more about: Return Type"
title: "Return Type"
ms.date: "11/04/2016"
helpviewer_keywords: ["function return types", "return values [C++], function procedures", "function return types, syntax", "return values [C++]", "data types [C++], function return types", "return keyword [C++], function return types", "functions [C++], return types"]
ms.assetid: 3e5b8a97-b341-48c5-8be8-8986980ef586
---
# Return Type

The return type of a function establishes the size and type of the value returned by the function. It corresponds to the *`type-specifier`* in the Syntax section:

## Syntax

*`function-definition`*:\
&emsp;*`declaration-specifiers`*<sub>opt</sub> *`attribute-seq`*<sub>opt</sub> *`declarator`* *`declaration-list`*<sub>opt</sub> *`compound-statement`*

/\* *`attribute-seq`* is Microsoft-specific \*/

*`declaration-specifiers`*:\
&emsp;*`storage-class-specifier`* *`declaration-specifiers`*<sub>opt</sub>\
&emsp;*`type-specifier`* *`declaration-specifiers`*<sub>opt</sub>\
&emsp;*`type-qualifier`* *`declaration-specifiers`*<sub>opt</sub>

*`type-specifier`*:\
&emsp;**`void`**\
&emsp;**`char`**\
&emsp;**`short`**\
&emsp;**`int`**\
&emsp;**`__int8`** /\* Microsoft-specific \*/\
&emsp;**`__int16`** /\* Microsoft-specific \*/\
&emsp;**`__int32`** /\* Microsoft-specific \*/\
&emsp;**`__int64`** /\* Microsoft-specific \*/\
&emsp;**`long`**\
&emsp;**`long long`**\
&emsp;**`float`**\
&emsp;**`double`**\
&emsp;**`long double`**\
&emsp;**`signed`**\
&emsp;**`unsigned`**\
&emsp;*`struct-or-union-specifier`*\
&emsp;*`enum-specifier`*\
&emsp;*`typedef-name`*

The *`type-specifier`* can specify any fundamental, structure, or union type.

The return type given in the function definition must match the return type in declarations of the function elsewhere in the program. A function returns a value when a **`return`** statement containing an expression is executed. The expression is evaluated, converted to the return value type if necessary, and returned to the point at which the function was called. If a function is declared with return type **`void`**, a return statement containing an expression generates a warning, and the expression isn't evaluated.

The following examples illustrate function return values.

```C
typedef struct
{
    char name[20];
    int id;
    long class;
} STUDENT;

/* Return type is STUDENT: */

STUDENT sortstu( STUDENT a, STUDENT b )
{
    return ( (a.id < b.id) ? a : b );
}
```

This example defines the `STUDENT` type with a **`typedef`** declaration and defines the function `sortstu` to have `STUDENT` return type. The function selects and returns one of its two structure arguments. In subsequent calls to the function, the compiler checks to make sure the argument types are `STUDENT`.

> [!NOTE]
> Efficiency would be enhanced by passing pointers to the structure, rather than the entire structure.

```C
char *smallstr( char s1[], char s2[] )
{
    int i;

    i = 0;
    while ( s1[i] != '\0' && s2[i] != '\0' )
        i++;
    if ( s1[i] == '\0' )
        return ( s1 );
    else
        return ( s2 );
}
```

This example defines a function returning a pointer to an array of characters. The function takes two character arrays (strings) as arguments and returns a pointer to the shorter of the two strings. A pointer to an array points to the first of the array elements and has its type; thus, the return type of the function is a pointer to type **`char`**.

You need not declare functions with **`int`** return type before you call them, although prototypes are recommended so that correct type checking for arguments and return values is enabled.

## See also

[C Function Definitions](../c-language/c-function-definitions.md)
