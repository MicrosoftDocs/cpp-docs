---
title: Debug versions of heap allocation functions
description: Use debug versions of heap allocation functions in the C run-time library. These functions have the same names as the release versions with _dbg appended.
ms.date: 02/03/2023
helpviewer_keywords:
  - "_CRTDBG_MAP_ALLOC macro"
  - "debugging [CRT], heap allocation functions"
  - "debugging memory leaks, CRT debug library functions"
  - "malloc function"
  - "memory leaks, CRT debug library functions"
  - "heap allocation, debug"
  - "_malloc_dbg function"
---
# Debug versions of heap allocation functions

The C runtime (CRT) library contains special Debug versions of the heap allocation functions. These functions have the same names as the Release versions with `_dbg` appended to them. This article describes the differences between the Release version of a CRT function and the `_dbg` version, using `malloc` and `_malloc_dbg` as examples.

## Behavior in debug builds

When [`_DEBUG`](./debug.md) is defined, the CRT maps all [`malloc`](./reference/malloc.md) calls to [`_malloc_dbg`](./reference/malloc-dbg.md). Therefore, you don't need to rewrite your code using `_malloc_dbg` instead of `malloc` to receive the benefits while debugging.

You might want to call `_malloc_dbg` explicitly, however. Calling `_malloc_dbg` explicitly has some added benefits:

- Tracking `_CLIENT_BLOCK` type allocations.

- Storing the source file and line number where the allocation request occurred.

If you don't want to convert your `malloc` calls to `_malloc_dbg`, you can obtain the source file information by defining [`_CRTDBG_MAP_ALLOC`](./crtdbg-map-alloc.md), which causes the preprocessor to directly map all calls to `malloc` to `_malloc_dbg` instead of relying on a wrapper around `malloc`.

To track the separate types of allocations in client blocks, you must call `_malloc_dbg` directly and set the `blockType` parameter to `_CLIENT_BLOCK`.

## Behavior in non-debug builds

When `_DEBUG` isn't defined, calls to `malloc` aren't disturbed, calls to `_malloc_dbg` are resolved to `malloc`, the definition of [`_CRTDBG_MAP_ALLOC`](./crtdbg-map-alloc.md) is ignored, and source file information pertaining to the allocation request isn't provided. Because `malloc` doesn't have a block type parameter, requests for `_CLIENT_BLOCK` types are treated as standard allocations.

## See also

[CRT debugging techniques](./crt-debugging-techniques.md)
