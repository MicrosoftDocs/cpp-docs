---
description: "Learn more about: j0, j1, jn"
title: "j0, j1, jn"
ms.date: "12/16/2019"
api_name: ["jn", "j0", "j1"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["jn", "j1", "j0"]
helpviewer_keywords: ["jn function", "j1 function", "j0 function"]
ms.assetid: ec8a9512-aacb-423c-a845-fc8927e6e21d
---
# j0, j1, jn

The Microsoft-implemented POSIX function names `j0`, `j1`, and `jn` are deprecated aliases for the [_j0, _j1, and _jn](bessel-functions-j0-j1-jn-y0-y1-yn.md) functions. By default, they generate [Compiler warning (level 3) C4996](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md). The names are deprecated because they don't follow the Standard C rules for implementation-specific names. However, the functions are still supported.

We recommend you use [_j0, _j1, and _jn](bessel-functions-j0-j1-jn-y0-y1-yn.md) instead. Or, you can continue to use these function names, and disable the warning. For more information, see [Turn off the warning](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#turn-off-the-warning) and [POSIX function names](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#posix-function-names).
