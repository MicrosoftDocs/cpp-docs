---
description: "Learn more about: Process and Environment Control"
title: "Process and Environment Control"
ms.date: "11/04/2016"
f1_keywords: ["c.programs"]
helpviewer_keywords: ["processes, stopping", "processes, administrative tasks", "parent process", "processes, starting", "environment control routines", "process control routines"]
ms.assetid: 7fde74c3-c2a6-4d15-84b8-092160d60c3e
---
# Process and Environment Control

Use the process-control routines to start, stop, and manage processes from within a program. Use the environment-control routines to get and change information about the operating-system environment.

## Process and Environment Control Functions

|Routine|Use|
|-------------|---------|
|[abort](../c-runtime-library/reference/abort.md)|Abort process without flushing buffers or calling functions registered by **atexit** and **_onexit**|
|[assert](../c-runtime-library/reference/assert-macro-assert-wassert.md)|Test for logic error|
|[_ASSERT, _ASSERTE](../c-runtime-library/reference/assert-asserte-assert-expr-macros.md) macros|Similar to **assert**, but only available in the debug versions of the run-time libraries|
|[atexit](../c-runtime-library/reference/atexit.md)|Schedule routines for execution at program termination|
|[_beginthread, _beginthreadex](../c-runtime-library/reference/beginthread-beginthreadex.md)|Create a new thread on a Windows operating system process|
|[_cexit](../c-runtime-library/reference/cexit-c-exit.md)|Perform **exit** termination procedures (such as flushing buffers), then return control to calling program without terminating process|
|[_c_exit](../c-runtime-library/reference/cexit-c-exit.md)|Perform **_exit** termination procedures, then return control to calling program without terminating process|
|[_cwait](../c-runtime-library/reference/cwait.md)|Wait until another process terminates|
|[_endthread, _endthreadex](../c-runtime-library/reference/endthread-endthreadex.md)|Terminate a Windows operating system thread|
|[_execl, _wexecl](../c-runtime-library/reference/execl-wexecl.md)|Execute new process with argument list|
|[_execle, _wexecle](../c-runtime-library/reference/execle-wexecle.md)|Execute new process with argument list and given environment|
|[_execlp, _wexeclp](../c-runtime-library/reference/execlp-wexeclp.md)|Execute new process using **PATH** variable and argument list|
|[_execlpe, _wexeclpe](../c-runtime-library/reference/execlpe-wexeclpe.md)|Execute new process using **PATH** variable, given environment, and argument list|
|[_execv, _wexecv](../c-runtime-library/reference/execv-wexecv.md)|Execute new process with argument array|
|[_execve, _wexecve](../c-runtime-library/reference/execve-wexecve.md)|Execute new process with argument array and given environment|
|[_execvp, _wexecvp](../c-runtime-library/reference/execvp-wexecvp.md)|Execute new process using **PATH** variable and argument array|
|[_execvpe, _wexecvpe](../c-runtime-library/reference/execvpe-wexecvpe.md)|Execute new process using **PATH** variable, given environment, and argument array|
|[exit](../c-runtime-library/reference/exit-exit-exit.md)|Call functions registered by **atexit** and **_onexit**, flush all buffers, close all open files, and terminate process|
|[_exit](../c-runtime-library/reference/exit-exit-exit.md)|Terminate process immediately without calling **atexit** or **_onexit** or flushing buffers|
|[getenv, _wgetenv](../c-runtime-library/reference/getenv-wgetenv.md), [getenv_s, _wgetenv_s](../c-runtime-library/reference/getenv-s-wgetenv-s.md)|Get value of environment variable|
|[_getpid](../c-runtime-library/reference/getpid.md)|Get process ID number|
|[longjmp](../c-runtime-library/reference/longjmp.md)|Restore saved stack environment; use it to execute a nonlocal **`goto`**|
|[_onexit](../c-runtime-library/reference/onexit-onexit-m.md)|Schedule routines for execution at program termination; use for compatibility with Microsoft C/C++ version 7.0 and earlier|
|[_pclose](../c-runtime-library/reference/pclose.md)|Wait for new command processor and close stream on associated pipe|
|[perror, _wperror](../c-runtime-library/reference/perror-wperror.md)|Print error message|
|[_pipe](../c-runtime-library/reference/pipe.md)|Create pipe for reading and writing|
|[_popen, _wpopen](../c-runtime-library/reference/popen-wpopen.md)|Create pipe and execute command|
|[_putenv, _wputenv](../c-runtime-library/reference/putenv-wputenv.md), [_putenv_s, _wputenv_s](../c-runtime-library/reference/putenv-s-wputenv-s.md)|Add or change value of environment variable|
|[raise](../c-runtime-library/reference/raise.md)|Send signal to calling process|
|[setjmp](../c-runtime-library/reference/setjmp.md)|Save stack environment; use to execute non local **`goto`**|
|[signal](../c-runtime-library/reference/signal.md)|Handle interrupt signal|
|[_spawnl, _wspawnl](../c-runtime-library/reference/spawnl-wspawnl.md)|Create and execute new process with specified argument list|
|[_spawnle, _wspawnle](../c-runtime-library/reference/spawnle-wspawnle.md)|Create and execute new process with specified argument list and environment|
|[_spawnlp, _wspawnlp](../c-runtime-library/reference/spawnlp-wspawnlp.md)|Create and execute new process using **PATH** variable and specified argument list|
|[_spawnlpe, _wspawnlpe](../c-runtime-library/reference/spawnlpe-wspawnlpe.md)|Create and execute new process using **PATH** variable, specified environment, and argument list|
|[_spawnv, _wspawnv](../c-runtime-library/reference/spawnv-wspawnv.md)|Create and execute new process with specified argument array|
|[_spawnve, _wspawnve](../c-runtime-library/reference/spawnve-wspawnve.md)|Create and execute new process with specified environment and argument array|
|[_spawnvp, _wspawnvp](../c-runtime-library/reference/spawnvp-wspawnvp.md)|Create and execute new process using **PATH** variable and specified argument array|
|[_spawnvpe, _wspawnvpe](../c-runtime-library/reference/spawnvpe-wspawnvpe.md)|Create and execute new process using **PATH** variable, specified environment, and argument array|
|[system, _wsystem](../c-runtime-library/reference/system-wsystem.md)|Execute operating-system command|

