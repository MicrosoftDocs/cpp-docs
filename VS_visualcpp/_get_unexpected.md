---
title: "_get_unexpected"
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
apiname: 
  - _get_unexpected
apilocation: 
  - msvcrt.dll
  - msvcr80.dll
  - msvcr90.dll
  - msvcr100.dll
  - msvcr100_clr0400.dll
  - msvcr110.dll
  - msvcr110_clr0400.dll
  - msvcr120.dll
  - msvcr120_clr0400.dll
  - ucrtbase.dll
apitype: DLLExport
ms.assetid: a5f7a7a0-18e0-485e-953d-db291068a1e8
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
# _get_unexpected
Returns the termination routine to be called by `unexpected`.  
  
## Syntax  
  
```  
unexpected_function _get_unexpected( void );  
```  
  
## Return Value  
 Returns a pointer to the function registered by [set_unexpected](../VS_visualcpp/set_unexpected--CRT-.md). If no function has been set, the return value may be used to restore the default behavior; this value may be NULL.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_get_unexpected`|<eh.h>|  
  
 For additional compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Exception Handling Routines](../VS_visualcpp/Exception-Handling-Routines.md)   
 [abort](../VS_visualcpp/abort.md)   
 [set_terminate](../VS_visualcpp/set_terminate--CRT-.md)   
 [terminate](../VS_visualcpp/terminate--CRT-.md)   
 [unexpected](../VS_visualcpp/unexpected--CRT-.md)