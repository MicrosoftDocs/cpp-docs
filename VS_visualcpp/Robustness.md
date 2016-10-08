---
title: "Robustness"
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
ms.assetid: 7f1a87f8-eff9-4b76-ae9b-d133d3de6adf
caps.latest.revision: 13
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
# Robustness
Use the following C run-time library functions to improve the robustness of your program.  
  
### Run-Time Robustness Functions  
  
|Function|Use|.NET Framework equivalent|  
|--------------|---------|-------------------------------|  
|[_set_new_handler](../VS_visualcpp/_set_new_handler.md)|Transfers control to your error-handling mechanism if the `new` operator fails to allocate memory.|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_set_se_translator](../VS_visualcpp/_set_se_translator.md)|Handles Win32 exceptions (C structured exceptions) as C++ typed exceptions.|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[set_terminate](../VS_visualcpp/set_terminate--CRT-.md)|Installs your own termination function to be called by [terminate](../VS_visualcpp/terminate--CRT-.md).|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[set_unexpected](../VS_visualcpp/set_unexpected--CRT-.md)|Installs your own termination function to be called by [unexpected](../VS_visualcpp/unexpected--CRT-.md).|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
  
## See Also  
 [Run-Time Routines by Category](../VS_visualcpp/Run-Time-Routines-by-Category.md)   
 [SetUnhandledExceptionFilter](http://msdn.microsoft.com/library/windows/desktop/ms680634.aspx)