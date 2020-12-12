---
description: "Learn more about: strupr, wcsupr"
title: "strupr, wcsupr"
ms.date: "12/16/2019"
api_name: ["strupr", "wcsupr"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["strupr", "wcsupr"]
helpviewer_keywords: ["strupr function", "wcsupr function"]
ms.assetid: 17dfe1cd-3b09-4702-9f89-2207f44953e6
---
# strupr, wcsupr

The Microsoft-specific function names `strupr` and `wcsupr` are deprecated aliases for the [_strupr and _wcsupr](strupr-strupr-l-mbsupr-mbsupr-l-wcsupr-l-wcsupr.md) functions. By default, they generate [Compiler warning (level 3) C4996](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md). The names are deprecated because they don't follow the Standard C rules for implementation-specific names. However, the functions are still supported.

We recommend you use [_strupr and _wcsupr](strupr-strupr-l-mbsupr-mbsupr-l-wcsupr-l-wcsupr.md) or the security-enhanced [_strupr_s and _wcsupr_s](strupr-s-strupr-s-l-mbsupr-s-mbsupr-s-l-wcsupr-s-wcsupr-s-l.md) functions instead. Or, you can continue to use these function names, and disable the warning. For more information, see [Turn off the warning](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#turn-off-the-warning) and [POSIX function names](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#posix-function-names).
