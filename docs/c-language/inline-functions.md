---
description: "Learn more about: Inline Functions"
title: "Inline Functions"
ms.date: 05/17/2022
helpviewer_keywords: ["fast code", "inline functions, __inline keyword", "functions [C++], inline functions"]
ms.assetid: 00f4b2ff-8ad0-4165-9f4c-2ef157d03f31
---
# Inline functions

**Microsoft specific**

The **`__inline`** keyword tells the compiler to substitute the code within the function definition for every instance of a function call.

## Remarks

Inline code substitution occurs only at the compiler's discretion. For example, the compiler won't inline a function if its address is taken or if it's too large to inline. When the compiler doesn't inline a function defined in a header file, it's marked for the linker to avoid one-definition rule (ODR) violations.

For a function to be considered as a candidate for inlining, it must use the new-style function definition with a signature that declares the return type and any parameter types.

Use this form to specify an inline function:

> **`__inline`** *function-definition*

Inline functions generate faster and sometimes smaller code than the equivalent function call:

- Inline functions save the time required to prepare the stack for arguments and a return value, and the time to execute the jump and return of a function call.

- Even when repeated several times, small inline functions of perhaps three lines or less create less code than the equivalent function call because the compiler doesn't generate code to handle arguments and a return value.

- The compiler can optimize functions generated inline in ways that aren't available to normal functions. The compiler doesn't usually perform optimizations between different procedures.

Don't confuse functions that use **`__inline`** with inline assembler code. For more information about inline assembler, see [Inline assembler](../c-language/inline-assembler-c.md).

**END Microsoft specific**

## See also

[`inline`, `__inline`, `__forceinline`](../cpp/inline-functions-cpp.md)
