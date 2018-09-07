---
title: "isgraph, iswgraph, _isgraph_l, _iswgraph_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["isgraph", "iswgraph", "_iswgraph_l", "_isgraph_l"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-string-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["_isgraph_l", "_iswgraph_l", "_ismbcgraph_l", "Isgraph", "_istgraph_l", "_istgraph", "iswgraph"]
dev_langs: ["C++"]
helpviewer_keywords: ["isgraph function", "_istgraph_l function", "istgraph function", "_isgraph_l function", "iswgraph function", "_iswgraph_l function", "_istgraph function", "_ismbcgraph_l function"]
ms.assetid: 531a5f34-4302-4d0a-8a4f-b7ea150ad941
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# isgraph, iswgraph, _isgraph_l, _iswgraph_l

Determines whether an integer represents a graphical character.

## Syntax

```C
int isgraph(
   int c
);
int iswgraph(
   wint_t c
);
int _isgraph_l(
   int c,
   _locale_t locale
);
int _iswgraph_l(
   wint_t c,
   _locale_t locale
);
```

### Parameters

*c*<br/>
Integer to test.

## Return Value

Each of these routines returns nonzero if *c* is a particular representation of a printable character other than a space. **isgraph** returns a nonzero value if *c* is a printable character other than a space. **iswgraph** returns a nonzero value if *c* is a printable wide character other than a wide character space. Each of these routines returns 0 if *c* does not satisfy the test condition.

The versions of these functions that have the **_l** suffix use the locale that's passed in instead of the current locale for their locale-dependent behavior. For more information, see [Locale](../../c-runtime-library/locale.md).

The behavior of **isgraph** and **_isgraph_l** is undefined if *c* is not EOF or in the range 0 through 0xFF, inclusive. When a debug CRT library is used and *c* is not one of these values, the functions raise an assertion.

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_istgraph**|**isgraph**|[_ismbcgraph](ismbcgraph-functions.md)|**iswgraph**|
|**_istgraph_l**|**_isgraph_l**|[_ismbcgraph_l](ismbcgraph-functions.md)|**_iswgraph_l**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**isgraph**|\<ctype.h>|
|**iswgraph**|\<ctype.h> or \<wchar.h>|
|**_isgraph_l**|\<ctype.h>|
|**_iswgraph_l**|\<ctype.h> or \<wchar.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Character Classification](../../c-runtime-library/character-classification.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[is, isw Routines](../../c-runtime-library/is-isw-routines.md)<br/>
