---
title: "_RTC_GetErrDesc | Microsoft Docs"
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
  - "_RTC_GetErrDesc"
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
  - "RTC_GetErrDesc"
  - "_RTC_GetErrDesc"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "run-time errors"
  - "_RTC_GetErrDesc function"
  - "RTC_GetErrDesc function"
ms.assetid: 7994ec2b-5488-4fd4-806d-a166c9a9f927
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _RTC_GetErrDesc
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [_RTC_GetErrDesc](https://docs.microsoft.com/cpp/c-runtime-library/reference/rtc-geterrdesc).  
  
Returns a brief description of a run-time error check (RTC) type.  
  
## Syntax  
  
```  
  
      const char * _RTC_GetErrDesc(  
   _RTC_ErrorNumber errnum   
);  
```  
  
#### Parameters  
 *errnum*  
 A number between zero and one less than the value returned by `_RTC_NumErrors`.  
  
## Return Value  
 A character string that contains a short description of one of the error types detected by the run-time error check system. If error is less than zero or greater than or equal to the value returned by [_RTC_NumErrors](../../c-runtime-library/reference/rtc-numerrors.md), `_RTC_GetErrDesc` returns NULL.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_RTC_GetErrDesc`|\<rtcapi.h>|  
  
 For more information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## Libraries  
 All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [_RTC_NumErrors](../../c-runtime-library/reference/rtc-numerrors.md)   
 [Run-Time Error Checking](../../c-runtime-library/run-time-error-checking.md)





