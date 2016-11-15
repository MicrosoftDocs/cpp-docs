---
title: "abort | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "abort"
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
  - "Abort"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "aborting current process"
  - "abort function"
  - "processes, aborting"
ms.assetid: a797783b-40ed-4bdb-a2cd-14ffede39e8a
caps.latest.revision: 24
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# abort
Aborts the current process and returns an error code.  
  
> [!NOTE]
>  Do not use this method to shut down a [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)] app, except in testing or debugging scenarios. Programmatic or UI ways to close a [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)] app are not permitted according to the [Windows 8 app certification requirements](http://go.microsoft.com/fwlink/?LinkId=262889). For more information, see [Application lifecycle (Windows Store apps)](http://go.microsoft.com/fwlink/?LinkId=262853).  
  
## Syntax  
  
```  
void abort( void );  
```  
  
## Return Value  
 `abort` does not return control to the calling process. By default, it checks for an abort signal handler and raises `SIGABRT` if one is set. Then `abort` terminates the current process and returns an exit code to the parent process.  
  
## Remarks  
 **Microsoft Specific**  
  
 By default, when an app is built with the debug runtime library, the `abort` routine displays an error message before `SIGABRT` is raised. For console apps running in console mode, the message is sent to `STDERR`. Windows desktop apps and console apps running in windowed mode display the message in a message box. To suppress the message, use [_set_abort_behavior](../../c-runtime-library/reference/set-abort-behavior.md) to clear the `_WRITE_ABORT_MSG` flag. The message displayed depends on the version of the runtime environment used. For applications built by using the most recent version of Visual C++, the message resembles this:  
  
 `R6010`  
  
 `- abort() has been called`  
  
 In previous versions of the C runtime library, this message was displayed:  
  
 "`This application has requested the Runtime to terminate it in an unusual way. Please contact the application's support team for more information.`"  
  
 When the program is compiled in debug mode, the message box displays options to **Abort**, **Retry**, or **Ignore**. If the user chooses **Abort**, the program terminates immediately and returns an exit code of 3. If the user chooses **Retry**, a debugger is invoked for just-in-time debugging, if available. If the user chooses **Ignore**, `abort` continues normal processing.  
  
 In both retail and debug builds, `abort` then checks whether an abort signal handler is set. If a non-default signal handler is set, `abort` calls `raise(SIGABRT)`. Use the [signal](../../c-runtime-library/reference/signal.md) function to associate an abort signal handler function with the `SIGABRT` signal. You can perform custom actions—for example, clean up resources or log information—and terminate the app with your own error code in the handler function. If no custom signal handler is defined, `abort` does not raise the `SIGABRT` signal.  
  
 By default, in non-debug builds of desktop or console apps, `abort` then invokes the Windows error reporting mechanism (Dr. Watson) to report failures to Microsoft. This behavior can be enabled or disabled by calling `_set_abort_behavior` and setting or masking the `_CALL_REPORTFAULT` flag. When the flag is set, Windows displays a message box that has text something like "A problem caused the program to stop working correctly." The user can choose to invoke a debugger with a **Debug** button, or choose the **Close program** button to terminate the app with an error code that's defined by the operating system.  
  
 If the Windows error reporting handler is not invoked, then `abort` calls [_exit](../../c-runtime-library/reference/exit-exit-exit.md) to terminate the process with exit code 3 and returns control to the parent process or the operating system. `_exit` does not flush stream buffers or do `atexit`/`_onexit` processing.  
  
 For more information about CRT debugging, see [CRT Debugging Techniques](/visualstudio/debugger/crt-debugging-techniques).  
  
 **End Microsoft Specific**  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`abort`|\<process.h> or \<stdlib.h>|  
  
## Example  
 The following program tries to open a file and aborts if the attempt fails.  
  
```c  
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
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [Using abort](../../cpp/using-abort.md)   
 [abort Function](../../c-language/abort-function-c.md)   
 [Process and Environment Control](../../c-runtime-library/process-and-environment-control.md)   
 [_exec, _wexec Functions](../../c-runtime-library/exec-wexec-functions.md)   
 [exit, _Exit, _exit](../../c-runtime-library/reference/exit-exit-exit.md)   
 [raise](../../c-runtime-library/reference/raise.md)   
 [signal](../../c-runtime-library/reference/signal.md)   
 [_spawn, _wspawn Functions](../../c-runtime-library/spawn-wspawn-functions.md)   
 [_DEBUG](../../c-runtime-library/debug.md)   
 [_set_abort_behavior](../../c-runtime-library/reference/set-abort-behavior.md)