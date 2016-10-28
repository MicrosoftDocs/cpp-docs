---
title: "Process and Environment Control"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "c.programs"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "processes, stopping"
  - "processes, administrative tasks"
  - "parent process"
  - "processes, starting"
  - "environment control routines"
  - "process control routines"
ms.assetid: 7fde74c3-c2a6-4d15-84b8-092160d60c3e
caps.latest.revision: 9
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Process and Environment Control
Use the process-control routines to start, stop, and manage processes from within a program. Use the environment-control routines to get and change information about the operating-system environment.  
  
### Process and Environment Control Functions  
  
|Routine|Use|.NET Framework equivalent|  
|-------------|---------|-------------------------------|  
|[abort](../crt/abort.md)|Abort process without flushing buffers or calling functions registered by `atexit` and `_onexit`|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[assert](../crt/assert-macro--_assert--_wassert.md)|Test for logic error|[System::Diagnostics::Debug::Assert](https://msdn.microsoft.com/en-us/library/system.diagnostics.debug.assert.aspx)|  
|[_ASSERT, _ASSERTE](../crt/_assert--_asserte--_assert_expr-macros.md) macros|Similar to `assert`, but only available in the debug versions of the run-time libraries|[System::Diagnostics::Debug::Assert](https://msdn.microsoft.com/en-us/library/system.diagnostics.debug.assert.aspx)|  
|[atexit](../crt/atexit.md)|Schedule routines for execution at program termination|[System::Diagnostics::Process::Exited](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.exited.aspx)|  
|[_beginthread, _beginthreadex](../crt/_beginthread--_beginthreadex.md)|Create a new thread on a Windows operating system process|[System::Threading::Thread::Start](https://msdn.microsoft.com/en-us/library/system.threading.thread.start.aspx)|  
|[_cexit](../crt/_cexit--_c_exit.md)|Perform `exit` termination procedures (such as flushing buffers), then return control to calling program without terminating process|[System::Diagnostics::Process::CloseMainWindow](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.closemainwindow.aspx)|  
|[_c_exit](../crt/_cexit--_c_exit.md)|Perform `_exit` termination procedures, then return control to calling program without terminating process|[System::Diagnostics::Process::CloseMainWindow](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.closemainwindow.aspx)|  
|[_cwait](../crt/_cwait.md)|Wait until another process terminates|[System::Diagnostics::Process::WaitForExit](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.waitforexit.aspx)|  
|[_endthread, _endthreadex](../crt/_endthread--_endthreadex.md)|Terminate a Windows operating system thread|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_execl, _wexecl](../crt/_execl--_wexecl.md)|Execute new process with argument list|[System::Diagnostics::Process Class](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.aspx), [System::Diagnostics::ProcessStartInfo Class](https://msdn.microsoft.com/en-us/library/system.diagnostics.processstartinfo.aspx)|  
|[_execle, _wexecle](../crt/_execle--_wexecle.md)|Execute new process with argument list and given environment|[System::Diagnostics::Process Class](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.aspx), [System::Diagnostics::ProcessStartInfo Class](https://msdn.microsoft.com/en-us/library/system.diagnostics.processstartinfo.aspx)|  
|[_execlp, _wexeclp](../crt/_execlp--_wexeclp.md)|Execute new process using `PATH` variable and argument list|[System::Diagnostics::Process Class](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.aspx), [System::Diagnostics::ProcessStartInfo Class](https://msdn.microsoft.com/en-us/library/system.diagnostics.processstartinfo.aspx)|  
|[_execlpe, _wexeclpe](../crt/_execlpe--_wexeclpe.md)|Execute new process using `PATH` variable, given environment, and argument list|[System::Diagnostics::Process Class](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.aspx), [System::Diagnostics::ProcessStartInfo Class](https://msdn.microsoft.com/en-us/library/system.diagnostics.processstartinfo.aspx)|  
|[_execv, _wexecv](../crt/_execv--_wexecv.md)|Execute new process with argument array|[System::Diagnostics::Process Class](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.aspx), [System::Diagnostics::ProcessStartInfo Class](https://msdn.microsoft.com/en-us/library/system.diagnostics.processstartinfo.aspx)|  
|[_execve, _wexecve](../crt/_execve--_wexecve.md)|Execute new process with argument array and given environment|[System::Diagnostics::Process Class](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.aspx), [System::Diagnostics::ProcessStartInfo Class](https://msdn.microsoft.com/en-us/library/system.diagnostics.processstartinfo.aspx)|  
|[_execvp, _wexecvp](../crt/_execvp--_wexecvp.md)|Execute new process using `PATH` variable and argument array|[System::Diagnostics::Process Class](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.aspx), [System::Diagnostics::ProcessStartInfo Class](https://msdn.microsoft.com/en-us/library/system.diagnostics.processstartinfo.aspx)|  
|[_execvpe, _wexecvpe](../crt/_execvpe--_wexecvpe.md)|Execute new process using `PATH` variable, given environment, and argument array|[System::Diagnostics::Process Class](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.aspx), [System::Diagnostics::ProcessStartInfo Class](https://msdn.microsoft.com/en-us/library/system.diagnostics.processstartinfo.aspx)|  
|[exit](../crt/exit--_exit--_exit.md)|Call functions registered by `atexit` and `_onexit`, flush all buffers, close all open files, and terminate process|[System::Diagnostics::Process::Kill](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.kill.aspx)|  
|[_exit](../crt/exit--_exit--_exit.md)|Terminate process immediately without calling `atexit` or `_onexit` or flushing buffers|[System::Diagnostics::Process::Kill](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.kill.aspx)|  
|[getenv, _wgetenv](../crt/getenv--_wgetenv.md), [getenv_s, _wgetenv_s](../crt/getenv_s--_wgetenv_s.md)|Get value of environment variable|[System::Environment::GetEnvironmentVariable](https://msdn.microsoft.com/en-us/library/system.environment.getenvironmentvariable.aspx)|  
|[_getpid](../crt/_getpid.md)|Get process ID number|[System::Diagnostics::Process::Id](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.id.aspx)|  
|[longjmp](../crt/longjmp.md)|Restore saved stack environment; use it to execute a nonlocal `goto`|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_onexit](../crt/_onexit--_onexit_m.md)|Schedule routines for execution at program termination; use for compatibility with Microsoft C/C++ version 7.0 and earlier|[System::Diagnostics::Process::Exited](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.exited.aspx)|  
|[_pclose](../crt/_pclose.md)|Wait for new command processor and close stream on associated pipe|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[perror, _wperror](../crt/perror--_wperror.md)|Print error message|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_pipe](../crt/_pipe.md)|Create pipe for reading and writing|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_popen, _wpopen](../crt/_popen--_wpopen.md)|Create pipe and execute command|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_putenv, _wputenv](../crt/_putenv--_wputenv.md), [_putenv_s, _wputenv_s](../crt/_putenv_s--_wputenv_s.md)|Add or change value of environment variable|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[raise](../crt/raise.md)|Send signal to calling process|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[setjmp](../crt/setjmp.md)|Save stack environment; use to execute non local `goto`|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[signal](../crt/signal.md)|Handle interrupt signal|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_spawnl, _wspawnl](../crt/_spawnl--_wspawnl.md)|Create and execute new process with specified argument list|[System::Diagnostics::Process Class](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.aspx), [System::Diagnostics::ProcessStartInfo Class](https://msdn.microsoft.com/en-us/library/system.diagnostics.processstartinfo.aspx)|  
|[_spawnle, _wspawnle](../crt/_spawnle--_wspawnle.md)|Create and execute new process with specified argument list and environment|[System::Diagnostics::Process Class](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.aspx), [System::Diagnostics::ProcessStartInfo Class](https://msdn.microsoft.com/en-us/library/system.diagnostics.processstartinfo.aspx)|  
|[_spawnlp, _wspawnlp](../crt/_spawnlp--_wspawnlp.md)|Create and execute new process using `PATH` variable and specified argument list|[System::Diagnostics::Process Class](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.aspx), [System::Diagnostics::ProcessStartInfo Class](https://msdn.microsoft.com/en-us/library/system.diagnostics.processstartinfo.aspx)|  
|[_spawnlpe, _wspawnlpe](../crt/_spawnlpe--_wspawnlpe.md)|Create and execute new process using `PATH` variable, specified environment, and argument list|[System::Diagnostics::Process Class](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.aspx), [System::Diagnostics::ProcessStartInfo Class](https://msdn.microsoft.com/en-us/library/system.diagnostics.processstartinfo.aspx)|  
|[_spawnv, _wspawnv](../crt/_spawnv--_wspawnv.md)|Create and execute new process with specified argument array|[System::Diagnostics::Process Class](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.aspx), [System::Diagnostics::ProcessStartInfo Class](https://msdn.microsoft.com/en-us/library/system.diagnostics.processstartinfo.aspx)|  
|[_spawnve, _wspawnve](../crt/_spawnve--_wspawnve.md)|Create and execute new process with specified environment and argument array|[System::Diagnostics::Process Class](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.aspx), [System::Diagnostics::ProcessStartInfo Class](https://msdn.microsoft.com/en-us/library/system.diagnostics.processstartinfo.aspx)|  
|[_spawnvp, _wspawnvp](../crt/_spawnvp--_wspawnvp.md)|Create and execute new process using `PATH` variable and specified argument array|[System::Diagnostics::Process Class](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.aspx), [System::Diagnostics::ProcessStartInfo Class](https://msdn.microsoft.com/en-us/library/system.diagnostics.processstartinfo.aspx)|  
|[_spawnvpe, _wspawnvpe](../crt/_spawnvpe--_wspawnvpe.md)|Create and execute new process using `PATH` variable, specified environment, and argument array|[System::Diagnostics::Process Class](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.aspx), [System::Diagnostics::ProcessStartInfo Class](https://msdn.microsoft.com/en-us/library/system.diagnostics.processstartinfo.aspx)|  
|[system, _wsystem](../crt/system--_wsystem.md)|Execute operating-system command|[System::Diagnostics::ProcessStartInfo Class](https://msdn.microsoft.com/en-us/library/system.diagnostics.processstartinfo.aspx), [System::Diagnostics::Process Class](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.aspx)|  
  
 In the Windows operating system, the spawned process is equivalent to the spawning process. Any process can use `_cwait` to wait for any other process for which the process ID is known.  
  
 The difference between the `_exec` and `_spawn` families is that a `_spawn` function can return control from the new process to the calling process. In a `_spawn` function, both the calling process and the new process are present in memory unless `_P_OVERLAY` is specified. In an `_exec` function, the new process overlays the calling process, so control cannot return to the calling process unless an error occurs in the attempt to start execution of the new process.  
  
 The differences among the functions in the `_exec` family, as well as among those in the `_spawn` family, involve the method of locating the file to be executed as the new process, the form in which arguments are passed to the new process, and the method of setting the environment, as shown in the following table. Use a function that passes an argument list when the number of arguments is constant or is known at compile time. Use a function that passes a pointer to an array containing the arguments when the number of arguments is to be determined at run time. The information in the following table also applies to the wide-character counterparts of the `_spawn` and `_exec` functions.  
  
### _spawn and _exec Function Families  
  
|Functions|Use PATH variable to locate file|Argument-passing convention|Environment settings|  
|---------------|--------------------------------------|----------------------------------|--------------------------|  
|`_execl, _spawnl`|No|List|Inherited from calling process|  
|`_execle, _spawnle`|No|List|Pointer to environment table for new process passed as last argument|  
|`_execlp, _spawnlp`|Yes|List|Inherited from calling process|  
|`_execlpe, _spawnlpe`|Yes|List|Pointer to environment table for new process passed as last argument|  
|`_execv, _spawnv`|No|Array|Inherited from calling process|  
|`_execve, _spawnve`|No|Array|Pointer to environment table for new process passed as last argument|  
|`_execvp, _spawnvp`|Yes|Array|Inherited from calling process|  
|`_execvpe, _spawnvpe`|Yes|Array|Pointer to environment table for new process passed as last argument|  
  
## See Also  
 [Run-Time Routines by Category](../crt/run-time-routines-by-category.md)