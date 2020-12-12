---
description: "Learn more about: strnset, wcsnset"
title: "strnset, wcsnset"
ms.date: "12/16/2019"
api_name: ["strnset", "wcsnset"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["wcsnset", "strnset"]
helpviewer_keywords: ["strnset function", "wcsnset function"]
ms.assetid: e7868ac9-dc34-4606-bd3c-0fb2e7c51631
---
# strnset, wcsnset

The Microsoft-specific function names `strnset` and `wcsnset` are deprecated aliases for the [_strnset and _wcsnset](strnset-strnset-l-wcsnset-wcsnset-l-mbsnset-mbsnset-l.md) functions. By default, they generate [Compiler warning (level 3) C4996](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md). The names are deprecated because they don't follow the Standard C rules for implementation-specific names. However, the functions are still supported.

We recommend you use [_strnset and _wcsnset](strnset-strnset-l-wcsnset-wcsnset-l-mbsnset-mbsnset-l.md) or the security-enhanced [_strnset_s and _wcsnset_s](strnset-s-strnset-s-l-wcsnset-s-wcsnset-s-l-mbsnset-s-mbsnset-s-l.md) functions instead. Or, you can continue to use these function names, and disable the warning. For more information, see [Turn off the warning](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#turn-off-the-warning) and [POSIX function names](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#posix-function-names).
