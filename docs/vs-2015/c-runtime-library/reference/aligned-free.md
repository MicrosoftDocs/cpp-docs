---
title: "_aligned_free | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
api_name: 
  - "_aligned_free"
api_location: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
  - "api-ms-win-crt-heap-l1-1-0.dll"
api_type: 
  - "DLLExport"
topic_type: 
  - "apiref"
f1_keywords: 
  - "aligned_free"
  - "_aligned_free"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_aligned_free function"
  - "aligned_free function"
ms.assetid: ed1ce952-cdfc-4682-85cc-f75d4101603d
caps.latest.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _aligned_free
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [_aligned_free](https://docs.microsoft.com/cpp/c-runtime-library/reference/aligned-free).  
  
  
Frees a block of memory that was allocated with [_aligned_malloc](../../c-runtime-library/reference/aligned-malloc.md) or [_aligned_offset_malloc](../../c-runtime-library/reference/aligned-offset-malloc.md).  
  
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
 `_aligned_free` is marked `__declspec(noalias)`, meaning that the function is guaranteed not to modify global variables. For more information, see [noalias](../../cpp/noalias.md).  
  
 This function does not validate its parameter, unlike the other _aligned CRT functions. If `memblock` is a `NULL` pointer, this function simply performs no actions. It does not change `errno` and it does not invoke the invalid parameter handler. If an error occurs in the function due to not using _aligned functions previously to allocate the block of memory or a misalignment of memory occurs due to some unforeseen calamity, the function generates a debug report from the [_RPT, _RPTF, _RPTW, _RPTFW Macros](../../c-runtime-library/reference/rpt-rptf-rptw-rptfw-macros.md).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_aligned_free`|\<malloc.h>|  
  
## Example  
 For more information, see [_aligned_malloc](../../c-runtime-library/reference/aligned-malloc.md).  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [Data Alignment](../../c-runtime-library/data-alignment.md)



