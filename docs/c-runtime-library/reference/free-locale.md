---
description: "Learn more about: _free_locale"
title: "_free_locale"
ms.date: "4/2/2020"
api_name: ["_free_locale", "_o__free_locale"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-locale-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["__free_locale", "free_locale", "_free_locale"]
helpviewer_keywords: ["__free_locale function", "free_locale function", "locales, freeing", "_free_locale function"]
ms.assetid: 1f08d348-ab32-4028-a145-6cbd51b49af9
---
# _free_locale

Frees a locale object.

## Syntax

```C
void _free_locale(
   _locale_t locale
);
```

### Parameters

*locale*<br/>
Locale object to free.

## Remarks

The **_free_locale** function is used to free the locale object obtained from a call to **_get_current_locale** or **_create_locale**.

The previous name of this function, **__free_locale** (with two leading underscores) has been deprecated.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|**Routine**|Required header|
|---------------|---------------------|
|**_free_locale**|\<locale.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[_get_current_locale](get-current-locale.md)<br/>
[_create_locale, _wcreate_locale](create-locale-wcreate-locale.md)<br/>
