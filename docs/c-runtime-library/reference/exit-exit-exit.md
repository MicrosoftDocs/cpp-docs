---
description: "Learn more about: exit, _Exit, _exit"
title: "exit, _Exit, _exit"
ms.date: "4/2/2020"
api_name: ["_exit", "exit", "_o__exit", "_o_exit"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-runtime-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["Exit", "_exit", "process/exit", "process/_Exit", "stdlib/exit", "stdlib/_Exit"]
helpviewer_keywords: ["exit function", "_exit function", "processes, terminating", "function calls, terminating", "process termination, calling"]
---
# exit, _Exit, _exit

Terminates the calling process. The **exit** function terminates it after cleanup; **_exit** and **_Exit** terminate it immediately.

> [!NOTE]
> Do not use this method to shut down a Universal Windows Platform (UWP) app, except in testing or debugging scenarios. Programmatic or UI ways to close a Store app are not permitted according to the [Microsoft Store policies](/legal/windows/agreements/store-policies). For more information, see [UWP App lifecycle](/windows/uwp/launch-resume/app-lifecycle). For more information about Windows 10 apps, see [How-to guides for Windows 10 apps](https://developer.microsoft.com/windows/apps).

## Syntax

```C
void exit(
   int const status
);
void _Exit(
   int const status
);
void _exit(
   int const status
);
```

### Parameters

*status*<br/>
Exit status code.

## Remarks

The **exit**, **_Exit** and **_exit** functions terminate the calling process. The **exit** function calls destructors for thread-local objects, then calls—in last-in-first-out (LIFO) order—the functions that are registered by **atexit** and **_onexit**, and then flushes all file buffers before it terminates the process. The **_Exit** and **_exit** functions terminate the process without destroying thread-local objects or processing **atexit** or **_onexit** functions, and without flushing stream buffers.

Although the **exit**, **_Exit** and **_exit** calls do not return a value, the value in *status* is made available to the host environment or waiting calling process, if one exists, after the process exits. Typically, the caller sets the *status* value to 0 to indicate a normal exit, or to some other value to indicate an error. The *status* value is available to the operating-system batch command **ERRORLEVEL** and is represented by one of two constants: **EXIT_SUCCESS**, which represents a value of 0, or **EXIT_FAILURE**, which represents a value of 1.

The **exit**, **_Exit**, **_exit**, **quick_exit**, **_cexit**, and **_c_exit** functions behave as follows.

|Function|Description|
|--------------|-----------------|
|**exit**|Performs complete C library termination procedures, terminates the process, and provides the supplied status code to the host environment.|
|**_Exit**|Performs minimal C library termination procedures, terminates the process, and provides the supplied status code to the host environment.|
|**_exit**|Performs minimal C library termination procedures, terminates the process, and provides the supplied status code to the host environment.|
|**quick_exit**|Performs quick C library termination procedures, terminates the process, and provides the supplied status code to the host environment.|
|**_cexit**|Performs complete C library termination procedures and returns to the caller. Does not terminate the process.|
|**_c_exit**|Performs minimal C library termination procedures and returns to the caller. Does not terminate the process.|

When you call the **exit**,  **_Exit** or **_exit** function, the destructors for any temporary or automatic objects that exist at the time of the call are not called. An automatic object is a non-static local object defined in a function. A temporary object is an object that's created by the compiler, such as a value returned by a function call. To destroy an automatic object before you call **exit**, **_Exit**, or **_exit**, explicitly call the destructor for the object, as shown here:

```cpp
void last_fn() {}
    struct SomeClass {} myInstance{};
    // ...
    myInstance.~SomeClass(); // explicit destructor call
    exit(0);
}
```

Do not use **DLL_PROCESS_ATTACH** to call **exit** from **DllMain**. To exit the **DLLMain** function, return **FALSE** from **DLL_PROCESS_ATTACH**.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Function|Required header|
|--------------|---------------------|
|**exit**, **_Exit**, **_exit**|\<process.h> or \<stdlib.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_exit.c
// This program returns an exit code of 1. The
// error code could be tested in a batch file.

#include <stdlib.h>

int main( void )
{
   exit( 1 );
}
```

## See also

[Process and Environment Control](../../c-runtime-library/process-and-environment-control.md)<br/>
[abort](abort.md)<br/>
[atexit](atexit.md)<br/>
[_cexit, _c_exit](cexit-c-exit.md)<br/>
[_exec, _wexec Functions](../../c-runtime-library/exec-wexec-functions.md)<br/>
[_onexit, _onexit_m](onexit-onexit-m.md)<br/>
[quick_exit](quick-exit1.md)<br/>
[_spawn, _wspawn Functions](../../c-runtime-library/spawn-wspawn-functions.md)<br/>
[system, _wsystem](system-wsystem.md)<br/>
