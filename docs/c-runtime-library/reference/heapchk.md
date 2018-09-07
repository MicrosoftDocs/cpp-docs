---
title: "_heapchk | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["_heapchk"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-heap-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["_heapchk", "heapchk"]
dev_langs: ["C++"]
helpviewer_keywords: ["debugging [CRT], heap-related problems", "consistency checking of heaps", "heapchk function", "heaps, checking consistency", "_heapchk function"]
ms.assetid: 859619a5-1e35-4f02-9e09-11d9fa266ec0
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# _heapchk

Runs consistency checks on the heap.

## Syntax

```C
int _heapchk( void );
```

## Return Value

**_heapchk** returns one of the following integer manifest constants defined in Malloc.h.

|Return value|Condition|
|-|-|
**_HEAPBADBEGIN**|Initial header information is bad or cannot be found.
**_HEAPBADNODE**|Bad node has been found or heap is damaged.
**_HEAPBADPTR**|Pointer into heap is not valid.
**_HEAPEMPTY**|Heap has not been initialized.
**_HEAPOK**|Heap appears to be consistent.

In addition, if an error occurs, **_heapchk** sets **errno** to **ENOSYS**.

## Remarks

The **_heapchk** function helps debug heap-related problems by checking for minimal consistency of the heap. If the operating system does not support **_heapchk**(for example, Windows 98), the function returns **_HEAPOK** and sets **errno** to **ENOSYS**.

## Requirements

|Routine|Required header|Optional header|
|-------------|---------------------|---------------------|
|**_heapchk**|\<malloc.h>|\<errno.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_heapchk.c
// This program checks the heap for
// consistency and prints an appropriate message.

#include <malloc.h>
#include <stdio.h>

int main( void )
{
   int  heapstatus;
   char *buffer;

   // Allocate and deallocate some memory
   if( (buffer = (char *)malloc( 100 )) != NULL )
      free( buffer );

   // Check heap status
   heapstatus = _heapchk();
   switch( heapstatus )
   {
   case _HEAPOK:
      printf(" OK - heap is fine\n" );
      break;
   case _HEAPEMPTY:
      printf(" OK - heap is empty\n" );
      break;
   case _HEAPBADBEGIN:
      printf( "ERROR - bad start of heap\n" );
      break;
   case _HEAPBADNODE:
      printf( "ERROR - bad node in heap\n" );
      break;
   }
}
```

```Output
OK - heap is fine
```

## See also

[Memory Allocation](../../c-runtime-library/memory-allocation.md)<br/>
[_heapadd](../../c-runtime-library/heapadd.md)<br/>
[_heapmin](heapmin.md)<br/>
[_heapset](../../c-runtime-library/heapset.md)<br/>
[_heapwalk](heapwalk.md)<br/>
