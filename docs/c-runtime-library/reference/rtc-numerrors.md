---
title: "_RTC_NumErrors | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_RTC_NumErrors"
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
  - "_RTC_NumErrors"
  - "RTC_NumErrors"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "run-time errors"
  - "_RTC_NumErrors function"
  - "RTC_NumErrors function"
ms.assetid: 7e82adae-38e2-4f8b-bc0b-37bda8109fd1
caps.latest.revision: 12
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
# _RTC_NumErrors
Returns the total number of errors that can be detected by run-time error checks (RTC). You can use this number as the control in a **for** loop, where each value in the loop is passed to [_RTC_GetErrDesc](../../c-runtime-library/reference/rtc-geterrdesc.md).  
  
## Syntax  
  
```  
  
int _RTC_NumErrors( void );  
  
```  
  
## Return Value  
 An integer whose value represents the total number of errors that can be detected by the Visual C++ run-time error checks.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_RTC_NumErrors`|\<rtcapi.h>|  
  
 For more information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## Libraries  
 All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [_RTC_GetErrDesc](../../c-runtime-library/reference/rtc-geterrdesc.md)   
 [Run-Time Error Checking](../../c-runtime-library/run-time-error-checking.md)