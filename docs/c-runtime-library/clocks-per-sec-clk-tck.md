---
description: "Learn more about: CLOCKS_PER_SEC, CLK_TCK"
title: "CLOCKS_PER_SEC, CLK_TCK"
ms.date: "11/04/2016"
f1_keywords: ["CLOCKS_PER_SEC", "TIME/CLOCKS_PER_SEC", "CLK_TCK", "TIME/CLK_TCK"]
helpviewer_keywords: ["CLOCKS_PER_SEC", "CLK_TCK constant"]
ms.assetid: bc285106-383d-44cb-91bf-276ad7de57bf
---
# `CLOCKS_PER_SEC`, `CLK_TCK`

## Syntax

```C
#include <time.h>
```

## Remarks

The time in seconds is the value returned by the `clock` function, divided by `CLOCKS_PER_SEC`. `CLK_TCK` is equivalent, but considered obsolete.

## See also

[`clock`](./reference/clock.md)\
[Global constants](./global-constants.md)
