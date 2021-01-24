---
description: "Learn more about: Locale Categories"
title: "Locale Categories"
ms.date: "11/04/2016"
f1_keywords: ["LC_MAX", "LC_MIN", "LC_MONETARY", "LC_TIME", "LC_NUMERIC", "LC_COLLATE", "LC_CTYPE", "LC_ALL"]
helpviewer_keywords: ["LC_MIN constant", "LC_MONETARY constant", "LC_CTYPE constant", "locale constants", "LC_MAX constant", "LC_ALL constant", "LC_TIME constant", "LC_NUMERIC constant", "LC_COLLATE constant"]
ms.assetid: 868f1493-fe5d-4722-acab-bfcd374a063a
---
# Locale Categories

## Syntax

```
#include <locale.h>
```

## Remarks

Locale categories are manifest constants used by the localization routines to specify which portion of a program's locale information will be used. The locale refers to the locality (or Country/Region) for which certain aspects of your program can be customized. Locale-dependent areas include, for example, the formatting of dates or the display format for monetary values.

|Locale category|Parts of program affected|
|---------------------|-------------------------------|
|`LC_ALL`|All locale-specific behavior (all categories)|
|`LC_COLLATE`|Behavior of `strcoll` and `strxfrm` functions|
|`LC_CTYPE`|Behavior of character-handling functions (except `isdigit`, `isxdigit`, `mbstowcs`, and `mbtowc`, which are unaffected)|
|`LC_MAX`|Same as `LC_TIME`|
|`LC_MIN`|Same as `LC_ALL`|
|`LC_MONETARY`|Monetary formatting information returned by the `localeconv` function|
|`LC_NUMERIC`|Decimal-point character for formatted output routines (for example, `printf`), data conversion routines, and nonmonetary formatting information returned by `localeconv` function|
|`LC_TIME`|Behavior of `strftime` function|

See [setlocale, _wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md) for an example.

## See also

[localeconv](../c-runtime-library/reference/localeconv.md)<br/>
[setlocale, _wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md)<br/>
[strcoll Functions](../c-runtime-library/strcoll-functions.md)<br/>
[strftime, wcsftime, _strftime_l, _wcsftime_l](../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md)<br/>
[strxfrm, wcsxfrm, _strxfrm_l, _wcsxfrm_l](../c-runtime-library/reference/strxfrm-wcsxfrm-strxfrm-l-wcsxfrm-l.md)<br/>
[Global Constants](../c-runtime-library/global-constants.md)
