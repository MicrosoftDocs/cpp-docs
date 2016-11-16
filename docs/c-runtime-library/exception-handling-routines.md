---
title: "Exception Handling Routines | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "c.exceptions"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "exception handling, routines"
ms.assetid: f60548c6-850a-4e1e-a79b-a2a6a541ab62
caps.latest.revision: 8
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
# Exception Handling Routines
Use the C++ exception-handling functions to recover from unexpected events during program execution.  
  
### Exception-Handling Functions  
  
|Function|Use|.NET Framework equivalent|  
|--------------|---------|-------------------------------|  
|[_set_se_translator](../c-runtime-library/reference/set-se-translator.md)|Handle Win32 exceptions (C structured exceptions) as C++ typed exceptions|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[set_terminate](../c-runtime-library/reference/set-terminate-crt.md)|Install your own termination routine to be called by `terminate`|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[set_unexpected](../c-runtime-library/reference/set-unexpected-crt.md)|Install your own termination function to be called by `unexpected`|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[terminate](../c-runtime-library/reference/terminate-crt.md)|Called automatically under certain circumstances after exception is thrown. The `terminate` function calls `abort` or a function you specify using `set_terminate`|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[unexpected](../c-runtime-library/reference/unexpected-crt.md)|Calls `terminate` or a function you specify using `set_unexpected`. The `unexpected` function is not used in current Microsoft C++ exception-handling implementation|[System::Exception Class](https://msdn.microsoft.com/en-us/library/system.exception.aspx)|  
  
## See Also  
 [Run-Time Routines by Category](../c-runtime-library/run-time-routines-by-category.md)