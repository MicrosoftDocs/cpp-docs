---
description: "Learn more about: memicmp"
title: "memicmp"
ms.date: "12/16/2019"
api_name: ["memicmp"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["memicmp"]
helpviewer_keywords: ["memicmp function"]
ms.assetid: 45362e9c-7c64-41e9-92bb-7d4999a8635b
---
# memicmp

The Microsoft-specific function name `memicmp` is a deprecated alias for the [_memicmp](memicmp-memicmp-l.md) function. By default, it generates [Compiler warning (level 3) C4996](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md). The name is deprecated because it doesn't follow the Standard C rules for implementation-specific names. However, the function is still supported.

We recommend you use [_memicmp](memicmp-memicmp-l.md) instead. Or, you can continue to use this function name, and disable the warning. For more information, see [Turn off the warning](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#turn-off-the-warning) and [POSIX function names](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#posix-function-names).
