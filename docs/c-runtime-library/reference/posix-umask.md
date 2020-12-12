---
description: "Learn more about: umask"
title: "umask"
ms.date: "12/16/2019"
api_name: ["umask"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["umask"]
helpviewer_keywords: ["umask function"]
ms.assetid: d2f697fc-08d5-4b70-9dd5-df3f5bb8b754
---
# umask

The Microsoft-implemented POSIX function name `umask` is a deprecated alias for the [_umask](umask.md) function. By default, it generates [Compiler warning (level 3) C4996](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md). The name is deprecated because it doesn't follow the Standard C rules for implementation-specific names. However, the function is still supported.

We recommend you use [_umask](umask.md) or security-enhanced [_umask_s](umask-s.md) function instead. Or, you can continue to use this function name, and disable the warning. For more information, see [Turn off the warning](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#turn-off-the-warning) and [POSIX function names](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#posix-function-names).
