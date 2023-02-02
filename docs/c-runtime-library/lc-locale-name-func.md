---
description: "Learn more about: ___lc_locale_name_func"
title: "___lc_locale_name_func"
ms.date: "1/14/2021"
api_name: ["___lc_locale_name_func", "_o____lc_locale_name_func"]
api_location: ["msvcrt.dll", "msvcr110.dll", "msvcr100.dll", "msvcr90.dll", "msvcr120.dll", "msvcr80.dll", "msvcr110_clr0400.dll", "api-ms-win-crt-locale-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["LOCALE/___lc_locale_name_func", "___lc_locale_name_func"]
helpviewer_keywords: ["___lc_locale_name_func"]
ms.assetid: ef858308-872e-43de-95e0-9b1b4084343e
---
# `___lc_locale_name_func`

Internal CRT function. Retrieves the current locale name of the thread.

## Syntax

```cpp
wchar_t** ___lc_locale_name_func(void);
```

## Return value

A pointer to a string that contains the current locale name of the thread.

## Remarks

**`___lc_locale_name_func`** is an internal CRT function that is used by other CRT functions to get the current locale name from the thread local storage for CRT data. This information is also available by using the [`_get_current_locale`](./reference/get-current-locale.md) function or the [`setlocale`, `_wsetlocale`](./reference/setlocale-wsetlocale.md) functions.

Internal CRT functions are implementation-specific and subject to change with each release. We don't recommend their use in your code.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](global-state.md).

## Requirements

| Routine | Required header |
|---|---|
| **`___lc_locale_name_func`** | `crt\src\setlocal.h` |

## See also

[`_get_current_locale`](./reference/get-current-locale.md)\
[`setlocale`, `_wsetlocale`](./reference/setlocale-wsetlocale.md)\
[`_create_locale`, `_wcreate_locale`](./reference/create-locale-wcreate-locale.md)\
[`_free_locale`](./reference/free-locale.md)
