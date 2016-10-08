---
title: "_query_new_handler"
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
  - _query_new_handler
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
  - api-ms-win-crt-heap-l1-1-0.dll
apitype: DLLExport
ms.assetid: 9a84b5c3-fe33-4c01-83a0-be87dc3ec518
caps.latest.revision: 10
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
# _query_new_handler
Returns the address of the current new handler routine.  
  
## Syntax  
  
```  
  
      _PNH _query_new_handler(  
   void   
);  
```  
  
## Return Value  
 Returns the address of the current new handler routine as set by `_set_new_handler`.  
  
## Remarks  
 The C++ `_query_new_handler` function returns the address of the current exception-handling function set by the C++ [_set_new_handler](../VS_visualcpp/_set_new_handler.md) function. `_set_new_handler` is used to specify an exception-handling function that is to gain control if the **new** operator fails to allocate memory. For more information, see the discussions of the [operator new](../Topic/operator%20new%20Function.md) and [operator delete](../Topic/operator%20delete%20Function.md) functions in *C++ Language Reference*.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_query_new_handler`|<new.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## Libraries  
 All versions of the [C run-time libraries](../VS_visualcpp/CRT-Library-Features.md).  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Memory Allocation](../VS_visualcpp/Memory-Allocation.md)   
 [free](../VS_visualcpp/free.md)