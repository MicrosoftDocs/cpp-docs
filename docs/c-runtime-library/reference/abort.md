---
description: "Learn more about: abort"
title: "abort"
ms.date: "4/2/2020"
api_name: ["abort", "_o_abort"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-runtime-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["Abort"]
helpviewer_keywords: ["aborting current process", "abort function", "processes, aborting"]
---
# abort

Aborts the current process and returns an error code.

> [!NOTE]
> Do not use this method to shut down a Microsoft Store app or Universal Windows Platform (UWP) app, except in testing or debugging scenarios. Programmatic or UI ways to close a Store app are not permitted according to the [Microsoft Store policies](/legal/windows/agreements/store-policies). For more information, see [UWP app lifecycle](/windows/uwp/launch-resume/app-lifecycle).

## Syntax

```C
void abort( void );
```

## Return Value

**abort** does not return control to the calling process. By default, it checks for an abort signal handler and raises `SIGABRT` if one is set. Then **abort** terminates the current process and returns an exit code to the parent process.

## Remarks

**Microsoft Specific**

By default, when an app is built with the debug runtime library, the **abort** routine displays an error message before `SIGABRT` is raised. For console apps running in console mode, the message is sent to `STDERR`. Windows desktop apps and console apps running in windowed mode display the message in a message box. To suppress the message, use [_set_abort_behavior](set-abort-behavior.md) to clear the `_WRITE_ABORT_MSG` flag. The message displayed depends on the version of the runtime environment used. For applications built by using the most recent versions of Visual C++, the message resembles this:

> R6010 - abort() has been called

In previous versions of the C runtime library, this message was displayed:

> This application has requested the Runtime to terminate it in an unusual way. Please contact the application's support team for more information.

When the program is compiled in debug mode, the message box displays options to **Abort**, **Retry**, or **Ignore**. If the user chooses **Abort**, the program terminates immediately and returns an exit code of 3. If the user chooses **Retry**, a debugger is invoked for just-in-time debugging, if available. If the user chooses **Ignore**, **abort** continues normal processing.

In both retail and debug builds, **abort** then checks whether an abort signal handler is set. If a non-default signal handler is set, **abort** calls `raise(SIGABRT)`. Use the [signal](signal.md) function to associate an abort signal handler function with the `SIGABRT` signal. You can perform custom actions—for example, clean up resources or log information—and terminate the app with your own error code in the handler function. If no custom signal handler is defined, **abort** does not raise the `SIGABRT` signal.

By default, in non-debug builds of desktop or console apps, **abort** then invokes the Windows Error Reporting Service mechanism (formerly known as Dr. Watson) to report failures to Microsoft. This behavior can be enabled or disabled by calling `_set_abort_behavior` and setting or masking the `_CALL_REPORTFAULT` flag. When the flag is set, Windows displays a message box that has text something like "A problem caused the program to stop working correctly." The user can choose to invoke a debugger with a **Debug** button, or choose the **Close program** button to terminate the app with an error code that's defined by the operating system.

If the Windows error reporting handler is not invoked, then **abort** calls [_exit](exit-exit-exit.md) to terminate the process with exit code 3 and returns control to the parent process or the operating system. `_exit` does not flush stream buffers or do `atexit`/`_onexit` processing.

For more information about CRT debugging, see [CRT Debugging Techniques](/visualstudio/debugger/crt-debugging-techniques).

**End Microsoft Specific**

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**abort**|\<process.h> or \<stdlib.h>|

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

[Using abort](../../cpp/using-abort.md)<br/>
[abort Function](../../c-language/abort-function-c.md)<br/>
[Process and Environment Control](../../c-runtime-library/process-and-environment-control.md)<br/>
[_exec, _wexec Functions](../../c-runtime-library/exec-wexec-functions.md)<br/>
[exit, _Exit, _exit](exit-exit-exit.md)<br/>
[raise](raise.md)<br/>
[signal](signal.md)<br/>
[_spawn, _wspawn Functions](../../c-runtime-library/spawn-wspawn-functions.md)<br/>
[_DEBUG](../../c-runtime-library/debug.md)<br/>
[_set_abort_behavior](set-abort-behavior.md)
