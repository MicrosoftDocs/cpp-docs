---
description: "Learn more about: Process and Environment Control"
title: "Process and Environment Control"
ms.date: "11/04/2016"
f1_keywords: ["c.programs"]
helpviewer_keywords: ["processes, stopping", "processes, administrative tasks", "parent process", "processes, starting", "environment control routines", "process control routines"]
---
# Process and environment control

Use the process-control routines to start, stop, and manage processes from within a program. Use the environment-control routines to get and change information about the operating-system environment.

## Process and environment control functions

| Routine | Use |
|---|---|
| [`abort`](./reference/abort.md) | Abort process without flushing buffers or calling functions registered by **`atexit`** and **`_onexit`** |
| [`assert`](./reference/assert-macro-assert-wassert.md) | Test for logic error |
| [`_ASSERT`, `_ASSERTE`](./reference/assert-asserte-assert-expr-macros.md) macros | Similar to **`assert`**, but only available in the debug versions of the run-time libraries |
| [`atexit`](./reference/atexit.md) | Schedule routines for execution at program termination |
| [`_beginthread`, `_beginthreadex`](./reference/beginthread-beginthreadex.md) | Create a new thread on a Windows operating system process |
| [`_cexit`](./reference/cexit-c-exit.md) | Perform **`exit`** termination procedures (such as flushing buffers), then return control to calling program without terminating process |
| [`_c_exit`](./reference/cexit-c-exit.md) | Perform **`_exit`** termination procedures, then return control to calling program without terminating process |
| [`_cwait`](./reference/cwait.md) | Wait until another process terminates |
| [`_endthread`, `_endthreadex`](./reference/endthread-endthreadex.md) | Terminate a Windows operating system thread |
| [`_execl`, `_wexecl`](./reference/execl-wexecl.md) | Execute new process with argument list |
| [`_execle`, `_wexecle`](./reference/execle-wexecle.md) | Execute new process with argument list and given environment |
| [`_execlp`, `_wexeclp`](./reference/execlp-wexeclp.md) | Execute new process using `PATH` variable and argument list |
| [`_execlpe`, `_wexeclpe`](./reference/execlpe-wexeclpe.md) | Execute new process using `PATH` variable, given environment, and argument list |
| [`_execv`, `_wexecv`](./reference/execv-wexecv.md) | Execute new process with argument array |
| [`_execve`, `_wexecve`](./reference/execve-wexecve.md) | Execute new process with argument array and given environment |
| [`_execvp`, `_wexecvp`](./reference/execvp-wexecvp.md) | Execute new process using `PATH` variable and argument array |
| [`_execvpe`, `_wexecvpe`](./reference/execvpe-wexecvpe.md) | Execute new process using `PATH` variable, given environment, and argument array |
| [`exit`](./reference/exit-exit-exit.md) | Call functions registered by **`atexit`** and **`_onexit`**, flush all buffers, close all open files, and terminate process |
| [`_exit`](./reference/exit-exit-exit.md) | Terminate process immediately without calling **`atexit`** or **`_onexit`** or flushing buffers |
| [`getenv`, `_wgetenv`](./reference/getenv-wgetenv.md), [`getenv_s`, `_wgetenv_s`](./reference/getenv-s-wgetenv-s.md) | Get value of environment variable |
| [`_getpid`](./reference/getpid.md) | Get process ID number |
| [`longjmp`](./reference/longjmp.md) | Restore saved stack environment; use it to execute a nonlocal **`goto`** |
| [`_onexit`](./reference/onexit-onexit-m.md) | Schedule routines for execution at program termination; use for compatibility with Microsoft C/C++ version 7.0 and earlier |
| [`_pclose`](./reference/pclose.md) | Wait for new command processor and close stream on associated pipe |
| [`perror`, `_wperror`](./reference/perror-wperror.md) | Print error message |
| [`_pipe`](./reference/pipe.md) | Create pipe for reading and writing |
| [`_popen`, `_wpopen`](./reference/popen-wpopen.md) | Create pipe and execute command |
| [`_putenv`, `_wputenv`](./reference/putenv-wputenv.md), [`_putenv_s`, `_wputenv_s`](./reference/putenv-s-wputenv-s.md) | Add or change value of environment variable |
| [`raise`](./reference/raise.md) | Send signal to calling process |
| [`setjmp`](./reference/setjmp.md) | Save stack environment; use to execute non local **`goto`** |
| [`signal`](./reference/signal.md) | Handle interrupt signal |
| [`_spawnl`, `_wspawnl`](./reference/spawnl-wspawnl.md) | Create and execute new process with specified argument list |
| [`_spawnle`, `_wspawnle`](./reference/spawnle-wspawnle.md) | Create and execute new process with specified argument list and environment |
| [`_spawnlp`, `_wspawnlp`](./reference/spawnlp-wspawnlp.md) | Create and execute new process using `PATH` variable and specified argument list |
| [`_spawnlpe`, `_wspawnlpe`](./reference/spawnlpe-wspawnlpe.md) | Create and execute new process using `PATH` variable, specified environment, and argument list |
| [`_spawnv`, `_wspawnv`](./reference/spawnv-wspawnv.md) | Create and execute new process with specified argument array |
| [`_spawnve`, `_wspawnve`](./reference/spawnve-wspawnve.md) | Create and execute new process with specified environment and argument array |
| [`_spawnvp`, `_wspawnvp`](./reference/spawnvp-wspawnvp.md) | Create and execute new process using `PATH` variable and specified argument array |
| [`_spawnvpe`, `_wspawnvpe`](./reference/spawnvpe-wspawnvpe.md) | Create and execute new process using `PATH` variable, specified environment, and argument array |
| [`system`, `_wsystem`](./reference/system-wsystem.md) | Execute operating-system command |

