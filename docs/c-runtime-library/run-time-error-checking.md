---
title: "Run-Time Error Checking | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "c.runtime"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "run-time error checking"
  - "run-time errors, checking"
ms.assetid: c965dd01-57ad-4a3c-b1d6-5aa04f920501
caps.latest.revision: 7
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
# Run-Time Error Checking
The C run-time library contains the functions that support run-time error checks (RTC). Run-time error checking allows you to build your program such that certain kinds of run-time errors are reported. You specify how the errors are reported and which kinds of errors are reported. For more information, see [Run-Time Error Checks](http://msdn.microsoft.com/Library/dc7b2f1e-5ff6-42e0-89b3-dc9dead83ee1).  
  
 Use the following functions to customize the way your program does run-time error checking.  
  
### Run-Time Error Checking Functions  
  
|Function|Use|.NET Framework equivalent|  
|--------------|---------|-------------------------------|  
|[_RTC_GetErrDesc](../c-runtime-library/reference/rtc-geterrdesc.md)|Returns a brief description of a run-time error check type.||  
|[_RTC_NumErrors](../c-runtime-library/reference/rtc-numerrors.md)|Returns the total number of errors that can be detected by run-time error checks.||  
|[_RTC_SetErrorFunc](../c-runtime-library/reference/rtc-seterrorfunc.md)|Designates a function as the handler for reporting run-time error checks.||  
|[_RTC_SetErrorType](../c-runtime-library/reference/rtc-seterrortype.md)|Associates an error that is detected by run-time error checks with a type.||  
  
## See Also  
 [Run-Time Routines by Category](../c-runtime-library/run-time-routines-by-category.md)   
 [/RTC (Run-Time Error Checks)](../build/reference/rtc-run-time-error-checks.md)   
 [runtime_checks](../preprocessor/runtime-checks.md)   
 [RTC sample](http://msdn.microsoft.com/en-us/b3415b09-f6fd-43dc-8c02-9a910bc2574e)   
 [Debug Routines](../c-runtime-library/debug-routines.md)