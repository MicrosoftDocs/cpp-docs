---
description: "Learn more about: _get_current_locale"
title: "_get_current_locale"
ms.date: "11/04/2016"
api_name: ["_get_current_locale"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-locale-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["get_current_locale", "__get_current_locale", "_get_current_locale"]
helpviewer_keywords: ["get_current_locale function", "_get_current_locale function", "locales, getting information on", "__get_current_locale function"]
ms.assetid: 572217f2-a37a-4105-a293-a250b4fabd99
---
# _get_current_locale

Gets a locale object representing the current locale.

## Syntax

```C
_locale_t _get_current_locale(void);
```

## Return Value

A locale object representing the current locale.

## Remarks

The **_get_current_locale** function gets the currently set locale for the thread and returns a locale object representing that locale.

The previous name of this function, **__get_current_locale** (with two leading underscores) has been deprecated.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_get_current_locale**|\<locale.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[setlocale, _wsetlocale](setlocale-wsetlocale.md)<br/>
[_create_locale, _wcreate_locale](create-locale-wcreate-locale.md)<br/>
[_free_locale](free-locale.md)<br/>
