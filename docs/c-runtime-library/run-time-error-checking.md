---
description: "Learn more about: Run-Time Error Checking"
title: "Run-Time Error Checking"
ms.date: "11/04/2016"
helpviewer_keywords: ["run-time error checking", "run-time errors, checking"]
ms.assetid: c965dd01-57ad-4a3c-b1d6-5aa04f920501
---
# Run-Time Error Checking

The C run-time library contains the functions that support run-time error checks (RTC). Run-time error checking allows you to build your program such that certain kinds of run-time errors are reported. You specify how the errors are reported and which kinds of errors are reported. For more information, see [How to: Use Native Run-Time Checks](/visualstudio/debugger/how-to-use-native-run-time-checks).

Use the following functions to customize the way your program does run-time error checking.

## Run-Time Error Checking Functions

|Function|Use|
|--------------|---------|
|[_RTC_GetErrDesc](../c-runtime-library/reference/rtc-geterrdesc.md)|Returns a brief description of a run-time error check type.|
|[_RTC_NumErrors](../c-runtime-library/reference/rtc-numerrors.md)|Returns the total number of errors that can be detected by run-time error checks.|
|[_RTC_SetErrorFunc](../c-runtime-library/reference/rtc-seterrorfunc.md)|Designates a function as the handler for reporting run-time error checks.|
|[_RTC_SetErrorType](../c-runtime-library/reference/rtc-seterrortype.md)|Associates an error that is detected by run-time error checks with a type.|

## See also

[Universal C runtime routines by category](../c-runtime-library/run-time-routines-by-category.md)<br/>
[/RTC (Run-Time Error Checks)](../build/reference/rtc-run-time-error-checks.md)<br/>
[runtime_checks](../preprocessor/runtime-checks.md)<br/>
[Debug Routines](../c-runtime-library/debug-routines.md)<br/>
