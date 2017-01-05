---
title: "_status87, _statusfp, _statusfp2 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_statusfp2"
  - "_statusfp"
  - "_status87"
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
  - "_statusfp2"
  - "_statusfp"
  - "statusfp2"
  - "_status87"
  - "status87"
  - "statusfp"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "floating-point functions, getting status word"
  - "floating-point numbers, status word"
  - "status87 function"
  - "status word, getting floating point"
  - "statusfp function"
  - "_statusfp function"
  - "_statusfp2 function"
  - "statusfp2 function"
  - "_status87 function"
  - "floating-point functions"
  - "status word"
ms.assetid: 7ef963fa-b1fb-429d-94d6-fbf282ab7432
caps.latest.revision: 20
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
# _status87, _statusfp, _statusfp2
Gets the floating-point status word.  
  
## Syntax  
  
```  
unsigned int _status87( void );  
unsigned int _statusfp( void );  
void _statusfp2(unsigned int *px86, unsigned int *pSSE2)  
```  
  
#### Parameters  
 `px86`  
 This address is filled with the status word for the x87 floating-point unit.  
  
 `pSSE2`  
 This address is filled with the status word for the SSE2 floating-point unit.  
  
## Return Value  
 For `_status87` and `_statusfp`, the bits in the value that's returned indicate the floating-point status. See the FLOAT.H include file for a definition of the bits that are returned by `_statusfp`. Many math library functions modify the floating-point status word, with unpredictable results. Optimization can reorder, combine, and eliminate floating-point operations around calls to `_status87`, `_statusfp`, and related functions. Use the [/Od (Disable (Debug))](../../build/reference/od-disable-debug.md) compiler option or the [fenv_access](../../preprocessor/fenv-access.md) pragma directive to prevent optimizations that reorder floating-point operations. Return values from `_clearfp` and `_statusfp`, and also the return parameters of `_statusfp2`, are more reliable if fewer floating-point operations are performed between known states of the floating-point status word.  
  
## Remarks  
 The `_statusfp` function gets the floating-point status word. The status word is a combination of the floating-point processor status and other conditions detected by the floating-point exception handler—for example, floating-point stack overflow and underflow. Unmasked exceptions are checked for before the contents of the status word are returned. This means that the caller is informed of pending exceptions. On x86 platforms, `_statusfp` returns a combination of the x87 and SSE2 floating-point status. On x64 platforms, the status that's returned is based on the SSE’s MXCSR status. On ARM platforms, `_statusfp` returns status from the FPSCR register.  
  
 `_statusfp` is a platform-independent, portable version of `_status87`. It is identical to `_status87` on Intel (x86) platforms and is also supported by the x64 and ARM platforms. To ensure that your floating-point code is portable to all architectures, use `_statusfp`. If you are only targeting x86 platforms, you can use either `_status87` or `_statusfp`.  
  
 We recommend `_statusfp2` for chips (such as the Pentium IV) that have both an x87 and an SSE2 floating-point processor. For `_statusfp2`, the addresses are filled by using the floating-point status word for both the x87 or the SSE2 floating-point processor. For a chip that supports x87 and SSE2 floating-point processors, EM_AMBIGUOUS is set to 1 if `_statusfp` or `_controlfp` is used and the action was ambiguous because it could refer to the x87 or the SSE2 floating-point status word. The `_statusfp2` function is only supported on x86 platforms.  
  
 These functions are not useful for [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md) or `/clr:pure` compilation because the common language runtime (CLR) only supports the default floating-point precision.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_status87`, `_statusfp`, `_statusfp2`|\<float.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## Example  
  
```  
// crt_statusfp.c  
// Build by using: cl /W4 /Ox /nologo crt_statusfp.c  
// This program creates various floating-point errors and  
// then uses _statusfp to display messages that indicate these problems.  
  
#include <stdio.h>  
#include <float.h>  
#pragma fenv_access(on)  
  
double test( void )  
{  
   double a = 1e-40;  
   float b;  
   double c;  
  
   printf("Status = 0x%.8x - clear\n", _statusfp());  
  
   // Assignment into b is inexact & underflows:   
   b = (float)(a + 1e-40);  
   printf("Status = 0x%.8x - inexact, underflow\n", _statusfp());  
  
   // c is denormal:   
   c = b / 2.0;   
   printf("Status = 0x%.8x - inexact, underflow, denormal\n",   
            _statusfp());  
  
   // Clear floating point status:   
   _clearfp();  
   return c;  
}  
  
int main(void)  
{  
   return (int)test();  
}  
```  
  
```Output  
Status = 0x00000000 - clear  
Status = 0x00000003 - inexact, underflow  
Status = 0x00080003 - inexact, underflow, denormal  
```  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [Floating-Point Support](../../c-runtime-library/floating-point-support.md)   
 [_clear87, _clearfp](../../c-runtime-library/reference/clear87-clearfp.md)   
 [_control87, _controlfp, \__control87_2](../../c-runtime-library/reference/control87-controlfp-control87-2.md)