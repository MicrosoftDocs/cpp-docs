---
description: "Learn more about: _getmbcp"
title: "_getmbcp"
ms.date: "4/2/2020"
api_name: ["_getmbcp", "_o__getmbcp"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-locale-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_getmbcp", "getmbcp"]
helpviewer_keywords: ["code pages, determining current", "_getmbcp function", "getmbcp function"]
ms.assetid: 2db202d4-5c3d-4871-a0b8-ceb0b79ee7bb
---
# _getmbcp

Retrieves the current code page.

## Syntax

```C
int _getmbcp( void );
```

## Return Value

Returns the current multibyte code page. A return value of 0 indicates that a single byte code page is in use.

## Remarks

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_getmbcp**|\<mbctype.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[_setmbcp](setmbcp.md)<br/>
