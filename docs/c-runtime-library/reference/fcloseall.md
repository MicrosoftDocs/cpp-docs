---
description: "Learn more about: fcloseall"
title: "fcloseall"
ms.date: "12/16/2019"
api_name: ["fcloseall"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["fcloseall"]
helpviewer_keywords: ["fcloseall function"]
ms.assetid: 4f14acde-5bc5-43da-a709-7a3c559df3cf
---
# fcloseall

The Microsoft-specific function name `fcloseall` is a deprecated alias for the [_fcloseall](fclose-fcloseall.md) function. By default, it generates [Compiler warning (level 3) C4996](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md). The name is deprecated because it doesn't follow the Standard C rules for implementation-specific names. However, the function is still supported.

We recommend you use [_fcloseall](fclose-fcloseall.md) instead. Or, you can continue to use this function name, and disable the warning. For more information, see [Turn off the warning](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#turn-off-the-warning) and [POSIX function names](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#posix-function-names).
