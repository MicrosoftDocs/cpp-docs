---
title: "_RTC_SetErrorFunc | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
api_name: 
  - "_RTC_SetErrorFunc"
api_location: 
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
api_type: 
  - "DLLExport"
topic_type: 
  - "apiref"
f1_keywords: 
  - "RTC_SetErrorFunc"
  - "_RTC_SetErrorFunc"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "RTC_SetErrorFunc function"
  - "_RTC_SetErrorFunc function"
ms.assetid: b2292722-0d83-4092-83df-3d5b19880666
caps.latest.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _RTC_SetErrorFunc
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [_RTC_SetErrorFunc](https://docs.microsoft.com/cpp/c-runtime-library/reference/rtc-seterrorfunc).  
  
Designates a function as the handler for reporting run-time error checks (RTCs). This function is deprecated; use `_RTC_SetErrorFuncW` instead.  
  
## Syntax  
  
```  
  
      _RTC_error_fn _RTC_SetErrorFunc(  
   _RTC_error_fn function   
);  
```  
  
#### Parameters  
 *function*  
 The address of the function that will handle run-time error checks.  
  
## Return Value  
 The previously defined error function. If there is no previously defined function, returns NULL.  
  
## Remarks  
 Do not use this function; instead, use `_RTC_SetErrorFuncW`. It is retained only for backward compatibility.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_RTC_SetErrorFunc`|\<rtcapi.h>|  
  
 For more information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## Libraries  
 All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`.  
  
## See Also  
 [_CrtDbgReport, _CrtDbgReportW](../../c-runtime-library/reference/crtdbgreport-crtdbgreportw.md)   
 [Run-Time Error Checking](../../c-runtime-library/run-time-error-checking.md)





