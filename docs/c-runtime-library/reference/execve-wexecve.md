---
title: "_execve, _wexecve | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_execve"
  - "_wexecve"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
  - "api-ms-win-crt-process-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "wexecve"
  - "_wexecve"
  - "_execve"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "execve function"
  - "wexecve function"
  - "_execve function"
  - "_wexecve function"
ms.assetid: 950d4802-a9c3-4f32-8145-a0119dd1d596
caps.latest.revision: 22
author: "corob-msft"
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
# _execve, _wexecve
Loads and executes new child processes.  
  
> [!IMPORTANT]
>  This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
intptr_t _execve(   
   const char *cmdname,  
   const char *const *argv,  
   const char *const *envp   
);  
intptr_t _wexecve(   
   const wchar_t *cmdname,  
   const wchar_t *const *argv,  
   const wchar_t *const *envp   
);  
```  
  
#### Parameters  
 `cmdname`  
 Path of the file to execute.  
  
 `argv`  
 Array of pointers to parameters.  
  
 `envp`  
 Array of pointers to environment settings.  
  
## Return Value  
 If successful, these functions do not return to the calling process. A return value of –1 indicates an error, in which case the `errno` global variable is set.  
  
|`errno` value|Description|  
|-------------------|-----------------|  
|`E2BIG`|The space required for the arguments and environment settings exceeds 32 KB.|  
|`EACCES`|The specified file has a locking or sharing violation.|  
|`EINVAL`|Invalid parameter.|  
|`EMFILE`|Too many files open (the specified file must be opened to determine whether it is executable).|  
|`ENOENT`|The file or path not found.|  
|`ENOEXEC`|The specified file is not executable or has an invalid executable-file format.|  
|`ENOMEM`|Not enough memory is available to execute the new process; the available memory has been corrupted; or an invalid block exists, indicating that the calling process was not allocated properly.|  
  
 For more information about these and other return codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Remarks  
 Each of these functions loads and executes a new process, passing an array of pointers to command-line arguments and an array of pointers to environment settings.  
  
 `_execve` and `_wexecve` validate their parameters. If `cmdname` is a null pointer, or if `argv` is a null pointer, pointer to an empty array, or if the array contains an empty string as the first argument, these functions invoke the invalid parameter handler as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions set `errno` to `EINVAL` and return -1. No process is launched.  
  
## Requirements  
  
|Function|Required header|Optional header|  
|--------------|---------------------|---------------------|  
|`_execve`|\<process.h>|\<errno.h>|  
|`_wexecve`|\<process.h> or \<wchar.h>|\<errno.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## Example  
 See the example in [_exec, _wexec Functions](../../c-runtime-library/exec-wexec-functions.md).  
  
## .NET Framework Equivalent  
  
-   [System::Diagnostics::Process Class](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.aspx)  
  
-   [System::Diagnostics::ProcessStartInfo Class](https://msdn.microsoft.com/en-us/library/system.diagnostics.processstartinfo.aspx)  
  
## See Also  
 [Process and Environment Control](../../c-runtime-library/process-and-environment-control.md)   
 [_exec, _wexec Functions](../../c-runtime-library/exec-wexec-functions.md)   
 [abort](../../c-runtime-library/reference/abort.md)   
 [atexit](../../c-runtime-library/reference/atexit.md)   
 [exit, _Exit, _exit](../../c-runtime-library/reference/exit-exit-exit.md)   
 [_onexit, _onexit_m](../../c-runtime-library/reference/onexit-onexit-m.md)   
 [_spawn, _wspawn Functions](../../c-runtime-library/spawn-wspawn-functions.md)   
 [system, _wsystem](../../c-runtime-library/reference/system-wsystem.md)