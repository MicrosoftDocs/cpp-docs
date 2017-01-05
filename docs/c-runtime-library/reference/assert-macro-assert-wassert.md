---
title: "assert Macro, _assert, _wassert | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "assert"
  - "_assert"
  - "_wassert"
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
  - "assert"
  - "_assert"
  - "_wassert"
  - "assert/_wassert"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "aborting programs"
  - "assert function"
  - "assert macro"
ms.assetid: a9ca031a-648b-47a6-bdf1-65fc7399dd40
caps.latest.revision: 23
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
# assert Macro, _assert, _wassert
Evaluates an expression and, when the result is `false`, prints a diagnostic message and aborts the program.  
  
## Syntax  
  
```  
assert(   
   expression   
);  
void _assert(  
   char const* message,  
   char const* filename,  
   unsigned line  
);  
void _wassert(  
   wchar_t const* message,  
   wchar_t const* filename,  
   unsigned line  
);  
```  
  
#### Parameters  
 `expression`  
 A scalar expression (including pointer expressions) that evaluates to nonzero (`true`) or 0 (`false`).  
  
 `message`  
 The message to display.  
  
 `filename`  
 The name of the source file the assertion failed in.  
  
 `line`  
 The line number in the source file of the failed assertion.  
  
## Remarks  
 The `assert` macro is typically used to identify logic errors during program development. Use it to stop program execution when unexpected conditions occur by implementing the `expression` argument to evaluate to `false` only when the program is operating incorrectly. Assertion checks can be turned off at compile time by defining the macro `NDEBUG`. You can turn off the `assert` macro without modifying your source files by using a **/DNDEBUG** command-line option. You can turn off the `assert` macro in your source code by using a `#define NDEBUG` directive before \<assert.h> is included.  
  
 The `assert` macro prints a diagnostic message when `expression` evaluates to `false` (0) and calls [abort](../../c-runtime-library/reference/abort.md) to terminate program execution. No action is taken if `expression` is `true` (nonzero). The diagnostic message includes the failed expression, the name of the source file and line number where the assertion failed.  
  
 The diagnostic message is printed in wide characters. Thus, it will work as expected even if there are Unicode characters in the expression.  
  
 The destination of the diagnostic message depends on the type of application that called the routine. Console applications always receive the message through `stderr`. In a Windows-based application, `assert` calls the Windows [MessageBox](http://msdn.microsoft.com/library/windows/desktop/ms645505) function to create a message box to display the message along with an **OK** button. When the user clicks **OK**, the program aborts immediately.  
  
 When the application is linked with a debug version of the run-time libraries, `assert` creates a message box with three buttons: **Abort**, **Retry**, and **Ignore**. If the user clicks **Abort**, the program aborts immediately. If the user clicks **Retry**, the debugger is called and the user can debug the program if just-in-time (JIT) debugging is enabled. If the user clicks **Ignore**, `assert` continues with its normal execution: creating the message box with the **OK** button. Note that clicking **Ignore** when an error condition exists can result in undefined behavior.  
  
 For more information about CRT debugging, see [CRT Debugging Techniques](/visualstudio/debugger/crt-debugging-techniques).  
  
 The `_assert` and `_wassert` functions are internal CRT functions. They help minimize the code required in your object files to support assertions. We do not recommend that you call these functions directly.  
  
 The `assert` macro is enabled in both the release and debug versions of the C run-time libraries when `NDEBUG` is not defined. When `NDEBUG` is defined, the macro is available but does not evaluate its argument and has no effect. When it is enabled, the `assert` macro calls `_wassert` for its implementation. Other assertion macros, [_ASSERT](../../c-runtime-library/reference/assert-asserte-assert-expr-macros.md), [_ASSERTE](../../c-runtime-library/reference/assert-asserte-assert-expr-macros.md) and [_ASSERT_EXPR](../../c-runtime-library/reference/assert-asserte-assert-expr-macros.md), are also available, but they only evaluate the expressions passed to them when the [_DEBUG](../../c-runtime-library/debug.md) macro has been defined and when they are in code linked with the debug version of the C run-time libraries.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`assert`, `_wassert`|\<assert.h>|  
  
 The signature of the `_assert` function is not available in a header file. The signature of the `_wassert` function is only available when the `NDEBUG` macro is not defined.  
  
## Example  
 In this program, the `analyze_string` function uses the `assert` macro to test several conditions related to string and length. If any of the conditions fails, the program prints a message indicating what caused the failure.  
  
```  
// crt_assert.c  
// compile by using: cl /W4 crt_assert.c  
#include <stdio.h>  
#include <assert.h>  
#include <string.h>  
  
void analyze_string( char *string );   // Prototype  
  
int main( void )  
{  
   char  test1[] = "abc", *test2 = NULL, test3[] = "";  
  
   printf ( "Analyzing string '%s'\n", test1 ); fflush( stdout );  
   analyze_string( test1 );  
   printf ( "Analyzing string '%s'\n", test2 ); fflush( stdout );  
   analyze_string( test2 );  
   printf ( "Analyzing string '%s'\n", test3 ); fflush( stdout );  
   analyze_string( test3 );  
}  
  
// Tests a string to see if it is NULL,   
// empty, or longer than 0 characters.  
void analyze_string( char * string )  
{  
   assert( string != NULL );        // Cannot be NULL  
   assert( *string != '\0' );       // Cannot be empty  
   assert( strlen( string ) > 2 );  // Length must exceed 2  
}  
```  
  
 The program generates this output:  
  
```Output  
Analyzing string 'abc'  
Analyzing string '(null)'  
Assertion failed: string != NULL, file crt_assert.c, line 25  
```  
  
 After the assertion failure, depending on the version of the operating system and run-time library, you may see a message box that contains something like the following:  
  
```Output  
A problem caused the program to stop working correctly. Windows will close the program and notify you if a solution is available.  
```  
  
 If a debugger is installed, choose the **Debug** button to start the debugger, or **Close program** to exit.  
  
## .NET Framework Equivalent  
 [System::Diagnostics::Debug::Assert](https://msdn.microsoft.com/en-us/library/system.diagnostics.debug.assert.aspx)  
  
## See Also  
 [Error Handling](../../c-runtime-library/error-handling-crt.md)   
 [Process and Environment Control](../../c-runtime-library/process-and-environment-control.md)   
 [abort](../../c-runtime-library/reference/abort.md)   
 [raise](../../c-runtime-library/reference/raise.md)   
 [signal](../../c-runtime-library/reference/signal.md)   
 [_ASSERT, _ASSERTE, _ASSERT_EXPR Macros](../../c-runtime-library/reference/assert-asserte-assert-expr-macros.md)   
 [_DEBUG](../../c-runtime-library/debug.md)