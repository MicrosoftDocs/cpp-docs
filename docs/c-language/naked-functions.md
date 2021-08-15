---
description: "Learn more about: Naked Functions"
title: "Naked Functions"
ms.date: "11/04/2016"
helpviewer_keywords: ["naked functions", "functions [C++], naked", "prolog code", "epilog code"]
ms.assetid: 2543c8af-00d4-4a2a-8a87-e746da1f9929
---
# Naked Functions

**Microsoft Specific**

The `naked` storage-class attribute is a Microsoft-specific extension to the C language. For functions declared with the `naked` storage-class attribute, the compiler generates code without prolog and epilog code. You can use this feature to write your own prolog/epilog code sequences using inline assembler code. Naked functions are particularly useful in writing virtual device drivers.

Because the `naked` attribute is only relevant to the definition of a function and is not a type modifier, naked functions use the extended attribute syntax, described in [Extended Storage-Class Attributes](../c-language/c-extended-storage-class-attributes.md).

The following example defines a function with the `naked` attribute:

```
__declspec( naked ) int func( formal_parameters )
{
   /* Function body */
}
```

Or, alternatively:

```
#define Naked   __declspec( naked )

Naked int func( formal_parameters )
{
   /* Function body */
}
```

The `naked` attribute affects only the nature of the compiler's code generation for the function's prolog and epilog sequences. It does not affect the code that is generated for calling such functions. Thus, the `naked` attribute is not considered part of the function's type, and function pointers cannot have the `naked` attribute. Furthermore, the `naked` attribute cannot be applied to a data definition. For example, the following code generates errors:

```
__declspec( naked ) int i;  /* Error--naked attribute not */
                            /* permitted on data declarations. */
```

The `naked` attribute is relevant only to the definition of the function and cannot be specified in the function's prototype. The following declaration generates a compiler error:

```
__declspec( naked ) int func();   /* Error--naked attribute not */
                     /* permitted on function declarations.    */   \
```

**END Microsoft Specific**

## See also

[C Function Definitions](../c-language/c-function-definitions.md)
