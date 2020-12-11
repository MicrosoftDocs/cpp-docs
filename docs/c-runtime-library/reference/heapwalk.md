---
description: "Learn more about: _heapwalk"
title: "_heapwalk"
ms.date: "11/04/2016"
api_name: ["_heapwalk"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-heap-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["heapwalk", "_heapwalk"]
helpviewer_keywords: ["debugging [CRT], heap-related problems", "heapwalk function", "_heapwalk function"]
ms.assetid: 2df67649-fb00-4570-a8b1-a4eca5738744
---
# _heapwalk

Traverses the heap and returns information about the next entry.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime except in Debug builds. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
int _heapwalk( _HEAPINFO *entryinfo );
```

### Parameters

*entryinfo*<br/>
Buffer to contain heap information.

## Return Value

**_heapwalk** returns one of the following integer manifest constants defined in Malloc.h.

|Return value|Meaning|
|-|-|
|**_HEAPBADBEGIN**| Initial header information invalid or not found.|
|**_HEAPBADNODE**| Heap damaged or bad node found.|
|**_HEAPBADPTR**| The **_pentry** field of the **_HEAPINFO** structure does not contain a valid pointer into the heap or *entryinfo* is a null pointer.|
|**_HEAPEND**| End of the heap reached successfully.|
|**_HEAPEMPTY**| Heap not initialized.|
|**_HEAPOK**| No errors so far; *entryinfo* is updated with information about the next heap entry.|

In addition, if an error occurs, **_heapwalk** sets **errno** to **ENOSYS**.

## Remarks

The **_heapwalk** function helps debug heap-related problems in programs. The function walks through the heap, traversing one entry per call, and returns a pointer to a structure of type **_HEAPINFO** that contains information about the next heap entry. The **_HEAPINFO** type, defined in Malloc.h, contains the following elements.

|Field|Meaning|
|-|-|
|`int *_pentry`|Heap entry pointer.|
|`size_t _size`|Size of the heap entry.|
|`int _useflag`|Flag that indicates whether the heap entry is in use.|

A call to **_heapwalk** that returns **_HEAPOK** stores the size of the entry in the **_size** field and sets the **_useflag** field to either **_FREEENTRY** or **_USEDENTRY** (both are constants defined in Malloc.h). To obtain this information about the first entry in the heap, pass **_heapwalk** a pointer to a **_HEAPINFO** structure whose **_pentry** member is **NULL**. If the operating system does not support **_heapwalk**(for example, Windows 98), the function returns **_HEAPEND** and sets **errno** to **ENOSYS**.

This function validates its parameter. If *entryinfo* is a null pointer, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, **errno** is set to **EINVAL** and the function returns **_HEAPBADPTR**.

## Requirements

|Routine|Required header|Optional header|
|-------------|---------------------|---------------------|
|**_heapwalk**|\<malloc.h>|\<errno.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_heapwalk.c

// This program "walks" the heap, starting
// at the beginning (_pentry = NULL). It prints out each
// heap entry's use, location, and size. It also prints
// out information about the overall state of the heap as
// soon as _heapwalk returns a value other than _HEAPOK
// or if the loop has iterated 100 times.

#include <stdio.h>
#include <malloc.h>

void heapdump(void);

int main(void)
{
    char *buffer;

    heapdump();
    if((buffer = (char *)malloc(59)) != NULL)
    {
        heapdump();
        free(buffer);
    }
    heapdump();
}

void heapdump(void)
{
    _HEAPINFO hinfo;
    int heapstatus;
    int numLoops;
    hinfo._pentry = NULL;
    numLoops = 0;
    while((heapstatus = _heapwalk(&hinfo)) == _HEAPOK &&
          numLoops < 100)
    {
        printf("%8s block at %Fp of size %4.4X\n",
               (hinfo._useflag == _USEDENTRY ? "USED" : "FREE"),
               hinfo._pentry, hinfo._size);
        numLoops++;
    }

    switch(heapstatus)
    {
    case _HEAPEMPTY:
        printf("OK - empty heap\n");
        break;
    case _HEAPEND:
        printf("OK - end of heap\n");
        break;
    case _HEAPBADPTR:
        printf("ERROR - bad pointer to heap\n");
        break;
    case _HEAPBADBEGIN:
        printf("ERROR - bad start of heap\n");
        break;
    case _HEAPBADNODE:
        printf("ERROR - bad node in heap\n");
        break;
    }
}
```

```Output
    USED block at 00310650 of size 0100
    USED block at 00310758 of size 0800
    USED block at 00310F60 of size 0080
    FREE block at 00310FF0 of size 0398
    USED block at 00311390 of size 000D
    USED block at 003113A8 of size 00B4
    USED block at 00311468 of size 0034
    USED block at 003114A8 of size 0039
...
    USED block at 00312228 of size 0010
    USED block at 00312240 of size 1000
    FREE block at 00313250 of size 1DB0
OK - end of heap
```

## See also

[Memory Allocation](../../c-runtime-library/memory-allocation.md)<br/>
[_heapadd](../../c-runtime-library/heapadd.md)<br/>
[_heapchk](heapchk.md)<br/>
[_heapmin](heapmin.md)<br/>
[_heapset](../../c-runtime-library/heapset.md)<br/>
