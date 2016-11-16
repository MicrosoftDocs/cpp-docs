---
title: "system, _wsystem | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "system"
  - "_wsystem"
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
  - "api-ms-win-crt-runtime-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_tsystem"
  - "_wsystem"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_wsystem function"
  - "wsystem function"
  - "tsystem function"
  - "_tsystem function"
  - "system function"
  - "commands, executing"
  - "command interpreter"
ms.assetid: 7d3df2b6-f742-49ce-bf52-012b0aee3df5
caps.latest.revision: 17
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
# system, _wsystem
Executes a command.  
  
> [!IMPORTANT]
>  This API cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)]. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
int system(  
   const char *command   
);  
int _wsystem(  
   const wchar_t *command   
);  
```  
  
#### Parameters  
 `command`  
 The command to be executed.  
  
## Return Value  
 If `command` is `NULL` and the command interpreter is found, returns a nonzero value. If the command interpreter is not found, returns 0 and sets `errno` to `ENOENT`. If `command` is not `NULL`, `system` returns the value that is returned by the command interpreter. It returns the value 0 only if the command interpreter returns the value 0. A return value of – 1 indicates an error, and `errno` is set to one of the following values:  
  
 `E2BIG`  
 The argument list (which is system-dependent) is too big.  
  
 `ENOENT`  
 The command interpreter cannot be found.  
  
 `ENOEXEC`  
 The command-interpreter file cannot be executed because the format is not valid.  
  
 `ENOMEM`  
 Not enough memory is available to execute command; or available memory has been corrupted; or a non-valid block exists, which indicates that the process that's making the call was not allocated correctly.  
  
 See [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) for more information about these return codes.  
  
## Remarks  
 The `system` function passes `command` to the command interpreter, which executes the string as an operating-system command. `system` uses the `COMSPEC` and `PATH` environment variables to locate the command-interpreter file CMD.exe. If `command` is `NULL`, the function just checks whether the command interpreter exists.  
  
 You must explicitly flush—by using `fflush` or `_flushall`—or close any stream before you call `system`.  
  
 `_wsystem` is a wide-character version of `system`; the `command` argument to `_wsystem` is a wide-character string. These functions behave identically otherwise.  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tsystem`|`system`|`system`|`_wsystem`|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`system`|\<process.h> or \<stdlib.h>|  
|`_wsystem`|\<process.h> or \<stdlib.h> or \<wchar.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## Example  
 This example uses `system` to TYPE a text file.  
  
```  
// crt_system.c  
  
#include <process.h>  
  
int main( void )  
{  
   system( "type crt_system.txt" );  
}  
```  
  
## Input: crt_system.txt  
  
```  
Line one.  
Line two.  
```  
  
### Output  
  
```  
Line one.  
Line two.  
```  
  
## .NET Framework Equivalent  
  
-   [System::Diagnostics::ProcessStartInfo Class](https://msdn.microsoft.com/en-us/library/system.diagnostics.processstartinfo.aspx)  
  
-   [System::Diagnostics::Process Class](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.aspx)  
  
## See Also  
 [Process and Environment Control](../../c-runtime-library/process-and-environment-control.md)   
 [_exec, _wexec Functions](../../c-runtime-library/exec-wexec-functions.md)   
 [exit, _Exit, _exit](../../c-runtime-library/reference/exit-exit-exit.md)   
 [_flushall](../../c-runtime-library/reference/flushall.md)   
 [_spawn, _wspawn Functions](../../c-runtime-library/spawn-wspawn-functions.md)