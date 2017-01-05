---
title: "_RTC_SetErrorFuncW | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_RTC_SetErrorFuncW"
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
  - "_RTC_SetErrorFuncW"
  - "RTC_SetErrorFuncW"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "run-time errors"
  - "RTC_SetErrorFuncW function"
  - "_RTC_error_fnW typedef"
  - "_RTC_SetErrorFuncW function"
  - "RTC_error_fnW typedef"
ms.assetid: b3e0d71f-1bd3-4c37-9ede-2f638eb3c81a
caps.latest.revision: 15
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
# _RTC_SetErrorFuncW
Designates a function as the handler for the reporting of run-time error checks (RTCs).  
  
## Syntax  
  
```  
  
      _RTC_error_fnW _RTC_SetErrorFuncW(  
   _RTC_error_fnW function   
);  
```  
  
#### Parameters  
 `function`  
 The address of the function that will handle run-time error checks.  
  
## Return Value  
 The previously defined error function; or `NULL` if there is no previously defined function.  
  
## Remarks  
 In new code, use only `_RTC_SetErrorFuncW`. `_RTC_SetErrorFunc` is only included in the library for backward compatibility.  
  
 The `_RTC_SetErrorFuncW` callback applies only to the component that it was linked in, but not globally.  
  
 Make sure that the address that you pass to `_RTC_SetErrorFuncW` is that of a valid error handling function.  
  
 If an error has been assigned a type of –1 by using [_RTC_SetErrorType](../../c-runtime-library/reference/rtc-seterrortype.md), the error handling function is not called.  
  
 Before you can call this function, you must first call one of the run-time error-check initialization functions. For more information, see [Using Run-Time Checks Without the C Run-Time Library](/visualstudio/debugger/using-run-time-checks-without-the-c-run-time-library).  
  
 **_RTC_error_fnW** is defined as follows:  
  
 **typedef int (__cdecl \*_RTC_error_fnW)(int**  `errorType` **, const wchar_t \*** *filename* **, int**  *linenumber* **, const wchar_t \*** `moduleName` **, const wchar_t \*** *format* **, ...);**  
  
 where:  
  
 `errorType`  
 The type of error that's specified by [_RTC_SetErrorType](../../c-runtime-library/reference/rtc-seterrortype.md).  
  
 *filename*  
 The source file where the failure occurred, or null if no debug information is available.  
  
 *linenumber*  
 The line in *filename* where the failure occurred, or 0 if no debug information is available.  
  
 `moduleName`  
 The DLL or executable name where the failure occurred.  
  
 *format*  
 printf style string to display an error message, using the remaining parameters. The first argument of the VA_ARGLIST is the RTC Error number that occurred.  
  
 For an example that shows how to use **_RTC_error_fnW**, see [Native Run-Time Checks Customization](/visualstudio/debugger/native-run-time-checks-customization).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_RTC_SetErrorFuncW`|\<rtcapi.h>|  
  
 For more information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## Libraries  
 All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [_CrtDbgReport, _CrtDbgReportW](../../c-runtime-library/reference/crtdbgreport-crtdbgreportw.md)   
 [Run-Time Error Checking](../../c-runtime-library/run-time-error-checking.md)