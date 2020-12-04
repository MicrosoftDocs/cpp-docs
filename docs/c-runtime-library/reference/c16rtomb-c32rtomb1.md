---
description: "Learn more about: c16rtomb, c32rtomb"
title: "c16rtomb, c32rtomb"
ms.date: "10/22/2019"
api_name: ["c16rtomb", "c32rtomb"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-convert-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["c16rtomb", "c32rtomb", "uchar/c16rtomb", "uchar/c32rtomb"]
helpviewer_keywords: ["c16rtomb function", "c32rtomb function"]
ms.assetid: 7f5743ca-a90e-4e3f-a310-c73e16f4e14d
---
# c16rtomb, c32rtomb

Convert a UTF-16 or UTF-32 wide character into a UTF-8 multibyte character.

## Syntax

```C
size_t c16rtomb(
    char *mbchar,
    char16_t wchar,
    mbstate_t *state
);
size_t c32rtomb(
    char *mbchar,
    char32_t wchar,
    mbstate_t *state
);
```

### Parameters

*mbchar*\
Pointer to an array to store the converted UTF-8 multibyte character.

*wchar*\
A wide character to convert.

*state*\
A pointer to an **mbstate_t** object.

## Return value

The number of bytes stored in array object *mbchar*, including any shift sequences. If *wchar* isn't a valid wide character, the value (**size_t**)(-1) is returned, **errno** is set to **EILSEQ**, and the value of *state* is unspecified.

## Remarks

The **c16rtomb** function converts the UTF-16 LE character *wchar* to the equivalent UTF-8 multibyte narrow character sequence. If *mbchar* isn't a null pointer, the function stores the converted sequence in the array object pointed to by *mbchar*. Up to **MB_CUR_MAX** bytes are stored in *mbchar*, and *state* is set to the resulting multibyte shift state.

If *wchar* is a null wide character, a sequence required to restore the initial shift state is stored, if needed, followed by the null character. *state* is set to the initial conversion state. The **c32rtomb** function is identical, but converts a UTF-32 character.

If *mbchar* is a null pointer, the behavior is equivalent to a call to the function that substitutes an internal buffer for *mbchar* and a wide null character for *wchar*.

The *state* conversion state object allows you to make subsequent calls to this function and other restartable functions that maintain the shift state of the multibyte output characters. Results are undefined when you mix the use of restartable and non-restartable functions.

To convert UTF-16 characters into non-UTF-8 multibyte characters, use the [wcstombs, _wcstombs_l](wcstombs-wcstombs-l.md), [wcstombs_s, or _wcstombs_s_l](wcstombs-s-wcstombs-s-l.md) functions.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**c16rtomb**, **c32rtomb**|C, C++: \<uchar.h>|

For compatibility information, see [Compatibility](../compatibility.md).

## See also

[Data conversion](../data-conversion.md)\
[Locale](../locale.md)\
[Interpretation of multibyte-character sequences](../interpretation-of-multibyte-character-sequences.md)\
[mbrtoc16, mbrtoc32](mbrtoc16-mbrtoc323.md)\
[wcrtomb](wcrtomb.md)\
[wcrtomb_s](wcrtomb-s.md)
