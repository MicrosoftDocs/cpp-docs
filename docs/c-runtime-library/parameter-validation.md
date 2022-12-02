---
title: "Parameter Validation"
description: "A description of parameter validation in the Microsoft C runtime library."
ms.date: "11/04/2016"
ms.topic: "conceptual"
helpviewer_keywords: ["parameters, validation"]
ms.assetid: 019dd5f0-dc61-4d2e-b4e9-b66409ddf1f2
---
# Parameter validation

Most of the security-enhanced CRT functions, and many that aren't, validate their parameters for things like checking pointers for `NULL`,  that integers fall into a valid range, or that enumeration values are valid. If an invalid parameter is found, the invalid parameter handler is called.

## Invalid parameter handler routine

When a C Runtime Library function detects an invalid parameter, it captures some information about the error, and then calls a macro that wraps an invalid parameter handler dispatch function. Which will be one of [`_invalid_parameter`](./reference/invalid-parameter-functions.md), [`_invalid_parameter_noinfo`](./reference/invalid-parameter-functions.md), or [`_invalid_parameter_noinfo_noreturn`](./reference/invalid-parameter-functions.md). Which dispatch function is called depends on whether your code is, respectively, a debug build, a retail build, or the error isn't considered recoverable.

In debug builds, the invalid parameter macro usually raises a failed assertion and a debugger breakpoint before the dispatch function is called. When the code runs, the assertion may be reported to the user in a dialog box that has "Abort", "Retry", and "Continue" or similar choices that depend on the operating system and CRT version. These options allow the user to immediately terminate the program, to attach a debugger, or to let the existing code continue to run which calls the dispatch function.

The invalid parameter handler dispatch function calls the currently assigned invalid parameter handler. By default, the invalid parameter calls `_invoke_watson`, which causes the application to close and generate a mini-dump. If enabled by the operating system, a dialog box asks the user if they want to send the crash dump to Microsoft for analysis.

You can change this behavior by using the functions [`_set_invalid_parameter_handler`](./reference/set-invalid-parameter-handler-set-thread-local-invalid-parameter-handler.md) or [`_set_thread_local_invalid_parameter_handler`](./reference/set-invalid-parameter-handler-set-thread-local-invalid-parameter-handler.md) to set the invalid parameter handler to your own function. If the function you specify doesn't terminate the application, control is returned to the function that received the invalid parameters. In the CRT, these functions will normally stop function execution, set `errno` to an error code, and return an error code. In many cases, the `errno` value and the return value are both `EINVAL`, to indicate an invalid parameter. In some cases, a more specific error code is returned, such as `EBADF` for a bad file pointer passed in as a parameter.

For more information on `errno`, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](./errno-doserrno-sys-errlist-and-sys-nerr.md).

## See also

[Security features in the CRT](./security-features-in-the-crt.md)\
[C runtime (CRT) and C++ Standard Library (STL) `.lib` files](./crt-library-features.md)
