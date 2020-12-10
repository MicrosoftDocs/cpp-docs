---
description: "Learn more about: strcmpi"
title: "strcmpi"
ms.date: "12/16/2019"
api_name: ["_strcmpi", "strcmpi"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["strcmpi"]
helpviewer_keywords: ["strcmpi function"]
ms.assetid: 74206b2f-9bca-4d32-9cdc-93cb94c2aaa1
---
# strcmpi

The Microsoft-specific function name `strcmpi` is a deprecated alias for the [_stricmp](stricmp-wcsicmp-mbsicmp-stricmp-l-wcsicmp-l-mbsicmp-l.md) function. By default, it generates [Compiler warning (level 3) C4996](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md). The name is deprecated because it doesn't follow the Standard C rules for implementation-specific names. However, the function is still supported.

We recommend you use [_stricmp](stricmp-wcsicmp-mbsicmp-stricmp-l-wcsicmp-l-mbsicmp-l.md) instead. Or, you can continue to use this function name, and disable the warning. For more information, see [Turn off the warning](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#turn-off-the-warning) and [POSIX function names](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#posix-function-names).
