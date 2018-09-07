---
title: "_free_locale | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["_free_locale"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-locale-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["__free_locale", "free_locale", "_free_locale"]
dev_langs: ["C++"]
helpviewer_keywords: ["__free_locale function", "free_locale function", "locales, freeing", "_free_locale function"]
ms.assetid: 1f08d348-ab32-4028-a145-6cbd51b49af9
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
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

## Requirements

|**Routine**|Required header|
|---------------|---------------------|
|**_free_locale**|\<locale.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[_get_current_locale](get-current-locale.md)<br/>
[_create_locale, _wcreate_locale](create-locale-wcreate-locale.md)<br/>
