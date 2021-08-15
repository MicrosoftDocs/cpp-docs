---
description: "Learn more about: strdup, wcsdup"
title: "strdup, wcsdup"
ms.date: "12/16/2019"
api_name: ["wcsdup", "strdup"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["wcsdup", "strdup"]
helpviewer_keywords: ["wcsdup function", "strdup function"]
ms.assetid: c9ac0935-b525-4e95-8a64-396fc7e34ee9
---
# strdup, wcsdup

The Microsoft-implemented POSIX function names `strdup` and `wcsdup` are deprecated aliases for the [_strdup and _wcsdup](strdup-wcsdup-mbsdup.md) functions. By default, they generate [Compiler warning (level 3) C4996](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md). The names are deprecated because they don't follow the Standard C rules for implementation-specific names. However, the functions are still supported.

We recommend you use [_strdup and _wcsdup](strdup-wcsdup-mbsdup.md) instead. Or, you can continue to use these function names, and disable the warning. For more information, see [Turn off the warning](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#turn-off-the-warning) and [POSIX function names](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#posix-function-names).