In the Windows operating system, the spawned process is equivalent to the spawning process. Any process can use **`_cwait`** to wait for any other process for which the process ID is known.

The difference between the **`_exec`** and **`_spawn`** families is that a **`_spawn`** function can return control from the new process to the calling process. In a **`_spawn`** function, both the calling process and the new process are present in memory unless `_P_OVERLAY` is specified. In an **`_exec`** function, the new process overlays the calling process, so control can't return to the calling process unless an error occurs in the attempt to start execution of the new process.

The differences among the functions in the **`_exec`** and **`_spawn`** families involve the method of locating the file to be executed as the new process, the form in which arguments are passed to the new process, and the method of setting the environment, as shown in the following table. Use a function that passes an argument list when the number of arguments is constant or is known at compile time. Use a function that passes a pointer to an array containing the arguments when the number of arguments is to be determined at run time. The information in the following table also applies to the wide-character counterparts of the **`_spawn`** and **`_exec`** functions.

### `_spawn` and `_exec` Function Families

| Functions | Use `PATH` variable to locate file | Argument-passing convention | Environment settings |
|---|---|---|---|
| **`_execl`**, **`_spawnl`** | No | List | Inherited from calling process |
| **`_execle`**, **`_spawnle`** | No | List | Pointer to environment table for new process passed as last argument |
| **`_execlp`**, **`_spawnlp`** | Yes | List | Inherited from calling process |
| **`_execvpe`**, **`_spawnvpe`** | Yes | Array | Pointer to environment table for new process passed as last argument |
| **`_execlpe`**, **`_spawnlpe`** | Yes | List | Pointer to environment table for new process passed as last argument |
| **`_execv`**, **`_spawnv`** | No | Array | Inherited from calling process |
| **`_execve`**, **`_spawnve`** | No | Array | Pointer to environment table for new process passed as last argument |
| **`_execvp`**, **`_spawnvp`** | Yes | Array | Inherited from calling process |

## See also

[Universal C runtime routines by category](./run-time-routines-by-category.md)
