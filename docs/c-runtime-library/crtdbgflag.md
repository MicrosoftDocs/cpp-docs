---
description: "Learn more about: _crtDbgFlag"
title: "_crtDbgFlag"
ms.date: "11/04/2016"
f1_keywords: ["_crtDbgFlag", "crtDbgFlag"]
helpviewer_keywords: ["memory allocation, tracking flag", "crtDbgFlag constant", "_crtDbgFlag constant", "debug heap, tracking memory on", "debug heap, control flags", "enable memory allocation tracking flag", "memory, tracking on the debug heap"]
ms.assetid: 9e7adb47-8ab9-4e19-81d5-e2f237979973
---
# _crtDbgFlag

The **_crtDbgFlag** flag consists of five bit fields that control how memory allocations on the debug version of the heap are tracked, verified, reported, and dumped. The bit fields of the flag are set using the [_CrtSetDbgFlag](../c-runtime-library/reference/crtsetdbgflag.md) function. This flag and its bit fields are declared in Crtdbg.h. This flag is only available when the [_DEBUG](../c-runtime-library/debug.md) flag has been defined in the application.

For more information about using this flag in conjunction with other debug functions, see [Heap State Reporting Functions](/visualstudio/debugger/crt-debug-heap-details).

## See also

[Control Flags](../c-runtime-library/control-flags.md)
