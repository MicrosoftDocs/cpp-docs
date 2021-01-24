---
description: "Learn more about: fcvt"
title: "fcvt"
ms.date: "12/16/2019"
api_name: ["fcvt"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["fcvt"]
helpviewer_keywords: ["fcvt function"]
ms.assetid: 1f748ad0-e186-400e-af8e-80d4431523d7
---
# fcvt

The Microsoft-specific function name `fcvt` is a deprecated alias for the [_fcvt](fcvt.md) function. By default, it generates [Compiler warning (level 3) C4996](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md). The name is deprecated because it doesn't follow the Standard C rules for implementation-specific names. However, the function is still supported.

We recommend you use [_fcvt](fcvt.md) or the security-enhanced [_fcvt_s](fcvt-s.md) function instead. Or, you can continue to use this function name, and disable the warning. For more information, see [Turn off the warning](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#turn-off-the-warning) and [POSIX function names](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#posix-function-names).
