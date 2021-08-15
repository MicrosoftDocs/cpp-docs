---
description: "Learn more about: _findclose"
title: "_findclose"
ms.date: "4/2/2020"
api_name: ["_findclose", "_o__findclose"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-filesystem-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_findclose", "findclose"]
helpviewer_keywords: ["_findclose function", "findclose function"]
ms.assetid: 9216c573-0878-444c-b5d7-cdaf16fb9163
---
# _findclose

Closes the specified search handle and releases associated resources.

## Syntax

```C
int _findclose(
   intptr_t handle
);
```

### Parameters

*handle*<br/>
Search handle returned by a previous call to **_findfirst**.

## Return Value

If successful, **_findclose** returns 0. Otherwise, it returns -1 and sets **errno** to **ENOENT**, indicating that no more matching files could be found.

## Remarks

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Function|Required header|
|--------------|---------------------|
|**_findclose**|\<io.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[System Calls](../../c-runtime-library/system-calls.md)<br/>
[Filename Search Functions](../../c-runtime-library/filename-search-functions.md)<br/>
