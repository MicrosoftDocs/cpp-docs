---
title: "_set_new_mode"
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
  - _set_new_mode
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
ms.assetid: 4d14039a-e54e-4689-8c70-74a4b9834768
caps.latest.revision: 14
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
# _set_new_mode
Sets a new handler mode for `malloc`.  
  
## Syntax  
  
```  
int _set_new_mode(  
   int newhandlermode   
);  
```  
  
#### Parameters  
 `newhandlermode`  
 New handler mode for `malloc`; valid value is 0 or 1.  
  
## Return Value  
 Returns the previous handler mode set for `malloc`. A return value of 1 indicates that, on failure to allocate memory, `malloc` previously called the new handler routine; a return value of 0 indicates that it did not. If the `newhandlermode` argument does not equal 0 or 1, returns –1.  
  
## Remarks  
 The C++ `_set_new_mode` function sets the new handler mode for [malloc](../VS_visualcpp/malloc.md). The new handler mode indicates whether, on failure, `malloc` is to call the new handler routine as set by [_set_new_handler](../VS_visualcpp/_set_new_handler.md). By default, `malloc` does not call the new handler routine on failure to allocate memory. You can override this default behavior so that, when `malloc` fails to allocate memory, `malloc` calls the new handler routine in the same way that the `new` operator does when it fails for the same reason. For more information, see the [new](../VS_visualcpp/new-Operator--C---.md) and [delete](../VS_visualcpp/delete-Operator--C---.md) operators in the *C++ Language Reference*. To override the default, call:  
  
```  
_set_new_mode(1)  
```  
  
 early in your program or link with Newmode.obj (see [Link Options](../VS_visualcpp/Link-Options.md)).  
  
 This function validates its parameter. If `newhandlermode` is anything other than 0 or 1, the function invokes the invalid parameter handler, as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md). If execution is allowed to continue, **_**`set_new_mode` returns -1 and sets `errno` to `EINVAL`.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_set_new_mode`|<new.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Memory Allocation](../VS_visualcpp/Memory-Allocation.md)   
 [calloc](../VS_visualcpp/calloc.md)   
 [free](../VS_visualcpp/free.md)   
 [realloc](../VS_visualcpp/realloc.md)   
 [_query_new_handler](../VS_visualcpp/_query_new_handler.md)   
 [_query_new_mode](../VS_visualcpp/_query_new_mode.md)