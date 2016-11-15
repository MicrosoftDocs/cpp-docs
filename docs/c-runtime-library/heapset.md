---
title: "_heapset | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_heapset"
apilocation: 
  - "msvcr90.dll"
  - "msvcr80.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcrt.dll"
  - "msvcr120.dll"
  - "msvcr100.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_heapset"
  - "heapset"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "checking heap"
  - "heapset function"
  - "heaps, checking"
  - "debugging [CRT], heap-related problems"
  - "_heapset function"
ms.assetid: 9667eeb0-55bc-4c19-af5f-d1fd0a142b3c
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# _heapset
Checks heaps for minimal consistency and sets the free entries to a specified value.  
  
> [!IMPORTANT]
>  This function is obsolete. Beginning in Visual Studio 2015, it is not available in the CRT.  
  
## Syntax  
  
```  
int _heapset(   
   unsigned int fill   
);  
```  
  
#### Parameters  
 `fill`  
 Fill character.  
  
## Return Value  
 `_heapset` returns one of the following integer manifest constants defined in Malloc.h.  
  
 `_HEAPBADBEGIN`  
 Initial header information invalid or not found.  
  
 `_HEAPBADNODE`  
 Heap damaged or bad node found.  
  
 `_HEAPEMPTY`  
 Heap not initialized.  
  
 `_HEAPOK`  
 Heap appears to be consistent.  
  
 In addition, if an error occurs, `_heapset` sets `errno` to `ENOSYS`.  
  
## Remarks  
 The `_heapset` function shows free memory locations or nodes that have been unintentionally overwritten.  
  
 `_heapset` checks for minimal consistency on the heap and then sets each byte of the heap's free entries to the `fill` value. This known value shows which memory locations of the heap contain free nodes and which contain data that were unintentionally written to freed memory. If the operating system does not support `_heapset`(for example, Windows 98), the function returns `_HEAPOK` and sets `errno` to `ENOSYS`.  
  
## Requirements  
  
|Routine|Required header|Optional header|  
|-------------|---------------------|---------------------|  
|`_heapset`|\<malloc.h>|\<errno.h>|  
  
 For more compatibility information, see [Compatibility](../c-runtime-library/compatibility.md) in the Introduction.  
  
## Example  
  
```  
// crt_heapset.c  
// This program checks the heap and  
// fills in free entries with the character 'Z'.  
  
#include <malloc.h>  
#include <stdio.h>  
#include <stdlib.h>  
  
int main( void )  
{  
   int heapstatus;  
   char *buffer;  
  
   if( (buffer = malloc( 1 )) == NULL ) // Make sure heap is   
      exit( 0 );                        //    initialized       
   heapstatus = _heapset( 'Z' );        // Fill in free entries   
   switch( heapstatus )  
   {  
   case _HEAPOK:  
      printf( "OK - heap is fine\n" );  
      break;  
   case _HEAPEMPTY:  
      printf( "OK - heap is empty\n" );  
      break;  
   case _HEAPBADBEGIN:  
      printf( "ERROR - bad start of heap\n" );  
      break;  
   case _HEAPBADNODE:  
      printf( "ERROR - bad node in heap\n" );  
      break;  
   }  
   free( buffer );  
}  
```  
  
```Output  
OK - heap is fine  
```  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [Memory Allocation](../c-runtime-library/memory-allocation.md)   
 [_heapadd](../c-runtime-library/heapadd.md)   
 [_heapchk](../c-runtime-library/reference/heapchk.md)   
 [_heapmin](../c-runtime-library/reference/heapmin.md)   
 [_heapwalk](../c-runtime-library/reference/heapwalk.md)