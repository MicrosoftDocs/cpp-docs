---
title: "_RTC_GetErrDesc"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
apiname: 
  - "_RTC_GetErrDesc"
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
caps.latest.revision: 12
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
# _RTC_GetErrDesc
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
 A character string that contains a short description of one of the error types detected by the run-time error check system. If error is less than zero or greater than or equal to the value returned by [_RTC_NumErrors](../crt/_rtc_numerrors.md), `_RTC_GetErrDesc` returns NULL.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_RTC_GetErrDesc`|\<rtcapi.h>|  
  
 For more information, see [Compatibility](../crt/compatibility.md).  
  
## Libraries  
 All versions of the [C run-time libraries](../crt/crt-library-features.md).  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [_RTC_NumErrors](../crt/_rtc_numerrors.md)   
 [Run-Time Error Checking](../crt/run-time-error-checking.md)