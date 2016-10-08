---
title: "_spawnv, _wspawnv"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
  - C
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
apiname: 
  - _wspawnv
  - _spawnv
apilocation: 
  - msvcrt.dll
  - msvcr80.dll
  - msvcr90.dll
  - msvcr100.dll
  - msvcr100_clr0400.dll
  - msvcr110.dll
  - msvcr110_clr0400.dll
  - msvcr120.dll
  - msvcr120_clr0400.dll
  - ucrtbase.dll
  - api-ms-win-crt-process-l1-1-0.dll
apitype: DLLExport
ms.assetid: 72360ef4-dfa9-44c1-88c1-b3ecb660aa7d
caps.latest.revision: 17
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# _spawnv, _wspawnv
Creates and executes a new process.  
  
> [!IMPORTANT]
>  This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
intptr_t _spawnv(  
   int mode,  
   const char *cmdname,  
   const char *const *argv   
);  
intptr_t _wspawnv(  
   int mode,  
   const wchar_t *cmdname,  
   const wchar_t *const *argv   
);  
```  
  
#### Parameters  
 `mode`  
 Execution mode for the calling process.  
  
 `cmdname`  
 Path of the file to be executed.  
  
 `argv`  
 Array of pointers to arguments. The argument `argv`[0] is usually a pointer to a path in real mode or to the program name in protected mode, and `argv`[1] through `argv`[`n`] are pointers to the character strings forming the new argument list. The argument `argv`[`n` +1] must be a `NULL` pointer to mark the end of the argument list.  
  
## Return Value  
 The return value from a synchronous `_spawnv` or `_wspawnv` (`_P_WAIT` specified for `mode`) is the exit status of the new process. The return value from an asynchronous `_spawnv` or `_wspawnv` (`_P_NOWAIT` or `_P_NOWAITO` specified for `mode`) is the process handle. The exit status is 0 if the process terminated normally. You can set the exit status to a nonzero value if the spawned process specifically calls the `exit` routine with a nonzero argument. If the new process did not explicitly set a positive exit status, a positive exit status indicates an abnormal exit with an abort or an interrupt. A return value of –1 indicates an error (the new process is not started). In this case, `errno` is set to one of the following values.  
  
 `E2BIG`  
 Argument list exceeds 1024 bytes.  
  
 `EINVAL`  
 `mode` argument is invalid.  
  
 `ENOENT`  
 File or path is not found.  
  
 `ENOEXEC`  
 Specified file is not executable or has invalid executable-file format.  
  
 `ENOMEM`  
 Not enough memory is available to execute the new process.  
  
 For more information about these and other return codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../VS_visualcpp/errno--_doserrno--_sys_errlist--and-_sys_nerr.md).  
  
## Remarks  
 Each of these functions creates and executes a new process, passing an array of pointers to command-line arguments.  
  
 These functions validate their parameters. If either `cmdname` or `argv` is a null pointer, or if `argv` points to null pointer, or `argv[0]` is an empty string, the invalid parameter handler is invoked, as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md). If execution is allowed to continue, these functions set `errno` to `EINVAL`, and return -1. No new process is spawned.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_spawnv`|<stdio.h> or <process.h>|  
|`_wspawnv`|<stdio.h> or <wchar.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## Example  
 See the example in [_spawn, _wspawn Functions](../VS_visualcpp/_spawn--_wspawn-Functions.md).  
  
## .NET Framework Equivalent  
  
-   [System::Diagnostics::Process Class](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.aspx)  
  
-   [System::Diagnostics::ProcessStartInfo Class](https://msdn.microsoft.com/en-us/library/system.diagnostics.processstartinfo.aspx)  
  
## See Also  
 [Process and Environment Control](../VS_visualcpp/Process-and-Environment-Control.md)   
 [_spawn, _wspawn Functions](../VS_visualcpp/_spawn--_wspawn-Functions.md)   
 [abort](../VS_visualcpp/abort.md)   
 [atexit](../VS_visualcpp/atexit.md)   
 [_exec, _wexec Functions](../VS_visualcpp/_exec--_wexec-Functions.md)   
 [exit, _Exit, _exit](../VS_visualcpp/exit--_Exit--_exit.md)   
 [_flushall](../VS_visualcpp/_flushall.md)   
 [_getmbcp](../VS_visualcpp/_getmbcp.md)   
 [_onexit, _onexit_m](../VS_visualcpp/_onexit--_onexit_m.md)   
 [_setmbcp](../VS_visualcpp/_setmbcp.md)   
 [system, _wsystem](../VS_visualcpp/system--_wsystem.md)