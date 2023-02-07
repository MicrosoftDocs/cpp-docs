---
description: "Learn more about: _crtDbgFlag"
title: "_crtDbgFlag"
ms.date: "11/04/2016"
f1_keywords: ["_crtDbgFlag", "CRTDBG/_crtDbgFlag"]
helpviewer_keywords: ["memory allocation, tracking flag", "crtDbgFlag constant", "_crtDbgFlag constant", "debug heap, tracking memory on", "debug heap, control flags", "enable memory allocation tracking flag", "memory, tracking on the debug heap"]
ms.assetid: 9e7adb47-8ab9-4e19-81d5-e2f237979973
---
# `_crtDbgFlag`

The **`_crtDbgFlag`** flag consists of five bit-fields that control how memory allocations on the debug version of the heap are tracked, verified, reported, and dumped. The bit fields of the flag are set using the [`_CrtSetDbgFlag`](./reference/crtsetdbgflag.md) function. This flag and its bit fields are declared in Crtdbg.h. This flag is only available when the [`_DEBUG`](./debug.md) flag has been defined in the application.

For more information about using this flag along with other debug functions, see [Heap state reporting functions](./crt-debug-heap-details.md#heap-state-reporting-functions).

## See also

[Control flags](./control-flags.md)
