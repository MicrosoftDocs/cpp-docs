---
description: "Learn more about: Runtime error checking"
title: "Runtime error checking"
ms.date: "11/04/2016"
helpviewer_keywords: ["runtime error checking", "runtime errors, checking"]
---
# Runtime error checking

The C runtime library contains the functions that support runtime error checks (RTC). Runtime error checking allows you to build your program such that certain kinds of runtime errors are reported. You specify how the errors are reported and which kinds of errors are reported. For more information, see [How to: Use native runtime checks](/visualstudio/debugger/how-to-use-native-run-time-checks).

Use the following functions to customize the way your program does runtime error checking.

## Runtime error checking functions

| Function | Use |
|---|---|
| [`_RTC_GetErrDesc`](./reference/rtc-geterrdesc.md) | Returns a brief description of a runtime error check type. |
| [`_RTC_NumErrors`](./reference/rtc-numerrors.md) | Returns the total number of errors that can be detected by runtime error checks. |
| [`_RTC_SetErrorFunc`](./reference/rtc-seterrorfunc.md) | Designates a function as the handler for reporting runtime error checks. |
| [`_RTC_SetErrorType`](./reference/rtc-seterrortype.md) | Associates an error that is detected by runtime error checks with a type. |

## See also

[Universal C runtime routines by category](./run-time-routines-by-category.md)\
[/RTC (Runtime error checks)](../build/reference/rtc-run-time-error-checks.md)\
[`runtime_checks`](../preprocessor/runtime-checks.md)\
[Debug routines](./debug-routines.md)
