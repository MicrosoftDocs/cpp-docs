---
description: "Learn more about: _CRT_DISABLE_PERFCRIT_LOCKS"
title: "_CRT_DISABLE_PERFCRIT_LOCKS"
ms.date: "11/04/2016"
f1_keywords: ["_CRT_DISABLE_PERFCRIT_LOCKS", "CRT_DISABLE_PERFCRIT_LOCKS"]
helpviewer_keywords: ["CRT_DISABLE_PERFCRIT_LOCKS constant", "_CRT_DISABLE_PERFCRIT_LOCKS constant"]
ms.assetid: 36cc2d86-cdb1-4b2b-a03c-c0d3818e7c6f
---
# _CRT_DISABLE_PERFCRIT_LOCKS

Disables performance-critical locking in I/O operations.

## Syntax

```
#define _CRT_DISABLE_PERFCRIT_LOCKS
```

## Remarks

Defining this symbol can improve performance in single-threaded I/O-bound programs by forcing all I/O operations to assume a single-threaded I/O model. For more information, see [Multithreaded Libraries Performance](../c-runtime-library/multithreaded-libraries-performance.md).

## See also

[Global Constants](../c-runtime-library/global-constants.md)
