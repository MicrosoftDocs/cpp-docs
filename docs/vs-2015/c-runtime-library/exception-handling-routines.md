---
title: "Exception Handling Routines | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
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
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Exception Handling Routines
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Exception Handling Routines](https://docs.microsoft.com/cpp/c-runtime-library/exception-handling-routines).  
  
Use the C++ exception-handling functions to recover from unexpected events during program execution.  
  
### Exception-Handling Functions  
  
|Function|Use|.NET Framework equivalent|  
|--------------|---------|-------------------------------|  
|[_set_se_translator](../c-runtime-library/reference/set-se-translator.md)|Handle Win32 exceptions (C structured exceptions) as C++ typed exceptions|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[set_terminate](../c-runtime-library/reference/set-terminate-crt.md)|Install your own termination routine to be called by `terminate`|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[set_unexpected](../c-runtime-library/reference/set-unexpected-crt.md)|Install your own termination function to be called by `unexpected`|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[terminate](../c-runtime-library/reference/terminate-crt.md)|Called automatically under certain circumstances after exception is thrown. The `terminate` function calls `abort` or a function you specify using `set_terminate`|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[unexpected](../c-runtime-library/reference/unexpected-crt.md)|Calls `terminate` or a function you specify using `set_unexpected`. The `unexpected` function is not used in current Microsoft C++ exception-handling implementation|[System::Exception Class](https://msdn.microsoft.com/library/system.exception.aspx)|  
  
## See Also  
 [Run-Time Routines by Category](../c-runtime-library/run-time-routines-by-category.md)





