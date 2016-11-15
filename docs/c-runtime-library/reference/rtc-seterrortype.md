---
title: "_RTC_SetErrorType | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_RTC_SetErrorType"
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
  - "RTC_SetErrorType"
  - "_RTC_SetErrorType"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "run-time errors"
  - "RTC_SetErrorType function"
  - "_RTC_SetErrorType function"
ms.assetid: f5f99be7-d357-4b11-b8f5-ddd3428f2b06
caps.latest.revision: 13
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
# _RTC_SetErrorType
Associates an error that is detected by run-time error checks (RTCs) with a type. Your error handler processes how to output errors of the specified type.  
  
## Syntax  
  
```  
  
      int _RTC_SetErrorType(  
   _RTC_ErrorNumber errnum,  
   int ErrType   
);  
```  
  
#### Parameters  
 *errnum*  
 A number between zero and one less than the value returned by [_RTC_NumErrors](../../c-runtime-library/reference/rtc-numerrors.md).  
  
 *ErrType*  
 A value to assign to this *errnum*. For example, you might use **_CRT_ERROR**. If you are using `_CrtDbgReport` as your error handler, *ErrType* can only be one of the symbols defined in [_CrtSetReportMode](../../c-runtime-library/reference/crtsetreportmode.md). If you have your own error handler ([_RTC_SetErrorFunc](../../c-runtime-library/reference/rtc-seterrorfunc.md)), you can have as many *ErrType*s as there are *errnum*s.  
  
 An *ErrType* of _RTC_ERRTYPE_IGNORE has special meaning to `_CrtSetReportMode`; the error is ignored.  
  
## Return Value  
 The previous value for the error type `type`.  
  
## Remarks  
 By default, all errors are set to *ErrType* = 1, which corresponds to **_CRT_ERROR**. For more information about the default error types such as **_CRT_ERROR**, see [_CrtDbgReport](../../c-runtime-library/reference/crtdbgreport-crtdbgreportw.md).  
  
 Before you can call this function, you must first call one of the run-time error check initialization functions; see [Using Run-Time Checks without the C Run-Time Library](/visualstudio/debugger/using-run-time-checks-without-the-c-run-time-library)  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_RTC_SetErrorType`|\<rtcapi.h>|  
  
 For more information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## Libraries  
 All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [_RTC_GetErrDesc](../../c-runtime-library/reference/rtc-geterrdesc.md)   
 [Run-Time Error Checking](../../c-runtime-library/run-time-error-checking.md)