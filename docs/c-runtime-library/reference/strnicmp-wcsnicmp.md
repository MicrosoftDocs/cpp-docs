---
description: "Learn more about: strnicmp, wcsnicmp"
title: "strnicmp, wcsnicmp"
ms.date: "12/16/2019"
api_name: ["wcsnicmp", "strnicmp"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["wcsnicmp", "strnicmp"]
helpviewer_keywords: ["strnicmp function", "wcsnicmp function"]
ms.assetid: 01324ee4-0bd9-43e9-b2a3-53d180270a64
---
# strnicmp, wcsnicmp

The Microsoft-specific function names `strnicmp` and `wcsnicmp` are deprecated aliases for the [_strnicmp and _wcsnicmp](strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md) functions. By default, they generate [Compiler warning (level 3) C4996](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md). The names are deprecated because they don't follow the Standard C rules for implementation-specific names. However, the functions are still supported.

We recommend you use [_strnicmp and _wcsnicmp](strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md) instead. Or, you can continue to use these function names, and disable the warning. For more information, see [Turn off the warning](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#turn-off-the-warning) and [POSIX function names](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#posix-function-names).
