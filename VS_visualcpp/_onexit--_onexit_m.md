---
title: "_onexit, _onexit_m"
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
  - _onexit
  - _onexit_m
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
apitype: DLLExport
ms.assetid: 45743298-0e2f-46cf-966d-1ca44babb443
caps.latest.revision: 12
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
# _onexit, _onexit_m
Registers a routine to be called at exit time.  
  
## Syntax  
  
```  
_onexit_t _onexit(  
   _onexit_t function  
);  
_onexit_t_m _onexit_m(  
   _onexit_t_m function  
);  
```  
  
#### Parameters  
 `function`  
 Pointer to a function to be called at exit.  
  
## Return Value  
 `_onexit` returns a pointer to the function if successful or `NULL` if there is no space to store the function pointer.  
  
## Remarks  
 The `_onexit` function is passed the address of a function (`function`) to be called when the program terminates normally. Successive calls to `_onexit` create a register of functions that are executed in LIFO (last-in-first-out) order. The functions passed to `_onexit` cannot take parameters.  
  
 In the case when `_onexit` is called from within a DLL, routines registered with `_onexit` run on a DLL's unloading after `DllMain` is called with DLL_PROCESS_DETACH.  
  
 `_onexit` is a Microsoft extension. For ANSI portability, use [atexit](../VS_visualcpp/atexit.md). The `_onexit_m` version of the function is for mixed mode use.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_onexit`|<stdlib.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## Example  
  
```  
// crt_onexit.c  
  
#include <stdlib.h>  
#include <stdio.h>  
  
/* Prototypes */  
int fn1(void), fn2(void), fn3(void), fn4 (void);  
  
int main( void )  
{  
   _onexit( fn1 );  
   _onexit( fn2 );  
   _onexit( fn3 );  
   _onexit( fn4 );  
   printf( "This is executed first.\n" );  
}  
  
int fn1()  
{  
   printf( "next.\n" );  
   return 0;  
}  
  
int fn2()  
{  
   printf( "executed " );  
   return 0;  
}  
  
int fn3()  
{  
   printf( "is " );  
   return 0;  
}  
  
int fn4()  
{  
   printf( "This " );  
   return 0;  
}  
```  
  
## Output  
  
```  
This is executed first.  
This is executed next.  
```  
  
## .NET Framework Equivalent  
 [System::Diagnostics::Process::Exited](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.exited.aspx)  
  
## See Also  
 [Process and Environment Control](../VS_visualcpp/Process-and-Environment-Control.md)   
 [atexit](../VS_visualcpp/atexit.md)   
 [exit, _Exit, _exit](../VS_visualcpp/exit--_Exit--_exit.md)   
 [__dllonexit](../VS_visualcpp/__dllonexit.md)