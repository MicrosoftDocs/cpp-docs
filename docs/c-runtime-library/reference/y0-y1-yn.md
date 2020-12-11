---
description: "Learn more about: y0, y1, yn"
title: "y0, y1, yn"
ms.date: "12/16/2019"
api_name: ["y1", "yn", "y0"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["yn", "y1", "y0"]
helpviewer_keywords: ["y0 function", "y1 function", "yn function"]
ms.assetid: e14215f3-53d4-4ae8-816e-4c1ec2019316
---
# y0, y1, yn

The Microsoft-implemented POSIX function names `y0`, `y1`, and `yn` are deprecated aliases for the [_y0, _y1, and _yn](bessel-functions-j0-j1-jn-y0-y1-yn.md) functions. By default, they generate [Compiler warning (level 3) C4996](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md). The names are deprecated because they don't follow the Standard C rules for implementation-specific names. However, the functions are still supported.

We recommend you use [_y0, _y1, and _yn](bessel-functions-j0-j1-jn-y0-y1-yn.md) instead. Or, you can continue to use these function names, and disable the warning. For more information, see [Turn off the warning](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#turn-off-the-warning) and [POSIX function names](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#posix-function-names).
