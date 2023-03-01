---
description: "Learn more about: _CrtIsValidPointer"
title: "_CrtIsValidPointer"
ms.date: "11/04/2016"
api_name: ["_CrtIsValidPointer"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["CrtlsValidPointer", "_CrtIsValidPointer"]
helpviewer_keywords: ["CrtIsValidPointer function", "_CrtIsValidPointer function"]
ms.assetid: 91c35590-ea5e-450f-a15d-ad8d62ade1fa
---
# `_CrtIsValidPointer`

Verifies that a pointer isn't null. In versions of the C run-time library before Visual Studio 2010, verifies that a specified memory range is valid for reading and writing (debug version only).

## Syntax

```C
int _CrtIsValidPointer(
   const void *address,
   unsigned int size,
   int access
);
```

### Parameters

*`address`*\
Points to the beginning of the memory range to test for validity.

*`size`*\
Size of the specified memory range (in bytes).

*`access`*\
Read/write accessibility to determine for the memory range.

## Return value

**`_CrtIsValidPointer`** returns `TRUE` if the specified pointer isn't null. In CRT library versions before Visual Studio 2010, returns `TRUE` if the memory range is valid for the specified operation or operations. Otherwise, the function returns `FALSE`.

## Remarks

In the CRT library in Visual Studio 2010 and later versions, the *`size`* and *`access`* parameters are ignored, and **`_CrtIsValidPointer`** only verifies that the specified *`address`* isn't null. Because this test is easy to perform yourself, we don't recommend you use this function. In versions before Visual Studio 2010, the function verifies that the memory range beginning at *`address`* and extending for *`size`* bytes is valid for the specified accessibility operation or operations. When *`access`* is set to `TRUE`, the memory range is verified for both reading and writing. When *`access`* is `FALSE`, the memory range is only validated for reading. When [`_DEBUG`](../debug.md) isn't defined, calls to **`_CrtIsValidPointer`** are removed during preprocessing.

Because this function returns `TRUE` or `FALSE`, it can be passed to one of the [`_ASSERT`](assert-asserte-assert-expr-macros.md) macros to create a basic debugging error handling mechanism. The following example causes an assertion failure if the memory range isn't valid for both reading and writing operations:

```C
_ASSERTE( _CrtIsValidPointer( address, size, TRUE ) );
```

For more information about how **`_CrtIsValidPointer`** can be used with other debug functions and macros, see [Macros for reporting](../crt-debugging-techniques.md#macros-for-reporting). For information about how memory blocks are allocated, initialized, and managed in the debug version of the base heap, see [CRT debug heap details](../crt-debug-heap-details.md).

## Requirements

| Routine | Required header |
|---|---|
| **`_CrtIsValidPointer`** | \<crtdbg.h> |

**`_CrtIsValidPointer`** is a Microsoft extension. For compatibility information, see [Compatibility](../compatibility.md).

## Libraries

Debug versions of [C run-time libraries](../crt-library-features.md) only.

## Example

See the example for the [`_CrtIsValidHeapPointer`](crtisvalidheappointer.md) article.

## See also

[Debug routines](../debug-routines.md)
