---
title: "CLOCKS_PER_SEC, CLK_TCK | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "conceptual"
f1_keywords: ["CLOCKS_PER_SEC", "CLK_TCK"]
dev_langs: ["C++"]
helpviewer_keywords: ["CLOCKS_PER_SEC", "CLK_TCK constant"]
ms.assetid: bc285106-383d-44cb-91bf-276ad7de57bf
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# CLOCKS_PER_SEC, CLK_TCK

## Syntax

```

#include <time.h>
```

## Remarks

The time in seconds is the value returned by the `clock` function, divided by `CLOCKS_PER_SEC`. `CLK_TCK` is equivalent, but considered obsolete.

## See Also

[clock](../c-runtime-library/reference/clock.md)<br/>
[Global Constants](../c-runtime-library/global-constants.md)