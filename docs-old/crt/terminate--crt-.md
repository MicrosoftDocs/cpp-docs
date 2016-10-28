---
title: "terminate (CRT)"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
apiname: 
  - "terminate"
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
  - "terminate"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "terminate function"
  - "exception handling, termination"
ms.assetid: 90e67402-08e9-4b2a-962c-66a8afd3ccb4
caps.latest.revision: 10
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
# terminate (CRT)
Calls `abort` or a function you specify using `set_terminate`.  
  
## Syntax  
  
```  
void terminate( void );  
```  
  
## Remarks  
 The `terminate` function is used with C++ exception handling and is called in the following cases:  
  
-   A matching catch handler cannot be found for a thrown C++ exception.  
  
-   An exception is thrown by a destructor function during stack unwind.  
  
-   The stack is corrupted after throwing an exception.  
  
 `terminate` calls `abort` by default. You can change this default by writing your own termination function and calling `set_terminate` with the name of your function as its argument. `terminate` calls the last function given as an argument to `set_terminate`. For more information, see [Unhandled C++ Exceptions](../cpp/unhandled-c---exceptions.md).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`terminate`|\<eh.h>|  
  
 For additional compatibility information, see [Compatibility](../crt/compatibility.md) in the Introduction.  
  
## Example  
  
```  
// crt_terminate.cpp  
// compile with: /EHsc  
#include <eh.h>  
#include <process.h>  
#include <iostream>  
using namespace std;  
  
void term_func();  
  
int main()  
{  
    int i = 10, j = 0, result;  
    set_terminate( term_func );  
    try  
    {  
        if( j == 0 )  
            throw "Divide by zero!";  
        else  
            result = i/j;  
    }  
    catch( int )  
    {  
        cout << "Caught some integer exception.\n";  
    }  
    cout << "This should never print.\n";  
}  
  
void term_func()  
{  
    cout << "term_func() was called by terminate().\n";  
  
    // ... cleanup tasks performed here  
  
    // If this function does not exit, abort is called.  
  
    exit(-1);  
}  
```  
  
 **term_func() was called by terminate().**   
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Exception Handling Routines](../crt/exception-handling-routines.md)   
 [abort](../crt/abort.md)   
 [_set_se_translator](../crt/_set_se_translator.md)   
 [set_terminate](../crt/set_terminate--crt-.md)   
 [set_unexpected](../crt/set_unexpected--crt-.md)   
 [unexpected](../crt/unexpected--crt-.md)