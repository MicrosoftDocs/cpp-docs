---
title: "_heapmin"
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
  - _heapmin
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
ms.assetid: c0bccdf6-2d14-4d7b-a7ff-d6a17bdb410f
caps.latest.revision: 11
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
# _heapmin
Releases unused heap memory to the operating system.  
  
## Syntax  
  
```  
int _heapmin( void );  
```  
  
## Return Value  
 If successful, `_heapmin` returns 0; otherwise, the function returns –1 and sets `errno` to `ENOSYS`.  
  
 For more information about this and other return codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../VS_visualcpp/errno--_doserrno--_sys_errlist--and-_sys_nerr.md).  
  
## Remarks  
 The `_heapmin` function minimizes the heap by releasing unused heap memory to the operating system. If the operating system does not support `_heapmin`(for example, Windows 98), the function returns –1 and sets `errno` to `ENOSYS`.  
  
## Requirements  
  
|Routine|Required header|Optional header|  
|-------------|---------------------|---------------------|  
|`_heapmin`|<malloc.h>|<errno.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Memory Allocation](../VS_visualcpp/Memory-Allocation.md)   
 [free](../VS_visualcpp/free.md)   
 [_heapadd](../VS_visualcpp/_heapadd.md)   
 [_heapchk](../VS_visualcpp/_heapchk.md)   
 [_heapset](../VS_visualcpp/_heapset.md)   
 [_heapwalk](../VS_visualcpp/_heapwalk.md)   
 [malloc](../VS_visualcpp/malloc.md)