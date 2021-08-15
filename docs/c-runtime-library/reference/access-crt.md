---
description: "Learn more about: access (CRT)"
title: "access (CRT)"
ms.date: "12/16/2019"
api_name: ["access"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["access"]
helpviewer_keywords: ["access function"]
ms.assetid: 65197793-bd0a-41c3-9c29-18de2d95d9a6
---
# access (CRT)

The Microsoft-implemented POSIX function name `access` is a deprecated alias for the [_access](access-waccess.md) function. By default, it generates [Compiler warning (level 3) C4996](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md). The name is deprecated because it doesn't follow the Standard C rules for implementation-specific names. However, the function is still supported.

We recommend you use [_access](access-waccess.md) or the security-enhanced [_access_s](access-s-waccess-s.md) function instead. Or, you can continue to use this function name, and disable the warning. For more information, see [Turn off the warning](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#turn-off-the-warning) and [POSIX function names](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#posix-function-names).
