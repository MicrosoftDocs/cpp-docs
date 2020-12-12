---
description: "Learn more about: HUGE_VAL, _HUGE"
title: "HUGE_VAL, _HUGE"
ms.date: "11/04/2016"
api_name: ["_HUGE"]
api_location: ["msvcrt.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_HUGE", "HUGE_VAL"]
helpviewer_keywords: ["_HUGE constant", "HUGE_VAL constant", "double value"]
ms.assetid: 3f044b45-02cd-46b2-b1de-87fd0441dd6a
---
# HUGE_VAL, _HUGE

## Syntax

```
#include <math.h>
```

## Remarks

`HUGE_VAL` is the largest representable double value. This value is returned by many run-time math functions when an error occurs. For some functions, -`HUGE_VAL` is returned. `HUGE_VAL` is defined as `_HUGE`, but run-time math functions return `HUGE_VAL`. You should also use `HUGE_VAL` in your code for consistency.

## See also

[Global Constants](../c-runtime-library/global-constants.md)
