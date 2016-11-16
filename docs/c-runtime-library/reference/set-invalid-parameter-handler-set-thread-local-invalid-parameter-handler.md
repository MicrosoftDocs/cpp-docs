---
title: "_set_invalid_parameter_handler, _set_thread_local_invalid_parameter_handler | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_set_invalid_parameter_handler"
  - "_set_thread_local_invalid_parameter_handler"
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
  - "set_invalid_parameter_handler"
  - "_set_invalid_parameter_handler"
  - "_set_thread_local_invalid_parameter_handler"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "invalid parameter handler"
  - "set_invalid_parameter_handler function"
  - "_set_invalid_parameter_handler function"
  - "_set_thread_local_invalid_parameter_handler function"
ms.assetid: c0e67934-1a41-4016-ad8e-972828f3ac11
caps.latest.revision: 27
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.mt: 
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
# _set_invalid_parameter_handler, _set_thread_local_invalid_parameter_handler
Sets a function to be called when the CRT detects an invalid argument.  
  
## Syntax  
  
```  
_invalid_parameter_handler _set_invalid_parameter_handler(  
   _invalid_parameter_handler pNew  
);  
_invalid_parameter_handler _set_thread_local_invalid_parameter_handler(  
   _invalid_parameter_handler pNew  
);  
```  
  
#### Parameters  
 [in] `pNew`  
 The function pointer to the new invalid parameter handler.  
  
## Return Value  
 A pointer to the invalid parameter handler before the call.  
  
## Remarks  
 Many C runtime functions check the validity of arguments passed to them. If an invalid argument is passed, the function can set the `errno` error number or return an error code. In such cases, the invalid parameter handler is also called. The C runtime supplies a default global invalid parameter handler that terminates the program and displays a runtime error message. You can use the `_set_invalid_parameter_handler` to set your own function as the global invalid parameter handler. The C runtime also supports a thread-local invalid parameter handler. If a thread-local parameter handler is set in a thread by using `_set_thread_local_invalid_parameter_handler`, the C runtime functions called from the thread use that handler instead of the global handler. Only one function can be specified as the global invalid argument handler at a time. Only one function can be specified as the thread-local invalid argument handler per thread, but different threads can have different thread-local handlers. This allows you to change the handler used in one part of your code without affecting the behavior of other threads.  
  
 When the runtime calls the invalid parameter function, it usually means that a nonrecoverable error occurred. The invalid parameter handler function you supply should save any data it can and then abort. It should not return control to the main function unless you are confident that the error is recoverable.  
  
 The invalid parameter handler function must have the following prototype:  
  
```c  
void _invalid_parameter(  
   const wchar_t * expression,  
   const wchar_t * function,   
   const wchar_t * file,   
   unsigned int line,  
   uintptr_t pReserved  
);  
```  
  
 The `expression` argument is a wide string representation of the argument expression that raised the error. The `function` argument is the name of the CRT function that received the invalid argument. The `file` argument is the name of the CRT source file that contains the function. The `line` argument is the line number in that file. The last argument is reserved. The parameters all have the value `NULL` unless a debug version of the CRT library is used.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_set_invalid_parameter_handler`, `_set_thread_local_invalid_parameter_handler`|C: \<stdlib.h><br /><br /> C++: \<cstdlib> or \<stdlib.h>|  
  
 The `_set_invalid_parameter_handler` and `_set_thread_local_invalid_parameter_handler` functions are Microsoft specific. For compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## Example  
 In the following example, an invalid parameter error handler is used to print the function that received the invalid parameter and the file and line in CRT sources. When the debug CRT library is used, invalid parameter errors also raise an assertion, which is disabled in this example using [_CrtSetReportMode](../../c-runtime-library/reference/crtsetreportmode.md).  
  
```c  
// crt_set_invalid_parameter_handler.c  
// compile with: /Zi /MTd  
#include <stdio.h>  
#include <stdlib.h>  
#include <crtdbg.h>  // For _CrtSetReportMode  
  
void myInvalidParameterHandler(const wchar_t* expression,  
   const wchar_t* function,   
   const wchar_t* file,   
   unsigned int line,   
   uintptr_t pReserved)  
{  
   wprintf(L"Invalid parameter detected in function %s."  
            L" File: %s Line: %d\n", function, file, line);  
   wprintf(L"Expression: %s\n", expression);  
   abort();  
}  
  
int main( )  
{  
   char* formatString;  
  
   _invalid_parameter_handler oldHandler, newHandler;  
   newHandler = myInvalidParameterHandler;  
   oldHandler = _set_invalid_parameter_handler(newHandler);  
  
   // Disable the message box for assertions.  
   _CrtSetReportMode(_CRT_ASSERT, 0);  
  
   // Call printf_s with invalid parameters.  
  
   formatString = NULL;  
   printf(formatString);  
}  
```  
  
```Output  
Invalid parameter detected in function common_vfprintf. File: minkernel\crts\ucrt\src\appcrt\stdio\output.cpp Line: 32  
Expression: format != nullptr  
```  
  
## See Also  
 [_get_invalid_parameter_handler, _get_thread_local_invalid_parameter_handler](../../c-runtime-library/reference/get-invalid-parameter-handler-get-thread-local-invalid-parameter-handler.md)   
 [Security-Enhanced Versions of CRT Functions](../../c-runtime-library/security-enhanced-versions-of-crt-functions.md)   
 [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md)