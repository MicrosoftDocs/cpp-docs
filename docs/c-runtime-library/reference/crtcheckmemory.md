---
title: "_CrtCheckMemory"
description: "Learn more about: _CrtCheckMemory"
ms.date: "11/04/2016"
api_name: ["_CrtCheckMemory"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["CrtCheckMemory", "_CrtCheckMemory"]
helpviewer_keywords: ["_CrtCheckMemory function", "CrtCheckMemory function"]
---
# `_CrtCheckMemory`

Confirms the integrity of the memory blocks allocated in the debug heap (debug version only).

## Syntax

```C
int _CrtCheckMemory( void );
```

## Return value

If successful, **`_CrtCheckMemory`** returns `TRUE`; otherwise, the function returns `FALSE`.

## Remarks

The **`_CrtCheckMemory`** function validates memory allocated by the debug heap manager by verifying the underlying base heap and inspecting every memory block. If an error or memory inconsistency is encountered in the underlying base heap, the debug header information, or the overwrite buffers, **`_CrtCheckMemory`** generates a debug report with information describing the error condition. When [`_DEBUG`](../debug.md) isn't defined, calls to **`_CrtCheckMemory`** are removed during preprocessing.

The behavior of **`_CrtCheckMemory`** can be controlled by setting the bit fields of the [`_crtDbgFlag`](../crtdbgflag.md) flag using the [`_CrtSetDbgFlag`](crtsetdbgflag.md) function. Turning the `_CRTDBG_CHECK_ALWAYS_DF` bit field ON results in **`_CrtCheckMemory`** being called every time a memory allocation operation is requested. Although this method slows down execution, it's useful for catching errors quickly. Turning the `_CRTDBG_ALLOC_MEM_DF` bit field OFF causes **`_CrtCheckMemory`** to not verify the heap and immediately return `TRUE`.

Because this function returns `TRUE` or `FALSE`, it can be passed to one of the [`_ASSERT`](assert-asserte-assert-expr-macros.md) macros to create a basic debugging error handling mechanism. The following example causes an assertion failure if corruption is detected in the heap:

```C
_ASSERTE( _CrtCheckMemory( ) );
```

For more information about how **`_CrtCheckMemory`** can be used with other debug functions, see [Heap state reporting functions](../crt-debug-heap-details.md#heap-state-reporting-functions). For an overview of memory management and the debug heap, see [CRT debug heap details](../crt-debug-heap-details.md).

## Requirements

| Routine | Required header |
|---|---|
| **`_CrtCheckMemory`** | \<crtdbg.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## Libraries

Debug versions of [C run-time libraries](../crt-library-features.md) only.

## Example

For a sample of how to use **`_CrtCheckMemory`**, see [`crt_dbg1`](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/crt/crt_dbg1).

## See also

[Debug routines](../debug-routines.md)\
[`_crtDbgFlag`](../crtdbgflag.md)\
[`_CrtSetDbgFlag`](crtsetdbgflag.md)
