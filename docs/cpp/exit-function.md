---
title: "exit Function"
ms.date: "11/04/2016"
f1_keywords: ["Exit"]
helpviewer_keywords: ["exit function"]
ms.assetid: 26ce439f-81e2-431c-9ff8-a09a96f32127
---
# exit Function

The **exit** function, declared in the standard include file \<stdlib.h>, terminates a C++ program.

The value supplied as an argument to **exit** is returned to the operating system as the program's return code or exit code. By convention, a return code of zero means that the program completed successfully.

> [!NOTE]
>  You can use the constants EXIT_FAILURE and EXIT_SUCCESS, defined in \<stdlib.h>, to indicate success or failure of your program.

Issuing a **return** statement from the `main` function is equivalent to calling the **exit** function with the return value as its argument.

For more information, see [exit](../c-runtime-library/reference/exit-exit-exit.md) in the *Run-Time Library Reference*.

## See also

[Program Termination](../cpp/program-termination.md)