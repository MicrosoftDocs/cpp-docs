---
description: "Learn more about: strict_gs_check pragma"
title: "strict_gs_check pragma"
ms.date: "08/29/2019"
f1_keywords: ["strict_gs_check", "strict_gs_check_CPP"]
helpviewer_keywords: ["strict_gs_check pragma"]
ms.assetid: decfec81-c916-42e0-a07f-8cc26df6a7ce
---
# strict_gs_check pragma

This pragma provides enhanced security checking.

## Syntax

> **#pragma strict_gs_check(** [ **push,** ] { **on** | **off** } **)**\
> **#pragma strict_gs_check( pop )**

## Remarks

Instructs the compiler to insert a random cookie in the function stack to help detect some categories of stack-based buffer overrun. By default, the `/GS` (Buffer Security Check) compiler option doesn't insert a cookie for all functions. For more information, see [/GS (Buffer Security Check)](../build/reference/gs-buffer-security-check.md).

Compile by using `/GS` to enable **strict_gs_check**.

Use this pragma in code modules that are exposed to potentially harmful data. **strict_gs_check** is an aggressive pragma, and is applied to functions that might not need this defense, but is optimized to minimize its effect on the performance of the resulting application.

Even if you use this pragma, you should strive to write secure code. That is, make sure that your code has no buffer overruns. **strict_gs_check** might protect your application from buffer overruns that do remain in your code.

## Example

In this sample, a buffer overrun occurs when we copy an array to a local array. When you compile this code with `/GS`, no cookie is inserted in the stack, because the array data type is a pointer. Adding the **strict_gs_check** pragma forces the stack cookie into the function stack.

```cpp
// pragma_strict_gs_check.cpp
// compile with: /c

#pragma strict_gs_check(on)

void ** ReverseArray(void **pData,
                     size_t cData)
{
    // *** This buffer is subject to being overrun!! ***
    void *pReversed[20];

    // Reverse the array into a temporary buffer
    for (size_t j = 0, i = cData; i ; --i, ++j)
        // *** Possible buffer overrun!! ***
            pReversed[j] = pData[i];

    // Copy temporary buffer back into input/output buffer
    for (size_t i = 0; i < cData ; ++i)
        pData[i] = pReversed[i];

    return pData;
}
```

## See also

[Pragma directives and the __pragma keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)\
[/GS (Buffer security check)](../build/reference/gs-buffer-security-check.md)
