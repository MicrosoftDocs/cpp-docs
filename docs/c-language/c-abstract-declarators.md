---
description: "Learn more about: C Abstract Declarators"
title: "C Abstract Declarators"
ms.date: "11/04/2016"
helpviewer_keywords: ["declarators, abstract", "abstract declarations"]
ms.assetid: 6a556ad7-0555-421a-aa02-294d77cda8b5
---
# C Abstract Declarators

An abstract declarator is a declarator without an identifier, consisting of one or more pointer, array, or function modifiers. The pointer modifier (<strong>\*</strong>) always precedes the identifier in a declarator; array (**[ ]**) and function ( **( )** ) modifiers follow the identifier. Knowing this, you can determine where the identifier would appear in an abstract declarator and interpret the declarator accordingly. See [Interpreting More Complex Declarators](../c-language/interpreting-more-complex-declarators.md) for additional information and examples of complex declarators. Generally **`typedef`** can be used to simplify declarators. See [Typedef Declarations](../c-language/typedef-declarations.md).

Abstract declarators can be complex. Parentheses in a complex abstract declarator specify a particular interpretation, just as they do for the complex declarators in declarations.

These examples illustrate abstract declarators:

```
int *         // The type name for a pointer to type int:

int *[3]      // An array of three pointers to int

int (*) [5]   // A pointer to an array of five int

int *()       // A function with no parameter specification
              // returning a pointer to int

// A pointer to a function taking no arguments and
// returning an int

int (*) ( void )

// An array of an unspecified number of constant pointers to
// functions each with one parameter that has type unsigned int
// and an unspecified number of other parameters returning an int

int (*const []) ( unsigned int, ... )
```

> [!NOTE]
> The abstract declarator consisting of a set of empty parentheses, **( )**, is not allowed because it is ambiguous. It is impossible to determine whether the implied identifier belongs inside the parentheses (in which case it is an unmodified type) or before the parentheses (in which case it is a function type).

## See also

[Declarators and Variable Declarations](../c-language/declarators-and-variable-declarations.md)
