---
description: "Learn more about: abort"
title: "abort"
ms.date: 07/07/2022
api_name: ["abort", "_o_abort"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-runtime-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["STDLIB/abort", "abort"]
helpviewer_keywords: ["aborting current process", "abort function", "processes, aborting"]
---
# `abort`

Aborts the current process and returns an error code.

> [!NOTE]
> Do not use this method to shut down a Microsoft Store app or Universal Windows Platform (UWP) app, except in testing or debugging scenarios. Programmatic or UI ways to close a Store app are not permitted according to the [Microsoft Store policies](/legal/windows/agreements/store-policies). For more information, see [UWP app lifecycle](/windows/uwp/launch-resume/app-lifecycle).

## Syntax

```C
void abort( void );
```

## Return value

**`abort`** doesn't return control to the calling process. By default, it checks for an abort signal handler and raises `SIGABRT` if one is set. Then **`abort`** terminates the current process and returns an exit code to the parent process.

## Remarks

**Microsoft Specific**

By default, when an app is built with the debug runtime library, the **`abort`** routine displays an error message before `SIGABRT` is raised. For console apps running in console mode, the message is sent to `STDERR`. Windows desktop apps and console apps running in windowed mode display the message in a message box. To suppress the message, use [`_set_abort_behavior`](set-abort-behavior.md) to clear the `_WRITE_ABORT_MSG` flag. The message displayed depends on the version of the runtime environment used. For applications built by using the most recent versions of Visual C++, the message resembles this one:

> R6010 - abort() has been called

In previous versions of the C runtime library, this message was displayed:

> This application has requested the Runtime to terminate it in an unusual way. Please contact the application's support team for more information.

When the program is compiled in debug mode, the message box displays options to **Abort**, **Retry**, or **Ignore**. If the user chooses **Abort**, the program terminates immediately and returns an exit code of 3. If the user chooses **Retry**, a debugger is invoked for just-in-time debugging, if available. If the user chooses **Ignore**, **`abort`** continues normal processing.

In both retail and debug builds, **`abort`** then checks whether an abort signal handler is set. If a non-default signal handler is set, **`abort`** calls `raise(SIGABRT)`. Use the [`signal`](signal.md) function to associate an abort signal handler function with the `SIGABRT` signal. You can perform custom actions—for example, clean up resources or log information—and terminate the app with your own error code in the handler function. If no custom signal handler is defined, **`abort`** doesn't raise the `SIGABRT` signal.

By default, in non-debug builds of desktop or console apps, **`abort`** then invokes the Windows Error Reporting Service mechanism (formerly known as Dr. Watson) to report failures to Microsoft. This behavior can be enabled or disabled by calling `_set_abort_behavior` and setting or masking the `_CALL_REPORTFAULT` flag. When the flag is set, Windows displays a message box that has text something like "A problem caused the program to stop working correctly." The user can choose to invoke a debugger with a **Debug** button, or choose the **Close program** button to terminate the app with an error code that's defined by the operating system.

If the Windows error reporting handler isn't invoked, then **`abort`** calls [`_exit`](exit-exit-exit.md) to terminate the process with exit code 3 and returns control to the parent process or the operating system. `_exit` doesn't flush stream buffers or do `atexit`/`_onexit` processing.

For Windows compatibility reasons, when **`abort`** calls `_exit`, it may invoke the Windows [`ExitProcess`](/windows/win32/api/processthreadsapi/nf-processthreadsapi-exitprocess) API, which in turn allows DLL termination routines to run. Destructors aren't run in the executable, but the same may not be true of DLLs loaded in the executable's process space. This behavior doesn't strictly conform to the C++ standard. To immediately terminate a process including any DLLs, use the Windows [`TerminateProcess`](/windows/desktop/api/processthreadsapi/nf-processthreadsapi-terminateprocess) API. You can also register an abort signal handler that invokes `TerminateProcess` for standard-compliant behavior. Compliant behavior may come at some cost in Windows compatibility.

For more information about CRT debugging, see [CRT debugging techniques](../crt-debugging-techniques.md).

**End Microsoft Specific**

By default, this function's global state is scoped to the application. To change it, see [Global state in the CRT](../global-state.md).

## Requirements

| Routine | Required header |
|---|---|
| **`abort`** | `<process.h>` or `<stdlib.h>` |

## Example

The following program tries to open a file and aborts if the attempt fails.

```C
// crt_abort.c
// compile with: /TC
// This program demonstrates the use of
// the abort function by attempting to open a file
// and aborts if the attempt fails.

#include  <stdio.h>
#include  <stdlib.h>

int main( void )
{
    FILE    *stream = NULL;
    errno_t err = 0;

    err = fopen_s(&stream, "NOSUCHF.ILE", "r" );
    if ((err != 0) || (stream == NULL))
    {
        perror( "File could not be opened" );
        abort();
    }
    else
    {
        fclose( stream );
    }
}
```

```Output
File could not be opened: No such file or directory
```

## See also

[Using `abort`](../../cpp/using-abort.md)\
[`abort` function](../../c-language/abort-function-c.md)\
[Process and environment control](../process-and-environment-control.md)\
[`_exec`, `_wexec` functions](../exec-wexec-functions.md)\
[`exit`, `_Exit`, `_exit`](exit-exit-exit.md)\
[`raise`](raise.md)\
[`signal`](signal.md)\
[`_spawn`, `_wspawn` functions](../spawn-wspawn-functions.md)\
[`_DEBUG`](../debug.md)\
[`_set_abort_behavior`](set-abort-behavior.md)
