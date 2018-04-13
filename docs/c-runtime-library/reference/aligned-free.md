---
title: "_aligned_free | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
apiname: ["_aligned_free"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-heap-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["aligned_free", "_aligned_free"]
dev_langs: ["C++"]
helpviewer_keywords: ["_aligned_free function", "aligned_free function"]
ms.assetid: ed1ce952-cdfc-4682-85cc-f75d4101603d
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
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

*memblock*
A pointer to the memory block that was returned to the `_aligned_malloc` or `_aligned_offset_malloc` function.

## Remarks

`_aligned_free` is marked `__declspec(noalias)`, meaning that the function is guaranteed not to modify global variables. For more information, see [noalias](../../cpp/noalias.md).

This function does not validate its parameter, unlike the other _aligned CRT functions. If *memblock* is a `NULL` pointer, this function simply performs no actions. It does not change `errno` and it does not invoke the invalid parameter handler. If an error occurs in the function due to not using _aligned functions previously to allocate the block of memory or a misalignment of memory occurs due to some unforeseen calamity, the function generates a debug report from the [_RPT, _RPTF, _RPTW, _RPTFW Macros](rpt-rptf-rptw-rptfw-macros.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|`_aligned_free`|\<malloc.h>|

## Example

For more information, see [_aligned_malloc](aligned-malloc.md).

## See also

[Data Alignment](../../c-runtime-library/data-alignment.md)<br/>
