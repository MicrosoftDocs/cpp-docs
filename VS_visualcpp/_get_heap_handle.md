---
title: "_get_heap_handle"
ms.custom: na
ms.date: 10/06/2016
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
  - _get_heap_handle
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
ms.assetid: a4d05049-8528-494a-8281-a470d1e1115c
caps.latest.revision: 16
manager: ghogen
translation.priority.mt: 
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
# _get_heap_handle
Returns the handle of the heap that's used by the C run-time system.  
  
## Syntax  
  
```  
intptr_t _get_heap_handle( void );  
```  
  
## Return Value  
 Returns the handle to the Win32 heap used by the C run-time system.  
  
## Remarks  
 Use this function if you want to call [HeapSetInformation](http://msdn.microsoft.com/library/windows/desktop/aa366705) and enable the Low Fragmentation Heap on the CRT heap.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_get_heap_handle`|<malloc.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## Sample  
  
```  
// crt_get_heap_handle.cpp  
// compile with: /MT  
#include <windows.h>  
#include <malloc.h>  
#include <stdio.h>  
  
int main(void)  
{  
    intptr_t hCrtHeap = _get_heap_handle();  
    ULONG ulEnableLFH = 2;  
    if (HeapSetInformation((PVOID)hCrtHeap,  
                           HeapCompatibilityInformation,  
                           &ulEnableLFH, sizeof(ulEnableLFH)))  
        puts("Enabling Low Fragmentation Heap succeeded");  
    else  
        puts("Enabling Low Fragmentation Heap failed");  
    return 0;  
}  
```  
  
## See Also  
 [Memory Allocation](../VS_visualcpp/Memory-Allocation.md)