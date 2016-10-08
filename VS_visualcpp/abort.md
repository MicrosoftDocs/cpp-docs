---
title: "abort"
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
  - abort
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
  - api-ms-win-crt-runtime-l1-1-0.dll
apitype: DLLExport
ms.assetid: a797783b-40ed-4bdb-a2cd-14ffede39e8a
caps.latest.revision: 22
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# abort
Aborts the current process and returns an error code.  
  
> [!NOTE]
>  Do not use this method to shut down a Windows 8.x Store app, except in testing or debugging scenarios. Programmatic or UI ways to close a Windows 8.x Store app are not permitted according to the [Windows 8 app certification requirements](http://go.microsoft.com/fwlink/?LinkId=262889). For more information, see [Application lifecycle (Windows Store apps)](http://go.microsoft.com/fwlink/?LinkId=262853).  
  
## Syntax  
  
```  
void abort( void );  
```  
  
## Return Value  
 `abort` does not return control to the calling process. By default, it checks for an abort signal handler and raises `SIGABRT` if one is set. Then `abort` terminates the current process and returns an exit code to the parent process.  
  
## Remarks  
 **Microsoft Specific**  
  
 By default, when an app is built with the debug runtime library, the `abort` routine displays an error message before `SIGABRT` is raised. For console apps running in console mode, the message is sent to `STDERR`. Windows desktop apps and console apps running in windowed mode display the message in a message box. To suppress the message, use [_set_abort_behavior](../VS_visualcpp/_set_abort_behavior.md) to clear the `_WRITE_ABORT_MSG` flag. The message displayed depends on the version of the runtime environment used. For applications built by using the most recent version of Visual C++, the message resembles this:  
  
 `R6010`  
  
 `- abort() has been called`  
  
 In previous versions of the C runtime library, this message was displayed:  
  
 "`This application has requested the Runtime to terminate it in an unusual way. Please contact the application's support team for more information.`"  
  
 When the program is compiled in debug mode, the message box displays options to **Abort**, **Retry**, or **Ignore**. If the user chooses **Abort**, the program terminates immediately and returns an exit code of 3. If the user chooses **Retry**, a debugger is invoked for just-in-time debugging, if available. If the user chooses **Ignore**, `abort` continues normal processing.  
  
 In both retail and debug builds, `abort` then checks whether an abort signal handler is set. If a non-default signal handler is set, `abort` calls `raise(SIGABRT)`. Use the [signal](../VS_visualcpp/signal.md) function to associate an abort signal handler function with the `SIGABRT` signal. You can perform custom actions—for example, clean up resources or log information—and terminate the app with your own error code in the handler function. If no custom signal handler is defined, `abort` does not raise the `SIGABRT` signal.  
  
 By default, in non-debug builds of desktop or console apps, `abort` then invokes the Windows error reporting mechanism (Dr. Watson) to report failures to Microsoft. This behavior can be enabled or disabled by calling `_set_abort_behavior` and setting or masking the `_CALL_REPORTFAULT` flag. When the flag is set, Windows displays a message box that has text something like "A problem caused the program to stop working correctly." The user can choose to invoke a debugger with a **Debug** button, or choose the **Close program** button to terminate the app with an error code that's defined by the operating system.  
  
 If the Windows error reporting handler is not invoked, then `abort` calls [_exit](../VS_visualcpp/exit--_Exit--_exit.md) to terminate the process with exit code 3 and returns control to the parent process or the operating system. `_exit` does not flush stream buffers or do `atexit`/`_onexit` processing.  
  
 For more information about CRT debugging, see [CRT Debugging Techniques](../Topic/CRT%20Debugging%20Techniques.md).  
  
 **End Microsoft Specific**  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`abort`|<process.h> or <stdlib.h>|  
  
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
  
 **File could not be opened: No such file or directory**   
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Using abort](../VS_visualcpp/Using-abort.md)   
 [abort Function](../VS_visualcpp/abort-Function--C-.md)   
 [Process and Environment Control](../VS_visualcpp/Process-and-Environment-Control.md)   
 [_exec, _wexec Functions](../VS_visualcpp/_exec--_wexec-Functions.md)   
 [exit, _Exit, _exit](../VS_visualcpp/exit--_Exit--_exit.md)   
 [raise](../VS_visualcpp/raise.md)   
 [signal](../VS_visualcpp/signal.md)   
 [_spawn, _wspawn Functions](../VS_visualcpp/_spawn--_wspawn-Functions.md)   
 [_DEBUG](../VS_visualcpp/_DEBUG.md)   
 [_set_abort_behavior](../VS_visualcpp/_set_abort_behavior.md)