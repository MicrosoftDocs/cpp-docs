---
description: "Learn more about: ___lc_collate_cp_func"
title: "___lc_collate_cp_func"
ms.date: "1/14/2021"
api_name: ["___lc_collate_cp_func", "_o____lc_collate_cp_func"]
api_location: ["msvcr120.dll", "msvcrt.dll", "msvcr100.dll", "msvcr80.dll", "msvcr110_clr0400.dll", "msvcr110.dll", "msvcr90.dll", "api-ms-win-crt-locale-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["LOCALE/___lc_collate_cp_func", "___lc_collate_cp_func"]
helpviewer_keywords: ["___lc_collate_cp_func"]
ms.assetid: 46ccc084-7ac9-4e5d-9138-e12cb5845615
---
# `___lc_collate_cp_func`

Internal CRT function. Retrieves the current collation code page of the thread.

## Syntax

```cpp
UINT ___lc_codepage_func(void);
```

## Return value

The current collation code page of the thread.

## Remarks

**`___lc_collate_cp_func`** is an internal CRT function that is used by other CRT functions to get the current collation code page from the thread local storage for CRT data. This information is also available by using the [`_get_current_locale`](./reference/get-current-locale.md) function.

Internal CRT functions are implementation-specific and subject to change with each release. We don't recommend their use in your code.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](global-state.md).

## Requirements

| Routine | Required header |
|---|---|
| **`___lc_collate_cp_func`** | crt\src\setlocal.h |

## See also

[`_get_current_locale`](./reference/get-current-locale.md)\
[`setlocale`, `_wsetlocale`](./reference/setlocale-wsetlocale.md)\
[`_create_locale`, `_wcreate_locale`](./reference/create-locale-wcreate-locale.md)\
[`_free_locale`](./reference/free-locale.md)
