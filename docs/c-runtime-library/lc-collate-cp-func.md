---
title: "___lc_collate_cp_func | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "conceptual"
apiname: ["___lc_collate_cp_func"]
apilocation: ["msvcr120.dll", "msvcrt.dll", "msvcr100.dll", "msvcr80.dll", "msvcr110_clr0400.dll", "msvcr110.dll", "msvcr90.dll"]
apitype: "DLLExport"
f1_keywords: ["___lc_collate_cp_func"]
dev_langs: ["C++"]
helpviewer_keywords: ["___lc_collate_cp_func"]
ms.assetid: 46ccc084-7ac9-4e5d-9138-e12cb5845615
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# ___lc_collate_cp_func

Internal CRT function. Retrieves the current collation code page of the thread.

## Syntax

```cpp
UINT ___lc_codepage_func(void);
```

## Return Value

The current collation code page of the thread.

## Remarks

`___lc_collate_cp_func` is an internal CRT function that is used by other CRT functions to get the current collation code page from the thread local storage for CRT data. This information is also available by using the [_get_current_locale](../c-runtime-library/reference/get-current-locale.md) function.

Internal CRT functions are implementation-specific and subject to change with each release. We don't recommend their use in your code.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|`___lc_collate_cp_func`|crt\src\setlocal.h|

## See Also

[_get_current_locale](../c-runtime-library/reference/get-current-locale.md)<br/>
[setlocale, _wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md)<br/>
[_create_locale, _wcreate_locale](../c-runtime-library/reference/create-locale-wcreate-locale.md)<br/>
[_free_locale](../c-runtime-library/reference/free-locale.md)