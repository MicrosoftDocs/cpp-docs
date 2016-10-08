---
title: "Exception Handling Routines"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
  - C
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: f60548c6-850a-4e1e-a79b-a2a6a541ab62
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Exception Handling Routines
Use the C++ exception-handling functions to recover from unexpected events during program execution.  
  
### Exception-Handling Functions  
  
|Function|Use|.NET Framework equivalent|  
|--------------|---------|-------------------------------|  
|[_set_se_translator](../VS_visualcpp/_set_se_translator.md)|Handle Win32 exceptions (C structured exceptions) as C++ typed exceptions|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[set_terminate](../VS_visualcpp/set_terminate--CRT-.md)|Install your own termination routine to be called by `terminate`|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[set_unexpected](../VS_visualcpp/set_unexpected--CRT-.md)|Install your own termination function to be called by `unexpected`|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[terminate](../VS_visualcpp/terminate--CRT-.md)|Called automatically under certain circumstances after exception is thrown. The `terminate` function calls `abort` or a function you specify using `set_terminate`|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[unexpected](../VS_visualcpp/unexpected--CRT-.md)|Calls `terminate` or a function you specify using `set_unexpected`. The `unexpected` function is not used in current Microsoft C++ exception-handling implementation|[System::Exception Class](https://msdn.microsoft.com/en-us/library/system.exception.aspx)|  
  
## See Also  
 [Run-Time Routines by Category](../VS_visualcpp/Run-Time-Routines-by-Category.md)