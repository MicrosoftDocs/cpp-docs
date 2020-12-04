---
description: "Learn more about: raise"
title: "raise"
ms.date: "4/2/2020"
api_name: ["raise", "_o_raise"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-runtime-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["Raise"]
helpviewer_keywords: ["signals, sending to executing programs", "raise function", "signals", "programs [C++], sending signals to executing programs"]
---
# raise

Sends a signal to the executing program.

> [!NOTE]
> Do not use this method to shut down a Microsoft Store app, except in testing or debugging scenarios. Programmatic or UI ways to close a Store app are not permitted according to the [Microsoft Store policies](/legal/windows/agreements/store-policies). For more information, see [UWP app lifecycle](/windows/uwp/launch-resume/app-lifecycle).

## Syntax

```C
int raise(
   int sig
);
```

### Parameters

*sig*<br/>
Signal to be raised.

## Return Value

If successful, **raise** returns 0. Otherwise, it returns a nonzero value.

## Remarks

The **raise** function sends *sig* to the executing program. If a previous call to **signal** has installed a signal-handling function for *sig*, **raise** executes that function. If no handler function has been installed, the default action associated with the signal value *sig* is taken, as follows.

|Signal|Meaning|Default|
|------------|-------------|-------------|
|**SIGABRT**|Abnormal termination|Terminates the calling program with exit code 3|
|**SIGFPE**|Floating-point error|Terminates the calling program|
|**SIGILL**|Illegal instruction|Terminates the calling program|
|**SIGINT**|CTRL+C interrupt|Terminates the calling program|
|**SIGSEGV**|Illegal storage access|Terminates the calling program|
|**SIGTERM**|Termination request sent to the program|Ignores the signal|

If the argument is not a valid signal as specified above, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If not handled, the function sets **errno** to **EINVAL** and returns a nonzero value.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**raise**|\<signal.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Process and Environment Control](../../c-runtime-library/process-and-environment-control.md)<br/>
[abort](abort.md)<br/>
[signal](signal.md)<br/>
