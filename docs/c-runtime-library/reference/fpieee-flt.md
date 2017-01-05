---
title: "_fpieee_flt | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_fpieee_flt"
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
  - "fpieee_flt"
  - "_fpieee_flt"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_fpieee_flt function"
  - "exception handling, floating-point"
  - "floating-point exception handling"
  - "fpieee_flt function"
ms.assetid: 2bc4801e-0eed-4e73-b518-215da8cc9740
caps.latest.revision: 15
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
# _fpieee_flt
Invokes a user-defined trap handler for IEEE floating-point exceptions.  
  
## Syntax  
  
```  
int _fpieee_flt(   
   unsigned long excCode,  
   struct _EXCEPTION_POINTERS *excInfo,  
   int handler(_FPIEEE_RECORD *)   
);  
```  
  
#### Parameters  
 `excCode`  
 Exception code.  
  
 `excInfo`  
 Pointer to the Windows NT exception information structure.  
  
 `handler`  
 Pointer to the user's IEEE trap-handler routine.  
  
## Return Value  
 The return value of `_fpieee_flt` is the value returned by `handler`. As such, the IEEE filter routine might be used in the except clause of a structured exception-handling (SEH) mechanism.  
  
## Remarks  
 The `_fpieee_flt` function invokes a user-defined trap handler for IEEE floating-point exceptions and provides it with all relevant information. This routine serves as an exception filter in the SEH mechanism, which invokes your own IEEE exception handler when necessary.  
  
 The `_FPIEEE_RECORD` structure, defined in Fpieee.h, contains information pertaining to an IEEE floating-point exception. This structure is passed to the user-defined trap handler by `_fpieee_flt`.  
  
|_FPIEEE_RECORD field|Description|  
|----------------------------|-----------------|  
|`unsigned int RoundingMode`, `unsigned int Precision`|These fields contain information about the floating-point environment at the time the exception occurred.|  
|`unsigned int Operation`|Indicates the type of operation that caused the trap. If the type is a comparison (`_FpCodeCompare`), you can supply one of the special `_FPIEEE_COMPARE_RESULT` values (as defined in Fpieee.h) in the `Result.Value` field. The conversion type (`_FpCodeConvert`) indicates that the trap occurred during a floating-point conversion operation. You can look at the `Operand1` and `Result` types to determine the type of conversion being attempted.|  
|`_FPIEEE_VALUE Operand1`, `_FPIEEE_VALUE Operand2`, `_FPIEEE_VALUE Result`|These structures indicate the types and values of the proposed result and operands:<br /><br /> `OperandValid` Flag indicating whether the responding value is valid.<br /><br /> `Format` Data type of the corresponding value. The format type might be returned even if the corresponding value is not valid.<br /><br /> `Value` Result or operand data value.|  
|`_FPIEEE_EXCEPTION_FLAGS Cause`, `_FPIEEE_EXCEPTION_FLAGS Enable`, `_FPIEEE_EXCEPTION_FLAGS Status`|_FPIEEE_EXCEPTION_FLAGS contains one bit field per type of floating point exception.<br /><br /> There is a correspondence between these fields and the arguments used to mask the exceptions supplied to [_controlfp](../../c-runtime-library/reference/control87-controlfp-control87-2.md).<br /><br /> The exact meaning of each bit depends on context:<br /><br /> `Cause` Each set bit indicates the particular exception that was raised.<br /><br /> `Enable` Each set bit indicates that the particular exception is currently unmasked.<br /><br /> `Status` Each set bit indicates that the particular exception is currently pending. This includes exceptions that have not been raised because they were masked by `_controlfp`.|  
  
 Pending exceptions that are disabled are raised when you enable them. This can result in undefined behavior when using `_fpieee_flt` as an exception filter. Always call [_clearfp](../../c-runtime-library/reference/clear87-clearfp.md) before enabling floating point exceptions.  
  
## Requirements  
  
|Function|Required header|  
|--------------|---------------------|  
|`_fpieee_flt`|\<fpieee.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Example  
  
```  
// crt_fpieee.c  
// This program demonstrates the implementation of  
// a user-defined floating-point exception handler using the  
// _fpieee_flt function.  
  
#include <fpieee.h>  
#include <excpt.h>  
#include <float.h>  
#include <stddef.h>  
  
int fpieee_handler( _FPIEEE_RECORD * );  
  
int fpieee_handler( _FPIEEE_RECORD *pieee )  
{  
   // user-defined ieee trap handler routine:  
   // there is one handler for all   
   // IEEE exceptions  
  
   // Assume the user wants all invalid   
   // operations to return 0.  
  
   if ((pieee->Cause.InvalidOperation) &&   
       (pieee->Result.Format == _FpFormatFp32))   
   {  
        pieee->Result.Value.Fp32Value = 0.0F;  
  
        return EXCEPTION_CONTINUE_EXECUTION;  
   }  
   else  
      return EXCEPTION_EXECUTE_HANDLER;  
}  
  
#define _EXC_MASK    \  
    _EM_UNDERFLOW  + \  
    _EM_OVERFLOW   + \  
    _EM_ZERODIVIDE + \  
    _EM_INEXACT  
  
int main( void )  
{  
   // ...  
  
   __try {  
      // unmask invalid operation exception  
      _controlfp_s(NULL, _EXC_MASK, _MCW_EM);   
  
      // code that may generate   
      // fp exceptions goes here  
   }  
   __except ( _fpieee_flt( GetExceptionCode(),  
                GetExceptionInformation(),  
                fpieee_handler ) ){  
  
      // code that gets control   
  
      // if fpieee_handler returns  
      // EXCEPTION_EXECUTE_HANDLER goes here  
  
   }  
  
   // ...  
}  
```  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [Floating-Point Support](../../c-runtime-library/floating-point-support.md)   
 [_control87, _controlfp, \__control87_2](../../c-runtime-library/reference/control87-controlfp-control87-2.md)   
 [_controlfp_s](../../c-runtime-library/reference/controlfp-s.md)