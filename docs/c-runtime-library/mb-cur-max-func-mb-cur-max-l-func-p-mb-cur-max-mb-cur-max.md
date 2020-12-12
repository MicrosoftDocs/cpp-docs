---
description: "Learn more about: ___mb_cur_max_func, ___mb_cur_max_l_func, __p___mb_cur_max, __mb_cur_max"
title: "___mb_cur_max_func, ___mb_cur_max_l_func, __p___mb_cur_max, __mb_cur_max"
ms.date: "4/2/2020"
api_name: ["___mb_cur_max_l_func", "__p___mb_cur_max", "___mb_cur_max_func", "__mb_cur_max", "_o____mb_cur_max_func"]
api_location: ["msvcr110_clr0400.dll", "msvcr110.dll", "msvcr80.dll", "msvcr100.dll", "msvcrt.dll", "msvcr90.dll", "msvcr120.dll", "api-ms-win-crt-locale-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["___mb_cur_max_func", "___mb_cur_max_l_func", "__p___mb_cur_max", "__mb_cur_max"]
helpviewer_keywords: ["__mb_cur_max", "___mb_cur_max_func", "___mb_cur_max_l_func", "__p___mb_cur_max"]
ms.assetid: 60d36108-1ca7-45a6-8ce7-68a91f13e3a1
---
# ___mb_cur_max_func, ___mb_cur_max_l_func, __p___mb_cur_max, __mb_cur_max

Internal CRT function. Retrieves the maximum number of bytes in a multibyte character for the current or specified locale.

## Syntax

```cpp
int ___mb_cur_max_func(void);
int ___mb_cur_max_l_func(_locale_t locale);
int * __p___mb_cur_max(void);
#define __mb_cur_max (___mb_cur_max_func())
```

#### Parameters

locale
The locale structure to retrieve the result from. If this value is null, the current thread locale is used.

## Return Value

The maximum number of bytes in a multibyte character for the current thread locale or the specified locale.

## Remarks

This is an internal function that the CRT uses to retrieve the current value of the [MB_CUR_MAX](../c-runtime-library/mb-cur-max.md) macro from thread local storage. We recommend that you use the `MB_CUR_MAX` macro in your code for portability.

The `__mb_cur_max` macro is a convenient way to call the `___mb_cur_max_func()` function. The `__p___mb_cur_max` function is defined for compatibility with Visual C++ 5.0 and earlier versions.

Internal CRT functions are implementation-specific and subject to change with each release. We don't recommend their use in your code.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|`___mb_cur_max_func`, `___mb_cur_max_l_func`, `__p___mb_cur_max`|\<ctype.h>, \<stdlib.h>|

## See also

[MB_CUR_MAX](../c-runtime-library/mb-cur-max.md)
