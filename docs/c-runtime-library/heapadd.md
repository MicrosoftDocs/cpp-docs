---
title: "_heapadd | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "conceptual"
apiname: ["_heapadd"]
apilocation: ["msvcr100.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr80.dll", "msvcrt.dll", "msvcr110.dll", "msvcr90.dll"]
apitype: "DLLExport"
f1_keywords: ["heapadd", "_heapadd"]
dev_langs: ["C++"]
helpviewer_keywords: ["_heapadd function", "memory, adding to heaps", "heaps, adding memory", "heapadd function"]
ms.assetid: 4d691fe2-2763-49f4-afb1-62738b7cd3ff
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# _heapadd
Adds memory to the heap.  
  
> [!IMPORTANT]
>  This function is obsolete. Beginning in Visual Studio 2015, it is not available in the CRT.  
  
## Syntax  
  
```  
int _heapadd(   
   void *memblock,  
   size_t size   
);  
```  
  
#### Parameters  
 `memblock`  
 Pointer to the heap memory.  
  
 `size`  
 Size of memory to add, in bytes.  
  
## Return Value  
 If successful, `_heapadd` returns 0; otherwise, the function returns -1 and sets `errno` to `ENOSYS`.  
  
 For more information about this and other return codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Remarks  
 Beginning with Visual C++ version 4.0, the underlying heap structure was moved to the C run-time libraries to support the new debugging features. As a result, `_heapadd` is no longer supported on any platform that is based on the Win32 API.  
  
## Requirements  
  
|Routine|Required header|Optional header|  
|-------------|---------------------|---------------------|  
|`_heapadd`|\<malloc.h>|\<errno.h>|  
  
 For more compatibility information, see [Compatibility](../c-runtime-library/compatibility.md) in the Introduction.  
  
## See Also  
 [Memory Allocation](../c-runtime-library/memory-allocation.md)   
 [free](../c-runtime-library/reference/free.md)   
 [_heapchk](../c-runtime-library/reference/heapchk.md)   
 [_heapmin](../c-runtime-library/reference/heapmin.md)   
 [_heapset](../c-runtime-library/heapset.md)   
 [_heapwalk](../c-runtime-library/reference/heapwalk.md)   
 [malloc](../c-runtime-library/reference/malloc.md)   
 [realloc](../c-runtime-library/reference/realloc.md)