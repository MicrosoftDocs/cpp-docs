---
description: "Learn more about: strrev, wcsrev"
title: "strrev, wcsrev"
ms.date: "12/16/2019"
api_name: ["strrev", "wcsrev"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["strrev", "wcsrev"]
helpviewer_keywords: ["strrev function", "wcsrev function"]
ms.assetid: 89e05854-a9ce-4fb7-993d-a9831cd7edf2
---
# strrev, wcsrev

The Microsoft-specific function names `strrev` and `wcsrev` are deprecated aliases for the [_strrev and _wcsrev](strrev-wcsrev-mbsrev-mbsrev-l.md) functions. By default, they generate [Compiler warning (level 3) C4996](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md). The names are deprecated because they don't follow the Standard C rules for implementation-specific names. However, the functions are still supported.

We recommend you use [_strrev and _wcsrev](strrev-wcsrev-mbsrev-mbsrev-l.md) instead. Or, you can continue to use these function names, and disable the warning. For more information, see [Turn off the warning](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#turn-off-the-warning) and [POSIX function names](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#posix-function-names).
