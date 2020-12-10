---
description: "Learn more about: dup, dup2"
title: "dup, dup2"
ms.date: "12/16/2019"
api_name: ["dup2", "dup"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["dup", "dup2"]
helpviewer_keywords: ["dup function", "dup2 function"]
ms.assetid: c7572170-47ff-4e0d-b9c3-10f0ab0ba40a
---
# dup, dup2

The Microsoft-implemented POSIX function names `dup` and `dup2` are deprecated aliases for the [_dup](dup-dup2.md) and [_dup2](dup-dup2.md) functions. By default, they generate [Compiler warning (level 3) C4996](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md). The names are deprecated because they don't follow the Standard C rules for implementation-specific names. However, the functions are still supported.

We recommend you use [_dup](dup-dup2.md) and [_dup2](dup-dup2.md) instead. Or, you can continue to use these function names, and disable the warning. For more information, see [Turn off the warning](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#turn-off-the-warning) and [POSIX function names](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#posix-function-names).
