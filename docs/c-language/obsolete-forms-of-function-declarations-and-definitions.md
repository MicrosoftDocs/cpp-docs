---
description: "Learn more about: Obsolete Forms of Function Declarations and Definitions"
title: "Obsolete Forms of Function Declarations and Definitions"
ms.date: "11/04/2016"
helpviewer_keywords: ["old style function declarations"]
ms.assetid: 67c5038f-0529-4f29-9d0f-c27580977b50
---
# Obsolete Forms of Function Declarations and Definitions

The old-style function declarations and definitions use slightly different rules for declaring parameters than the syntax recommended by the ANSI C standard. First, the old-style declarations don't have a parameter list. Second, in the function definition, the parameters are listed, but their types are not declared in the parameter list. The type declarations precede the compound statement constituting the function body. The old-style syntax is obsolete and should not be used in new code. Code using the old-style syntax is still supported, however. This example illustrates the obsolete forms of declarations and definitions:

```
double old_style();           /* Obsolete function declaration */

double alt_style( a , real )  /* Obsolete function definition */
    double *real;
    int a;
{
    return ( *real + a ) ;
}
```

Functions returning an integer or pointer with the same size as an **`int`** are not required to have a declaration although the declaration is recommended.

To comply with the ANSI C standard, old-style function declarations using an ellipsis now generate an error when compiling with the /Za option and a level 4 warning when compiling with /Ze. For example:

```cpp
void funct1( a, ... )  /* Generates a warning under /Ze or */
int a;                 /* an error when compiling with /Za */
{
}
```

You should rewrite this declaration as a prototype:

```cpp
void funct1( int a, ... )
{
}
```

Old-style function declarations also generate warnings if you subsequently declare or define the same function with either an ellipsis or a parameter with a type that is not the same as its promoted type.

The next section, [C Function Definitions](../c-language/c-function-definitions.md), shows the syntax for function definitions, including the old-style syntax. The nonterminal for the list of parameters in the old-style syntax is *identifier-list*.

## See also

[Overview of Functions](../c-language/overview-of-functions.md)
