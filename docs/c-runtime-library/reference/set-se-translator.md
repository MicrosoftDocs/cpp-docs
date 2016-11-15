---
title: "_set_se_translator | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_set_se_translator"
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
apitype: "DLLExport"
f1_keywords: 
  - "_set_se_translator"
  - "set_se_translator"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "set_se_translator function"
  - "exception handling, changing"
  - "_set_se_translator function"
ms.assetid: 280842bc-d72a-468b-a565-2d3db893ae0f
caps.latest.revision: 21
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
# _set_se_translator
Handles Win32 exceptions (C structured exceptions) as C++ typed exceptions.  
  
## Syntax  
  
```  
_se_translator_function _set_se_translator(  
   _se_translator_function seTransFunction  
);  
```  
  
#### Parameters  
 `seTransFunction`  
 Pointer to a C structured exception translator function that you write.  
  
## Return Value  
 Returns a pointer to the previous translator function registered by `_set_se_translator`, so that the previous function can be restored later. If no previous function has been set, the return value can be used to restore the default behavior; this value can be NULL.  
  
## Remarks  
 The `_set_se_translator` function provides a way to handle Win32 exceptions (C structured exceptions) as C++ typed exceptions. To allow each C exception to be handled by a C++ `catch` handler, first define a C exception wrapper class that can be used, or derived from, to attribute a specific class type to a C exception. To use this class, install a custom C exception translator function that is called by the internal exception-handling mechanism each time a C exception is raised. Within your translator function, you can throw any typed exception that can be caught by a matching C++ `catch` handler.  
  
 You must use [/EHa](../../build/reference/eh-exception-handling-model.md) when using `_set_se_translator`.  
  
 To specify a custom translation function, call `_set_se_translator` with the name of your translation function as its argument. The translator function that you write is called once for each function invocation on the stack that has `try` blocks. There is no default translator function.  
  
 Your translator function should do no more than throw a C++ typed exception. If it does anything in addition to throwing (such as writing to a log file, for example) your program might not behave as expected, because the number of times the translator function is invoked is platform-dependent.  
  
 In a multithreaded environment, translator functions are maintained separately for each thread. Each new thread needs to install its own translator function. Thus, each thread is in charge of its own translation handling. `_set_se_translator` is specific to one thread; another DLL can install a different translation function.  
  
 The `seTransFunction` function that you write must be a native-compiled function (not compiled with /clr). It must take an unsigned integer and a pointer to a Win32 `_EXCEPTION_POINTERS` structure as arguments. The arguments are the return values of calls to the Win32 API `GetExceptionCode` and `GetExceptionInformation` functions, respectively.  
  
```  
typedef void (*_se_translator_function)(unsigned int, struct _EXCEPTION_POINTERS* );  
```  
  
 For `_set_se_translator`, there are implications when dynamically linking to the CRT; another DLL in the process might call `_set_se_translator` and replace your handler with its own.  
  
 When using `_set_se_translator` from managed code (code compiled with /clr) or mixed native and managed code, be aware that the translator affects exceptions generated in native code only. Any managed exceptions generated in managed code (such as when raising `System::Exception`) are not routed through the translator function. Exceptions raised in managed code using the Win32 function `RaiseException` or caused by a system exception like a divide by zero exception are routed through the translator.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_set_se_translator`|\<eh.h>|  
  
 The functionality provided by `_set_se_translator` is not available in code compiled with the [/clr:pure](../../build/reference/clr-common-language-runtime-compilation.md) compiler option.  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Example  
  
```  
// crt_settrans.cpp  
// compile with: /EHa  
#include <stdio.h>  
#include <windows.h>  
#include <eh.h>  
  
void SEFunc();  
void trans_func( unsigned int, EXCEPTION_POINTERS* );  
  
class SE_Exception  
{  
private:  
    unsigned int nSE;  
public:  
    SE_Exception() {}  
    SE_Exception( unsigned int n ) : nSE( n ) {}  
    ~SE_Exception() {}  
    unsigned int getSeNumber() { return nSE; }  
};  
int main( void )  
{  
    try  
    {  
        _set_se_translator( trans_func );  
        SEFunc();  
    }  
    catch( SE_Exception e )  
    {  
        printf( "Caught a __try exception with SE_Exception.\n" );  
    }  
}  
void SEFunc()  
{  
    __try  
    {  
        int x, y=0;  
        x = 5 / y;  
    }  
    __finally  
    {  
        printf( "In finally\n" );  
    }  
}  
void trans_func( unsigned int u, EXCEPTION_POINTERS* pExp )  
{  
    printf( "In trans_func.\n" );  
    throw SE_Exception();  
}  
```  
  
```Output  
In trans_func.  
In finally  
Caught a __try exception with SE_Exception.  
```  
  
## Example  
 Although the functionality provided by `_set_se_translator` is not available in managed code, it is possible to use this mapping in native code, even if that native code is in a compilation under the `/clr` switch, as long as the native code is indicated using `#pragma unmanaged`. If a structured exception is being thrown in managed code that is to be mapped, the code that generates and handles the exception must be marked with the `pragma`. The following code shows a possible use. For more information, see [Pragma Directives and the __Pragma Keyword](../../preprocessor/pragma-directives-and-the-pragma-keyword.md).  
  
```  
// crt_set_se_translator_clr.cpp  
// compile with: /clr  
#include <windows.h>  
#include <eh.h>  
#include <assert.h>  
#include <stdio.h>  
  
int thrower_func(int i) {  
   int j = i/0;  
  return 0;  
}  
  
class CMyException{  
};  
  
#pragma unmanaged  
void my_trans_func(unsigned int u, PEXCEPTION_POINTERS pExp )  
{  
printf("Translating the structured exception to a C++"  
             " exception.\n");  
throw CMyException();  
}  
  
void DoTest()  
{  
    try  
    {  
      thrower_func(10);  
    }   
  
    catch(CMyException e)  
    {  
printf("Caught CMyException.\n");  
    }  
    catch(...)  
    {  
      printf("Caught unexpected SEH exception.\n");  
    }  
}  
#pragma managed  
  
int main(int argc, char** argv) {  
    _set_se_translator(my_trans_func);  
    DoTest();  
    return 0;  
}  
```  
  
```Output  
Translating the structured exception to a C++ exception.  
Caught CMyException.  
```  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [Exception Handling Routines](../../c-runtime-library/exception-handling-routines.md)   
 [set_terminate](../../c-runtime-library/reference/set-terminate-crt.md)   
 [set_unexpected](../../c-runtime-library/reference/set-unexpected-crt.md)   
 [terminate](../../c-runtime-library/reference/terminate-crt.md)   
 [unexpected](../../c-runtime-library/reference/unexpected-crt.md)