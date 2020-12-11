---
description: "Learn more about: fdopen"
title: "fdopen"
ms.date: "12/16/2019"
api_name: ["fdopen"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["fdopen"]
helpviewer_keywords: ["fdopen function"]
ms.assetid: 3243c1d2-2826-4d2d-bfa2-a2da45f9cc7a
---
# fdopen

The Microsoft-implemented POSIX function name `fdopen` is a deprecated alias for the [_fdopen](fdopen-wfdopen.md) function. By default, it generates [Compiler warning (level 3) C4996](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md). The name is deprecated because it doesn't follow the Standard C rules for implementation-specific names. However, the function is still supported.

We recommend you use [_fdopen](fdopen-wfdopen.md) instead. Or, you can continue to use this function name, and disable the warning. For more information, see [Turn off the warning](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#turn-off-the-warning) and [POSIX function names](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#posix-function-names).
