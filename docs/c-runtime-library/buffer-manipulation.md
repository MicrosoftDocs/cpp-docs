---
description: "Learn more about: Buffer manipulation"
title: "Buffer manipulation"
ms.date: "04/04/2018"
helpviewer_keywords: ["buffers, manipulation routines", "buffers"]
ms.assetid: 164f4860-ce66-412c-8291-396fbd70f03e
---
# Buffer manipulation

Use these routines to work with areas of memory on a byte-by-byte basis.

## Buffer-manipulation routines

| Routine | Use |
|---|---|
| [`_memccpy`](./reference/memccpy.md) | Copy characters from one buffer to another until given character or given number of characters has been copied |
| [`memchr`, `wmemchr`](./reference/memchr-wmemchr.md) | Return pointer to first occurrence, within specified number of characters, of given character in buffer |
| [`memcmp`, `wmemcmp`](./reference/memcmp-wmemcmp.md) | Compare specified number of characters from two buffers |
| [`memcpy`, `wmemcpy`](./reference/memcpy-wmemcpy.md), [`memcpy_s`, `wmemcpy_s`](./reference/memcpy-s-wmemcpy-s.md) | Copy specified number of characters from one buffer to another |
| [`_memicmp`, `_memicmp_l`](./reference/memicmp-memicmp-l.md) | Compare specified number of characters from two buffers without regard to case |
| [`memmove`, `wmemmove`](./reference/memmove-wmemmove.md),[`memmove_s`, `wmemmove_s`](./reference/memmove-s-wmemmove-s.md) | Copy specified number of characters from one buffer to another |
| [`memset`, `wmemset`](./reference/memset-wmemset.md) | Use given character to initialize specified number of bytes in the buffer |
| [`_swab`](./reference/swab.md) | Swap bytes of data and store them at specified location |

When the source and target areas overlap, only `memmove` is guaranteed to copy the full source properly.

## See also

[Universal C runtime routines by category](./run-time-routines-by-category.md)
