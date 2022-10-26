---
description: "Learn more about: EXIT_SUCCESS, EXIT_FAILURE"
title: "EXIT_SUCCESS, EXIT_FAILURE"
ms.date: "06/25/2018"
f1_keywords: ["EXIT_FAILURE", "EXIT_SUCCESS", "STDLIB/EXIT_FAILURE", "STDLIB/EXIT_SUCCESS"]
helpviewer_keywords: ["EXIT_SUCCESS constant", "EXIT_FAILURE constant"]
---
# `EXIT_SUCCESS`, `EXIT_FAILURE`

## Required header

```c
#include <stdlib.h>
```

## Remarks

The **`EXIT_SUCCESS`** and `EXIT_FAILURE` constants are arguments for the [`exit`](reference/exit-exit-exit.md) and [`_exit`](reference/exit-exit-exit.md) functions, and the return values for the [`atexit`](reference/atexit.md) and [`_onexit`](reference/onexit-onexit-m.md) functions.

| Constant | Defined value |
|---|---|
| **`EXIT_SUCCESS`** | 0 |
| **`EXIT_FAILURE`** | 1 |

## See also

[Global constants](./global-constants.md)
