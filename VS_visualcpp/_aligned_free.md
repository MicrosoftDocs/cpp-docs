---
title: "_aligned_free"
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
  - _aligned_free
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
ms.assetid: ed1ce952-cdfc-4682-85cc-f75d4101603d
caps.latest.revision: 16
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
# _aligned_free
Frees a block of memory that was allocated with [_aligned_malloc](../VS_visualcpp/_aligned_malloc.md) or [_aligned_offset_malloc](../VS_visualcpp/_aligned_offset_malloc.md).  
  
## Syntax  
  
```  
void _aligned_free (  
   void *memblock  
);  
```  
  
#### Parameters  
 `memblock`  
 A pointer to the memory block that was returned to the `_aligned_malloc` or `_aligned_offset_malloc` function.  
  
## Remarks  
 `_aligned_free` is marked `__declspec(noalias)`, meaning that the function is guaranteed not to modify global variables. For more information, see [noalias](../VS_visualcpp/noalias.md).  
  
 This function does not validate its parameter, unlike the other _aligned CRT functions. If `memblock` is a `NULL` pointer, this function simply performs no actions. It does not change `errno` and it does not invoke the invalid parameter handler. If an error occurs in the function due to not using _aligned functions previously to allocate the block of memory or a misalignment of memory occurs due to some unforeseen calamity, the function generates a debug report from the [_RPT, _RPTF, _RPTW, _RPTFW Macros](../VS_visualcpp/_RPT--_RPTF--_RPTW--_RPTFW-Macros.md).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_aligned_free`|<malloc.h>|  
  
## Example  
 For more information, see [_aligned_malloc](../VS_visualcpp/_aligned_malloc.md).  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Data Alignment](../VS_visualcpp/Data-Alignment.md)