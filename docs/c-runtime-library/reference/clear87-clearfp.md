---
title: "_clear87, _clearfp | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_clearfp"
  - "_clear87"
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
  - "clearfp"
  - "_clearfp"
  - "_clear87"
  - "clear87"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "clearing floating point status word"
  - "clearfp function"
  - "_clear87 function"
  - "_clearfp function"
  - "clear87 function"
ms.assetid: 72d24a70-7688-4793-ae09-c96d33fcca52
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
# _clear87, _clearfp
Gets and clears the floating-point status word.  
  
## Syntax  
  
```  
unsigned int _clear87( void );  
unsigned int _clearfp( void );  
```  
  
## Return Value  
 The bits in the value returned indicate the floating-point status before the call to `_clear87` or `_clearfp`. For a complete definition of the bits returned by `_clear87`, see Float.h. Many of the math library functions modify the 8087/80287 status word, with unpredictable results. Return values from `_clear87` and `_status87` become more reliable as fewer floating-point operations are performed between known states of the floating-point status word.  
  
## Remarks  
 The `_clear87` function clears the exception flags in the floating-point status word, sets the busy bit to 0, and returns the status word. The floating-point status word is a combination of the 8087/80287 status word and other conditions detected by the 8087/80287 exception handler, such as floating-point stack overflow and underflow.  
  
 `_clearfp` is a platform-independent, portable version of the `_clear87` routine. It is identical to `_clear87` on Intel (x86) platforms and is also supported by the x64 and ARM platforms. To ensure that your floating-point code is portable to x64 and ARM, use `_clearfp`. If you are only targeting x86 platforms, you can use either `_clear87` or `_clearfp`.  
  
 These functions are deprecated when compiling with [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md) or `/clr:pure` because the common language runtime only supports the default floating-point precision.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_clear87`|\<float.h>|  
|`_clearfp`|\<float.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Example  
  
```  
// crt_clear87.c  
// compile with: /Od  
  
// This program creates various floating-point   
// problems, then uses _clear87 to report on these problems.  
// Compile this program with Optimizations disabled (/Od).   
// Otherwise the optimizer will remove the code associated with   
// the unused floating-point values.  
//  
  
#include <stdio.h>  
#include <float.h>  
  
int main( void )  
{  
   double a = 1e-40, b;  
   float x, y;  
  
   printf( "Status: %.4x - clear\n", _clear87()  );  
  
   // Store into y is inexact and underflows:  
   y = a;  
   printf( "Status: %.4x - inexact, underflow\n", _clear87() );  
  
   // y is denormal:   
   b = y;  
   printf( "Status: %.4x - denormal\n", _clear87() );  
}  
```  
  
```Output  
Status: 0000 - clear  
Status: 0003 - inexact, underflow  
Status: 80000 - denormal  
```  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [Floating-Point Support](../../c-runtime-library/floating-point-support.md)   
 [_control87, _controlfp, \__control87_2](../../c-runtime-library/reference/control87-controlfp-control87-2.md)   
 [_status87, _statusfp, _statusfp2](../../c-runtime-library/reference/status87-statusfp-statusfp2.md)