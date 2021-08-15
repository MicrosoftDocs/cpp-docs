---
description: "Learn more about: _setjmp3"
title: "_setjmp3"
ms.date: "1/14/2021"
api_name: ["_setjmp3"]
api_location: ["msvcrt.dll", "msvcr90.dll", "msvcr110.dll", "msvcr80.dll", "msvcr110_clr0400.dll", "msvcr100.dll", "msvcr120.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["setjmp3", "_setjmp3"]
helpviewer_keywords: ["_setjmp3 function", "setjmp3 function"]
ms.assetid: 6129c2f3-8bac-4fdb-a827-44e1eebba500
---
# `_setjmp3`

Internal CRT function. A new implementation of the `setjmp` function.

## Syntax

```
int _setjmp3(
   OUT jmp_buf env,
   int count,
   (optional parameters)
);
```

#### Parameters

*`env`*\
[out] Address of the buffer for storing state information.

*`count`*\
[in] The number of additional `DWORD`s of information that are stored in the `optional parameters`.

*`optional parameters`*\
[in] Additional data pushed down by the `setjmp` intrinsic. The first `DWORD` is a function pointer that is used to unwind extra data and return to a nonvolatile register state. The second `DWORD` is the try level to be restored. Any further data is saved in the generic data array in the `jmp_buf`.

## Return Value

Always returns 0.

## Remarks

Don't use this function in a C++ program. It's an intrinsic function that doesn't support C++. For more information about how to use `setjmp`, see [Using setjmp/longjmp](../cpp/using-setjmp-longjmp.md).

## Requirements

## See also

[Alphabetical Function Reference](../c-runtime-library/reference/crt-alphabetical-function-reference.md)\
[`setjmp`](../c-runtime-library/reference/setjmp.md)
