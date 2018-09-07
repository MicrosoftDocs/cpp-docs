---
title: "_msize | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["_msize"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-heap-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["msize", "_msize"]
dev_langs: ["C++"]
helpviewer_keywords: ["memory blocks", "msize function", "_msize function"]
ms.assetid: 02b1f89e-d0d7-4f12-938a-9eeba48a0f88
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# _msize

Returns the size of a memory block allocated in the heap.

## Syntax

```C
size_t _msize(
   void *memblock
);
```

### Parameters

*memblock*<br/>
Pointer to the memory block.

## Return Value

**_msize** returns the size (in bytes) as an unsigned integer.

## Remarks

The **_msize** function returns the size, in bytes, of the memory block allocated by a call to **calloc**, **malloc**, or **realloc**.

When the application is linked with a debug version of the C run-time libraries, **_msize** resolves to [_msize_dbg](msize-dbg.md). For more information about how the heap is managed during the debugging process, see [The CRT Debug Heap](/visualstudio/debugger/crt-debug-heap-details).

This function validates its parameter. If *memblock* is a null pointer, **_msize** invokes an invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If the error is handled, the function sets **errno** to **EINVAL** and returns -1.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_msize**|\<malloc.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).

## Example

See the example for [realloc](realloc.md).

## See also

[Memory Allocation](../../c-runtime-library/memory-allocation.md)<br/>
[calloc](calloc.md)<br/>
[_expand](expand.md)<br/>
[malloc](malloc.md)<br/>
[realloc](realloc.md)<br/>
