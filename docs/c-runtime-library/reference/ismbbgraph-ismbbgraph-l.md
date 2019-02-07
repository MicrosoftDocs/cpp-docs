---
title: "_ismbbgraph, _ismbbgraph_l"
ms.date: "11/04/2016"
apiname: ["_ismbbgraph_l", "_ismbbgraph"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["_ismbbgraph", "_ismbbgraph_l", "ismbbgraph", "ismbbgraph_l"]
helpviewer_keywords: ["_ismbbgraph_l function", "ismbbgraph_l function", "_ismbbgraph function", "ismbbgraph function"]
ms.assetid: b60db718-134f-4796-acc1-592d0b9efbb7
---
# _ismbbgraph, _ismbbgraph_l

Determines whether a particular multibyte character is a graphical character.

## Syntax

```C
int _ismbbgraph (
   unsigned int c
);
int _ismbbgraph_l (
   unsigned int c,
   _locale_t locale
);
```

### Parameters

*c*<br/>
Integer to be tested.

*locale*<br/>
Locale to use.

## Return Value

Returns a nonzero value if the expression:

`isctype(c, ( _PUNCT | _UPPER | _LOWER | _DIGIT )) || _ismbbkprint(c)`

is nonzero for *c*, or 0 if it is not. **_ismbbgraph** uses the current locale for any locale-dependent behavior. **_ismbbgraph_l** is identical except that it uses the locale passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_ismbbgraph**|\<mbctype.h>|
|**_ismbbgraph_l**|\<mbctype.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).

## See also

- [Byte Classification](../../c-runtime-library/byte-classification.md)
- [_ismbb Routines](../../c-runtime-library/ismbb-routines.md)
