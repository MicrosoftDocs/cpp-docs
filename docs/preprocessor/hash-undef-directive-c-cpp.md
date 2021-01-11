---
description: "Learn more about: #undef directive (C/C++)"
title: "#undef directive (C/C++)"
ms.date: "08/29/2019"
f1_keywords: ["#undef"]
helpviewer_keywords: ["#undef directive", "undef directive (#undef)", "preprocessor, directives"]
ms.assetid: 88900e0e-2c19-4a63-b681-f3d3133c24ca
---
# #undef directive (C/C++)

Removes (undefines) a name previously created with `#define`.

## Syntax

> **#undef** *identifier*

## Remarks

The **#undef** directive removes the current definition of *identifier*. Consequently, subsequent occurrences of *identifier* are ignored by the preprocessor. To remove a macro definition using **#undef**, give only the macro *identifier*, not a parameter list.

You can also apply the **#undef** directive to an identifier that has no previous definition. This ensures that the identifier is undefined. Macro replacement isn't performed within **#undef** statements.

The **#undef** directive is typically paired with a `#define` directive to create a region in a source program in which an identifier has a special meaning. For example, a specific function of the source program can use manifest constants to define environment-specific values that do not affect the rest of the program. The **#undef** directive also works with the `#if` directive to control conditional compilation of the source program. For more information, see [The #if, #elif, #else, and #endif directives](../preprocessor/hash-if-hash-elif-hash-else-and-hash-endif-directives-c-cpp.md).

In the following example, the **#undef** directive removes definitions of a symbolic constant and a macro. Note that only the identifier of the macro is given.

```C
#define WIDTH 80
#define ADD( X, Y ) ((X) + (Y))
.
.
.
#undef WIDTH
#undef ADD
```

**Microsoft Specific**

Macros can be undefined from the command line using the `/U` option, followed by the macro names to be undefined. The effect of issuing this command is equivalent to a sequence of `#undef` *macro-name* statements at the beginning of the file.

**END Microsoft Specific**

## See also

[Preprocessor directives](../preprocessor/preprocessor-directives.md)
