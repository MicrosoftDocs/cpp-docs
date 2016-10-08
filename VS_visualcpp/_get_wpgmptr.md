---
title: "_get_wpgmptr"
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
  - _get_wpgmptr
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
ms.assetid: a77cdd13-2303-4b7c-9a60-8debdbef2011
caps.latest.revision: 17
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
# _get_wpgmptr
Gets the current value of the `_wpgmptr` global variable.  
  
## Syntax  
  
```  
errno_t _get_wpgmptr(   
   wchar_t **pValue   
);  
```  
  
#### Parameters  
 [out] `pValue`  
 A pointer to a string to be filled with the current value of the `_wpgmptr` variable.  
  
## Return Value  
 Returns zero if successful; an error code on failure. If `pValue` is `NULL`, the invalid parameter handler is invoked as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md). If execution is allowed to continue, this function sets `errno` to `EINVAL` and returns `EINVAL`.  
  
## Remarks  
 The `_wpgmptr` global variable contains the full path to the executable associated with the process as a wide-character string. For more information, see [_pgmptr, _wpgmptr](../VS_visualcpp/_pgmptr--_wpgmptr.md).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_get_wpgmptr`|<stdlib.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [_get_pgmptr](../VS_visualcpp/_get_pgmptr.md)