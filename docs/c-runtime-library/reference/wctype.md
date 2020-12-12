---
description: "Learn more about: wctype"
title: "wctype"
ms.date: "11/04/2016"
api_name: ["wctype"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["wctype"]
helpviewer_keywords: ["wctype function", "wide characters"]
ms.assetid: 14aded12-4087-4123-bc48-db4e10999223
---
# wctype

Determines a classification rule for wide-character codes.

## Syntax

```C
wctype_t wctype(
   const char * property
);
```

### Parameters

*property*<br/>
Property string.

## Return Value

If the **LC_CTYPE** category of the current locale does not define a classification rule whose name matches the property string *property*, the function returns zero. Otherwise, it returns a nonzero value suitable for use as the second argument to a subsequent call to [towctrans](towctrans.md).

## Remarks

The function determines a classification rule for wide-character codes. The following pairs of calls have the same behavior in all locales (but an implementation can define additional classification rules even in the "C" locale):

|Function|Same as|
|--------------|-------------|
|iswalnum(c)|iswctype(c, wctype( "alnum" ) )|
|iswalpha(c)|iswctype(c, wctype( "alpha" ) )|
|iswcntrl(c)|iswctype(c, wctype( "cntrl" ) )|
|iswdigit(c)|iswctype(c, wctype( "digit" ) )|
|iswgraph(c)|iswctype(c, wctype( "graph" ) )|
|iswlower(c)|iswctype(c, wctype( "lower" ) )|
|iswprint(c)|iswctype(c, wctype( "print" ) )|
|iswpunct(c)|iswctype(c, wctype( "punct" ) )|
|iswspace(c)|iswctype(c, wctype( "space" ) )|
|iswupper(c)|iswctype(c, wctype( "upper" ) )|
|iswxdigit(c)|iswctype(c, wctype( "xdigit" ) )|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**wctype**|\<wctype.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Data Conversion](../../c-runtime-library/data-conversion.md)<br/>
[setlocale, _wsetlocale](setlocale-wsetlocale.md)<br/>
