---
description: "Learn more about: stricmp, wcsicmp"
title: "stricmp, wcsicmp"
ms.date: "12/16/2019"
api_name: ["stricmp", "wcsicmp"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["stricmp", "wcsicmp"]
helpviewer_keywords: ["stricmp function", "wcsicmp function"]
ms.assetid: 2e3c6703-2635-4961-a253-e2c4c5029ed8
---
# stricmp, wcsicmp

The Microsoft-specific function names `stricmp` and `wcsicmp` are deprecated aliases for the [_stricmp and _wcsicmp](stricmp-wcsicmp-mbsicmp-stricmp-l-wcsicmp-l-mbsicmp-l.md) functions. By default, they generate [Compiler warning (level 3) C4996](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md). The names are deprecated because they don't follow the Standard C rules for implementation-specific names. However, the functions are still supported.

We recommend you use [_stricmp or _wcsicmp](stricmp-wcsicmp-mbsicmp-stricmp-l-wcsicmp-l-mbsicmp-l.md) instead. Or, you can continue to use these function names, and disable the warning. For more information, see [Turn off the warning](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#turn-off-the-warning) and [POSIX function names](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#posix-function-names).
