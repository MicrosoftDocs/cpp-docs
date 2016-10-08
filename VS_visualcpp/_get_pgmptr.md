---
title: "_get_pgmptr"
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
  - _get_pgmptr
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
  - api-ms-win-crt-runtime-l1-1-0.dll
apitype: DLLExport
ms.assetid: 29f16a9f-a685-4721-add3-7fad4f67eece
caps.latest.revision: 15
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
# _get_pgmptr
Gets the current value of the `_pgmptr`global variable.  
  
## Syntax  
  
```  
errno_t _get_pgmptr(   
   char **pValue   
);  
```  
  
#### Parameters  
 [out] `pValue`  
 A pointer to a string to be filled with the current value of the `_pgmptr` variable.  
  
## Return Value  
 Returns zero if successful; an error code on failure. If `pValue` is `NULL`, the invalid parameter handler is invoked as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md). If execution is allowed to continue, this function sets `errno` to `EINVAL` and returns `EINVAL`.  
  
## Remarks  
 The `_pgmptr`global variable contains the full path to the executable associated with the process. For more information, see [_pgmptr, _wpgmptr](../VS_visualcpp/_pgmptr--_wpgmptr.md).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_get_pgmptr`|<stdlib.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [_get_wpgmptr](../VS_visualcpp/_get_wpgmptr.md)