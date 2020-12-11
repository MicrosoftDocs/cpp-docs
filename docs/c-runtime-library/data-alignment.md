---
description: "Learn more about: Data Alignment"
title: "Data Alignment"
ms.date: "11/04/2016"
f1_keywords: ["data.alignment"]
helpviewer_keywords: ["data alignment [C++]"]
ms.assetid: 35ac3d2d-a4b3-421b-954f-b7372b1f18e1
---
# Data Alignment

The following C run-time functions support data alignment.

## Data-Alignment Routines

|Routine|Use|
|-------------|---------|
|[_aligned_free](../c-runtime-library/reference/aligned-free.md)|Frees a block of memory that was allocated with [_aligned_malloc](../c-runtime-library/reference/aligned-malloc.md)or [_aligned_offset_malloc](../c-runtime-library/reference/aligned-offset-malloc.md).|
|[_aligned_free_dbg](../c-runtime-library/reference/aligned-free-dbg.md)|Frees a block of memory that was allocated with [_aligned_malloc](../c-runtime-library/reference/aligned-malloc.md) or [_aligned_offset_malloc](../c-runtime-library/reference/aligned-offset-malloc.md) (debug only).|
|[_aligned_malloc](../c-runtime-library/reference/aligned-malloc.md)|Allocates memory on a specified alignment boundary.|
|[_aligned_malloc_dbg](../c-runtime-library/reference/aligned-malloc-dbg.md)|Allocates memory on a specified alignment boundary with additional space for a debugging header and overwrite buffers (debug version only).|
|[_aligned_msize](../c-runtime-library/reference/aligned-msize.md)|Returns the size of a memory block allocated in the heap.|
|[_aligned_msize_dbg](../c-runtime-library/reference/aligned-msize-dbg.md)|Returns the size of a memory block allocated in the heap (debug version only).|
|[_aligned_offset_malloc](../c-runtime-library/reference/aligned-offset-malloc.md)|Allocates memory on a specified alignment boundary.|
|[_aligned_offset_malloc_dbg](../c-runtime-library/reference/aligned-offset-malloc-dbg.md)|Allocates memory on a specified alignment boundary (debug version only).|
|[_aligned_offset_realloc](../c-runtime-library/reference/aligned-offset-realloc.md)|Changes the size of a memory block that was allocated with [_aligned_malloc](../c-runtime-library/reference/aligned-malloc.md) or [_aligned_offset_malloc](../c-runtime-library/reference/aligned-offset-malloc.md).|
|[_aligned_offset_realloc_dbg](../c-runtime-library/reference/aligned-offset-realloc-dbg.md)|Changes the size of a memory block that was allocated with [_aligned_malloc](../c-runtime-library/reference/aligned-malloc.md) or [_aligned_offset_malloc](../c-runtime-library/reference/aligned-offset-malloc.md) (debug version only).|
|[_aligned_offset_recalloc](../c-runtime-library/reference/aligned-offset-recalloc.md)|Changes the size of a memory block that was allocated with [_aligned_malloc](../c-runtime-library/reference/aligned-malloc.md) or [_aligned_offset_malloc](../c-runtime-library/reference/aligned-offset-malloc.md) and initializes the memory to 0.|
|[_aligned_offset_recalloc_dbg](../c-runtime-library/reference/aligned-offset-recalloc-dbg.md)|Changes the size of a memory block that was allocated with [_aligned_malloc](../c-runtime-library/reference/aligned-malloc.md) or [_aligned_offset_malloc](../c-runtime-library/reference/aligned-offset-malloc.md) and initializes the memory to 0 (debug version only).|
|[_aligned_realloc](../c-runtime-library/reference/aligned-realloc.md)|Changes the size of a memory block that was allocated with [_aligned_malloc](../c-runtime-library/reference/aligned-malloc.md) or [_aligned_offset_malloc](../c-runtime-library/reference/aligned-offset-malloc.md).|
|[_aligned_realloc_dbg](../c-runtime-library/reference/aligned-realloc-dbg.md)|Changes the size of a memory block that was allocated with [_aligned_malloc](../c-runtime-library/reference/aligned-malloc.md) or [_aligned_offset_malloc](../c-runtime-library/reference/aligned-offset-malloc.md) (debug version only).|
|[_aligned_recalloc](../c-runtime-library/reference/aligned-recalloc.md)|Changes the size of a memory block that was allocated with [_aligned_malloc](../c-runtime-library/reference/aligned-malloc.md) or [_aligned_offset_malloc](../c-runtime-library/reference/aligned-offset-malloc.md) and initializes the memory to 0.|
|[_aligned_recalloc_dbg](../c-runtime-library/reference/aligned-recalloc-dbg.md)|Changes the size of a memory block that was allocated with [_aligned_malloc](../c-runtime-library/reference/aligned-malloc.md) or [_aligned_offset_malloc](../c-runtime-library/reference/aligned-offset-malloc.md) and initializes the memory to 0 (debug version only).|

## See also

[Universal C runtime routines by category](../c-runtime-library/run-time-routines-by-category.md)<br/>
