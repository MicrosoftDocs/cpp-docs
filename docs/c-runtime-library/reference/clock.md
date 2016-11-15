---
title: "clock | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "clock"
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
  - "api-ms-win-crt-time-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "clock"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "processor time used, calculating"
  - "time, calculating processor"
  - "clock function"
  - "processor time used"
  - "calculating processor time used"
ms.assetid: 3e1853dd-498f-49ba-b06a-f2315f20904e
caps.latest.revision: 15
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
# clock
Calculates the wall-clock time used by the calling process.  
  
## Syntax  
  
```  
clock_t clock( void );  
```  
  
## Return Value  
 The elapsed wall-clock time since the start of the process (elapsed time in seconds times `CLOCKS_PER_SEC`). If the amount of elapsed time is unavailable, the function returns –1, cast as a `clock_t`.  
  
## Remarks  
 The `clock` function tells how much wall-clock time the calling process has used. Note that this is not strictly conformant with ISO C99, which specifies net CPU time as the return value. To obtain CPU time, use the Win32 [GetProcessTimes](http://msdn.microsoft.com/library/windows/desktop/ms683223) function.  
  
 A timer tick is approximately equal to 1/`CLOCKS_PER_SEC` seconds. Given enough time, the value returned by `clock` can exceed the maximum positive value of `clock_t` and become negative, or exceed the maximum absolute value and roll over. Do not rely on this value for total elapsed time in processes that run for more than 214,748 seconds, or about 59 hours.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`clock`|\<time.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Example  
  
```  
// crt_clock.c  
// This example prompts for how long  
// the program is to run and then continuously  
// displays the elapsed time for that period.  
//  
  
#include <stdio.h>  
#include <stdlib.h>  
#include <time.h>  
  
void sleep( clock_t wait );  
  
int main( void )  
{  
   long    i = 6000000L;  
   clock_t start, finish;  
   double  duration;  
  
   // Delay for a specified time.  
   printf( "Delay for three seconds\n" );  
   sleep( (clock_t)3 * CLOCKS_PER_SEC );  
   printf( "Done!\n" );  
  
   // Measure the duration of an event.  
   printf( "Time to do %ld empty loops is ", i );  
   start = clock();  
   while( i-- )   
      ;  
   finish = clock();  
   duration = (double)(finish - start) / CLOCKS_PER_SEC;  
   printf( "%2.1f seconds\n", duration );  
}  
  
// Pauses for a specified number of milliseconds.  
void sleep( clock_t wait )  
{  
   clock_t goal;  
   goal = wait + clock();  
   while( goal > clock() )  
      ;  
}  
```  
  
```Output  
Delay for three seconds  
Done!  
Time to do 6000000 empty loops is 0.1 seconds  
```  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [Time Management](../../c-runtime-library/time-management.md)   
 [difftime, _difftime32, _difftime64](../../c-runtime-library/reference/difftime-difftime32-difftime64.md)   
 [time, _time32, _time64](../../c-runtime-library/reference/time-time32-time64.md)