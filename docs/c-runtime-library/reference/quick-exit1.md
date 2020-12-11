---
description: "Learn more about: quick_exit"
title: "quick_exit1"
ms.date: "11/04/2016"
api_name: ["quick_exit"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-runtime-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["quick_exit", "process/quick_exit", "stdlib/quick_exit"]
helpviewer_keywords: ["quick_exit function"]
ms.assetid: ecfbdae6-01c4-45fa-aaeb-b368e1de2a9c
---
# quick_exit

Causes normal program termination to occur.

## Syntax

```C
__declspec(noreturn) void quick_exit(
    int status
);
```

### Parameters

*status*<br/>
The status code to return to the host environment.

## Return Value

The **quick_exit** function cannot return to its caller.

## Remarks

The **quick_exit** function causes normal program termination. It calls no functions registered by **atexit**, **_onexit** or signal handlers registered by the **signal** function. Behavior is undefined if **quick_exit** is called more than once, or if the **exit** function is also called.

The **quick_exit** function calls, in last-in, first-out (LIFO) order, the functions registered by **at_quick_exit**, except for those functions already called when the function was registered.  Behavior is undefined if a [longjmp](longjmp.md) call is made during a call to a registered function that would terminate the call to the  function.

After the registered functions have been called, **quick_exit** invokes **_Exit** by using the *status* value to return control to the host environment.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**quick_exit**|\<process.h> or \<stdlib.h>|

For more information about compatibility, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Process and Environment Control](../../c-runtime-library/process-and-environment-control.md)<br/>
[abort](abort.md)<br/>
[atexit](atexit.md)<br/>
[_exec, _wexec Functions](../../c-runtime-library/exec-wexec-functions.md)<br/>
[exit, _Exit, _exit](exit-exit-exit.md)<br/>
[_onexit, _onexit_m](onexit-onexit-m.md)<br/>
[_spawn, _wspawn Functions](../../c-runtime-library/spawn-wspawn-functions.md)<br/>
[system, _wsystem](system-wsystem.md)<br/>
