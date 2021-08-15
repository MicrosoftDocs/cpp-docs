---
description: "Learn more about: _aligned_free"
title: "_aligned_free"
ms.date: "4/2/2020"
api_name: ["_aligned_free", "_o__aligned_free"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-heap-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["aligned_free", "_aligned_free"]
helpviewer_keywords: ["_aligned_free function", "aligned_free function"]
ms.assetid: ed1ce952-cdfc-4682-85cc-f75d4101603d
---
# _aligned_free

Frees a block of memory that was allocated with [_aligned_malloc](aligned-malloc.md) or [_aligned_offset_malloc](aligned-offset-malloc.md).

## Syntax

```C
void _aligned_free (
   void *memblock
);
```

### Parameters

*memblock*<br/>
A pointer to the memory block that was returned to the `_aligned_malloc` or `_aligned_offset_malloc` function.

## Remarks

**_aligned_free** is marked `__declspec(noalias)`, meaning that the function is guaranteed not to modify global variables. For more information, see [noalias](../../cpp/noalias.md).

This function does not validate its parameter, unlike the other _aligned CRT functions. If *memblock* is a NULL pointer, this function simply performs no actions. It does not change `errno` and it does not invoke the invalid parameter handler. If an error occurs in the function due to not using _aligned functions previously to allocate the block of memory or a misalignment of memory occurs due to some unforeseen calamity, the function generates a debug report from the [_RPT, _RPTF, _RPTW, _RPTFW Macros](rpt-rptf-rptw-rptfw-macros.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_aligned_free**|\<malloc.h>|

## Example

For more information, see [_aligned_malloc](aligned-malloc.md).

## See also

[Data Alignment](../../c-runtime-library/data-alignment.md)