In the Windows operating system, the spawned process is equivalent to the spawning process. Any process can use **_cwait** to wait for any other process for which the process ID is known.

The difference between the **_exec** and **_spawn** families is that a **_spawn** function can return control from the new process to the calling process. In a **_spawn** function, both the calling process and the new process are present in memory unless **_P_OVERLAY** is specified. In an **_exec** function, the new process overlays the calling process, so control cannot return to the calling process unless an error occurs in the attempt to start execution of the new process.

The differences among the functions in the **_exec** family, as well as among those in the **_spawn** family, involve the method of locating the file to be executed as the new process, the form in which arguments are passed to the new process, and the method of setting the environment, as shown in the following table. Use a function that passes an argument list when the number of arguments is constant or is known at compile time. Use a function that passes a pointer to an array containing the arguments when the number of arguments is to be determined at run time. The information in the following table also applies to the wide-character counterparts of the **_spawn** and **_exec** functions.

### _spawn and _exec Function Families

|Functions|Use PATH variable to locate file|Argument-passing convention|Environment settings|
|---------------|--------------------------------------|----------------------------------|--------------------------|
|**_execl**, **_spawnl**|No|List|Inherited from calling process|
|**_execle**, **_spawnle**|No|List|Pointer to environment table for new process passed as last argument|
|**_execlp**, **_spawnlp**|Yes|List|Inherited from calling process|
|**_execvpe**, **_spawnvpe**|Yes|Array|Pointer to environment table for new process passed as last argument|
|**_execlpe**, **_spawnlpe**|Yes|List|Pointer to environment table for new process passed as last argument|
|**_execv**, **_spawnv**|No|Array|Inherited from calling process|
|**_execve**, **_spawnve**|No|Array|Pointer to environment table for new process passed as last argument|
|**_execvp**, **_spawnvp**|Yes|Array|Inherited from calling process|

## See also

[Universal C runtime routines by category](../c-runtime-library/run-time-routines-by-category.md)<br/>
