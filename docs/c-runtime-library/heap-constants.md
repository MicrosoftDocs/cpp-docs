---
description: "Learn more about: Heap Constants"
title: "Heap Constants"
ms.date: "11/04/2016"
f1_keywords: ["_HEAPBADPTR", "_HEAPEMPTY", "_HEAPBADBEGIN", "_HEAPOK", "_HEAPBADNODE", "_HEAPEND"]
helpviewer_keywords: ["_HEAPOK constants", "_HEAPEND constants", "HEAPBADBEGIN constants", "_HEAPBADNODE constants", "HEAPBADNODE constants", "HEAPBADPTR constants", "_HEAPEMPTY constants", "HEAPEND constants", "HEAPOK constants", "HEAPEMPTY constants", "_HEAPBADBEGIN constants", "_HEAPBADPTR constants", "heap constants"]
ms.assetid: 3f751bb9-2dc4-486f-b5f5-9061c96d3754
---
# Heap Constants

## Syntax

```
#include <malloc.h>
```

## Remarks

These constants give the return value indicating status of the heap.

|Constant|Meaning|
|--------------|-------------|
|`_HEAPBADBEGIN`|Initial header information was not found or was invalid.|
|`_HEAPBADNODE`|Bad node was found, or heap is damaged.|
|`_HEAPBADPTR`|**_pentry** field of **_HEAPINFO** structure does not contain valid pointer into heap (`_heapwalk` routine only).|
|`_HEAPEMPTY`|Heap has not been initialized.|
|`_HEAPEND`|End of heap was reached successfully (`_heapwalk` routine only).|
|`_HEAPOK`|Heap is consistent (`_heapset` and `_heapchk` routines only). No errors so far; **_HEAPINFO** structure contains information about next entry (`_heapwalk` routine only).|

## See also

[_heapchk](../c-runtime-library/reference/heapchk.md)<br/>
[_heapset](../c-runtime-library/heapset.md)<br/>
[_heapwalk](../c-runtime-library/reference/heapwalk.md)<br/>
[Global Constants](../c-runtime-library/global-constants.md)
