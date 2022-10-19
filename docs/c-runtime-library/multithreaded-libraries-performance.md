---
title: "Multithreaded Libraries Performance"
description: "An overview of how to get the most performance from the Microsoft C runtime multithreaded libraries."
ms.date: "11/04/2016"
ms.topic: "conceptual"
helpviewer_keywords: ["threading [C++], performance", "libraries, multithreaded", "performance, multithreading", "multithreaded libraries"]
ms.assetid: faa5d808-087c-463d-8f0d-8c478d137296
---
# Multithreaded libraries performance

The single-threaded CRT is no longer available. This article discusses how to get the maximum performance from the multithreaded libraries.

## Maximizing performance

The performance of the multithreaded libraries has been improved and is close to the performance of the now-eliminated single-threaded libraries. For those situations when even higher performance is required, there are several new features.

- Independent stream locking allows you to lock a stream and then use [`_nolock` functions](./nolock-functions.md) that access the stream directly. This feature allows lock usage to be hoisted outside critical loops.

- Per-thread locale reduces the cost of locale access for multithreaded scenarios (see [`_configthreadlocale`](./reference/configthreadlocale.md)).

- Locale-dependent functions (with names ending in _l) take the locale as a parameter, removing substantial cost (for example, [`printf`, `_printf_l`, `wprintf`, `_wprintf_l`](./reference/printf-printf-l-wprintf-wprintf-l.md)).

- Optimizations for common codepages reduce the cost of many short operations.

- Defining [`_CRT_DISABLE_PERFCRIT_LOCKS`](./crt-disable-perfcrit-locks.md) forces all I/O operations to assume a single-threaded I/O model and use the `_nolock` forms of the functions. This macro allows highly I/O-based single-threaded applications to get better performance.

- Exposure of the CRT heap handle allows you to enable the Windows Low Fragmentation Heap (LFH) for the CRT heap, which can substantially improve performance in highly scaled scenarios.

## See also

[C runtime (CRT) and C++ Standard Library (STL) `.lib` files](./crt-library-features.md)
