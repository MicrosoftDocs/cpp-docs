---
description: "Learn more about: signal"
title: "signal"
ms.date: "04/12/2018"
api_name: ["signal"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-runtime-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["signal"]
helpviewer_keywords: ["signal function"]
---
# signal

Sets interrupt signal handling.

> [!IMPORTANT]
> Do not use this method to shut down a Microsoft Store app, except in testing or debugging scenarios. Programmatic or UI ways to close a Store app are not permitted according to the [Microsoft Store policies](/legal/windows/agreements/store-policies). For more information, see [UWP app lifecycle](/windows/uwp/launch-resume/app-lifecycle).

## Syntax

```C
void __cdecl *signal(int sig, int (*func)(int, int));
```

### Parameters

*sig*<br/>
Signal value.

*func*<br/>
The second parameter is a pointer to the function to be executed. The first parameter is a signal value and the second parameter is a sub-code that can be used when the first parameter is SIGFPE.

## Return Value

**signal** returns the previous value of func that's associated with the given signal. For example, if the previous value of *func* was **SIG_IGN**, the return value is also **SIG_IGN**. A return value of **SIG_ERR** indicates an error; in that case, **errno** is set to **EINVAL**.

See [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) for more information about return codes.

## Remarks

The **signal** function enables a process to choose one of several ways to handle an interrupt signal from the operating system. The *sig* argument is the interrupt to which **signal** responds; it must be one of the following manifest constants, which are defined in SIGNAL.H.

|*sig* value|Description|
|-----------------|-----------------|
|**SIGABRT**|Abnormal termination|
|**SIGFPE**|Floating-point error|
|**SIGILL**|Illegal instruction|
|**SIGINT**|CTRL+C signal|
|**SIGSEGV**|Illegal storage access|
|**SIGTERM**|Termination request|

If *sig* is not one of the above values, the invalid parameter handler is invoked, as defined in [Parameter Validation](../../c-runtime-library/parameter-validation.md) . If execution is allowed to continue, this function sets **errno** to **EINVAL** and returns **SIG_ERR**.

By default, **signal** terminates the calling program with exit code 3, regardless of the value of *sig*.

> [!NOTE]
> **SIGINT** is not supported for any Win32 application. When a CTRL+C interrupt occurs, Win32 operating systems generate a new thread to specifically handle that interrupt. This can cause a single-thread application, such as one in UNIX, to become multithreaded and cause unexpected behavior.

The *func* argument is an address to a signal handler that you write, or to one of the predefined constants **SIG_DFL** or **SIG_IGN**, which are also defined in SIGNAL.H. If *func* is a function, it is installed as the signal handler for the given signal. The signal handler's prototype requires one formal argument, *sig*, of type **`int`**. The operating system provides the actual argument through *sig* when an interrupt occurs; the argument is the signal that generated the interrupt. Therefore, you can use the six manifest constants (listed in the preceding table) in your signal handler to determine which interrupt occurred and take appropriate action. For example, you can call **signal** twice to assign the same handler to two different signals, and then test the *sig* argument in the handler to take different actions based on the signal received.

If you are testing for floating-point exceptions (**SIGFPE**), *func* points to a function that takes an optional second argument that is one of several manifest constants, defined in FLOAT.H, of the form **FPE_xxx**. When a **SIGFPE** signal occurs, you can test the value of the second argument to determine the kind of floating-point exception and then take appropriate action. This argument and its possible values are Microsoft extensions.

For floating-point exceptions, the value of *func* is not reset when the signal is received. To recover from floating-point exceptions, use try/except clauses to surround the floating point operations. It's also possible to recover by using [setjmp](setjmp.md) with [longjmp](longjmp.md). In either case, the calling process resumes execution and leaves the floating-point state of the process undefined.

If the signal handler returns, the calling process resumes execution immediately following the point at which it received the interrupt signal. This is true regardless of the kind of signal or operating mode.

Before the specified function is executed, the value of *func* is set to **SIG_DFL**. The next interrupt signal is treated as described for **SIG_DFL**, unless an intervening call to **signal** specifies otherwise. You can use this feature to reset signals in the called function.

Because signal-handler routines are usually called asynchronously when an interrupt occurs, your signal-handler function may get control when a run-time operation is incomplete and in an unknown state. The following list summarizes the restrictions that determine which functions you can use in your signal-handler routine.

- Do not issue low-level or STDIO.H I/O routines (for example, **printf** or **fread**).

- Do not call heap routines or any routine that uses the heap routines (for example, **malloc**, **_strdup**, or **_putenv**). See [malloc](malloc.md) for more information.

- Do not use any function that generates a system call (for example, **_getcwd** or **time**).

- Do not use **longjmp** unless the interrupt is caused by a floating-point exception (that is, *sig* is **SIGFPE**). In this case, first reinitialize the floating-point package by using a call to **_fpreset**.

- Do not use any overlay routines.

A program must contain floating-point code if it is to trap the **SIGFPE** exception by using the function. If your program does not have floating-point code and requires the run-time library's signal-handling code, just declare a volatile double and initialize it to zero:

```C
volatile double d = 0.0f;
```

The **SIGILL** and **SIGTERM** signals are not generated under Windows. They are included for ANSI compatibility. Therefore, you can set signal handlers for these signals by using **signal**, and you can also explicitly generate these signals by calling [raise](raise.md).

Signal settings are not preserved in spawned processes that are created by calls to [_exec](../../c-runtime-library/exec-wexec-functions.md) or [_spawn](../../c-runtime-library/spawn-wspawn-functions.md) functions. The signal settings are reset to the default values in the new process.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**signal**|\<signal.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

The following example shows how to use **signal** to add some custom behavior to the **SIGABRT** signal. For additional information about abort behavior, see [_set_abort_behavior](set-abort-behavior.md).

```C
// crt_signal.c
// compile with: /EHsc /W4
// Use signal to attach a signal handler to the abort routine
#include <stdlib.h>
#include <signal.h>

void SignalHandler(int signal)
{
    if (signal == SIGABRT) {
        // abort signal handler code
    } else {
        // ...
    }
}

int main()
{
    typedef void (*SignalHandlerPointer)(int);

    SignalHandlerPointer previousHandler;
    previousHandler = signal(SIGABRT, SignalHandler);

    abort();
}
```

The output depends on the version of the runtime used, whether the app is a console or Windows app, and on Windows registry settings. For a console app, something like the following message may be sent to stderr:

```Output
Debug Error!

Program: c:\Projects\crt_signal\Debug\crt_signal.exe

R6010

- abort() has been called
```

## See also

[Process and Environment Control](../../c-runtime-library/process-and-environment-control.md)<br/>
[abort](abort.md)<br/>
[_exec, _wexec Functions](../../c-runtime-library/exec-wexec-functions.md)<br/>
[exit, _Exit, _exit](exit-exit-exit.md)<br/>
[_fpreset](fpreset.md)<br/>
[_spawn, _wspawn Functions](../../c-runtime-library/spawn-wspawn-functions.md)<br/>
