---
description: "Learn more about: Robustness"
title: "Robustness"
ms.date: "11/04/2016"
helpviewer_keywords: ["robustness [CRT]"]
ms.assetid: 7f1a87f8-eff9-4b76-ae9b-d133d3de6adf
---
# Robustness

Use the following C run-time library functions to improve the robustness of your program.

## Run-time robustness functions

| Function | Use |
|---|---|
| [`_set_new_handler`](./reference/set-new-handler.md) | Transfers control to your error-handling mechanism if the **`new`** operator fails to allocate memory. |
| [`_set_se_translator`](./reference/set-se-translator.md) | Handles Win32 exceptions (C structured exceptions) as C++ typed exceptions. |
| [`set_terminate`](./reference/set-terminate-crt.md) | Installs your own termination function to be called by [`terminate`](./reference/terminate-crt.md). |
| [`set_unexpected`](./reference/set-unexpected-crt.md) | Installs your own termination function to be called by [`unexpected`](./reference/unexpected-crt.md). |

## See also

[Universal C runtime routines by category](./run-time-routines-by-category.md)\
[`SetUnhandledExceptionFilter`](/windows/win32/api/errhandlingapi/nf-errhandlingapi-setunhandledexceptionfilter)
