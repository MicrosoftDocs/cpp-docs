---
title: "_query_new_mode"
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
  - _query_new_mode
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
ms.assetid: e185c5f9-b73b-4257-8eff-b47648374768
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
# _query_new_mode
Returns an integer indicating the new handler mode set by `_set_new_mode` for `malloc`.  
  
## Syntax  
  
```  
  
      int _query_new_mode(  
   void   
);  
```  
  
## Return Value  
 Returns the current new handler mode, namely 0 or 1, for `malloc`. A return value of 1 indicates that, on failure to allocate memory, `malloc` calls the new handler routine; a return value of 0 indicates that it does not.  
  
## Remarks  
 The C++ `_query_new_mode` function returns an integer that indicates the new handler mode that is set by the C++ [_set_new_mode](../VS_visualcpp/_set_new_mode.md) function for [malloc](../VS_visualcpp/malloc.md). The new handler mode indicates whether, on failure to allocate memory, `malloc` is to call the new handler routine as set by [_set_new_handler](../VS_visualcpp/_set_new_handler.md). By default, `malloc` does not call the new handler routine on failure. You can use `_set_new_mode` to override this behavior so that on failure `malloc` calls the new handler routine in the same way that the **new** operator does when it fails to allocate memory. For more information, see the [operator delete](../Topic/operator%20delete%20Function.md) and [operator new](../Topic/operator%20new%20Function.md) functions in *C++ Language Reference*.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_query_new_mode`|<new.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## Libraries  
 All versions of the [C run-time libraries](../VS_visualcpp/CRT-Library-Features.md).  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Memory Allocation](../VS_visualcpp/Memory-Allocation.md)   
 [calloc](../VS_visualcpp/calloc.md)   
 [free](../VS_visualcpp/free.md)   
 [realloc](../VS_visualcpp/realloc.md)   
 [_query_new_handler](../VS_visualcpp/_query_new_handler.md)