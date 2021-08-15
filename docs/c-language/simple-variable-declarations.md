---
description: "Learn more about: Simple Variable Declarations"
title: "Simple Variable Declarations"
ms.date: "11/04/2016"
helpviewer_keywords: ["untyped variables", "declaring variables, simple"]
ms.assetid: b07adf9d-9e79-4b64-8a34-e6fe1c7eccec
---
# Simple Variable Declarations

The declaration of a simple variable, the simplest form of a direct declarator, specifies the variable's name and type. It also specifies the variable's storage class and data type.

Storage classes or types (or both) are required on variable declarations. Untyped variables (such as `var;`) generate warnings.

## Syntax

*declarator*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*pointer*<sub>opt</sub> *direct-declarator*

*direct-declarator*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*identifier*

*identifier*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*nondigit*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*identifier* *nondigit*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*identifier* *digit*

For arithmetic, structure, union, enumerations, and void types, and for types represented by **`typedef`** names, simple declarators can be used in a declaration since the type specifier supplies all the typing information. Pointer, array, and function types require more complicated declarators.

You can use a list of identifiers separated by commas (**,**) to specify several variables in the same declaration. All variables defined in the declaration have the same base type. For example:

```C
int x, y;        /* Declares two simple variables of type int */
int const z = 1; /* Declares a constant value of type int */
```

The variables `x` and `y` can hold any value in the set defined by the **`int`** type for a particular implementation. The simple object `z` is initialized to the value 1 and is not modifiable.

If the declaration of `z` was for an uninitialized static variable or was at file scope, it would receive an initial value of 0, and that value would be unmodifiable.

```C
unsigned long reply, flag; /* Declares two variables
                              named reply and flag     */
```

In this example, both the variables, `reply` and `flag`, have **`unsigned long`** type and hold unsigned integral values.

## See also

[Declarators and Variable Declarations](../c-language/declarators-and-variable-declarations.md)
