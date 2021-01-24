---
description: "Learn more about: mbstowcs_s, _mbstowcs_s_l"
title: "mbstowcs_s, _mbstowcs_s_l"
ms.date: "4/2/2020"
api_name: ["_mbstowcs_s_l", "mbstowcs_s", "_o__mbstowcs_s_l", "_o_mbstowcs_s"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-convert-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_mbstowcs_s_l", "mbstowcs_s"]
helpviewer_keywords: ["_mbstowcs_s_l function", "mbstowcs_s function", "mbstowcs_s_l function"]
ms.assetid: 2fbda953-6918-498f-b440-3e7b21ed65a4
---
# mbstowcs_s, _mbstowcs_s_l

Converts a sequence of multibyte characters to a corresponding sequence of wide characters. Versions of [mbstowcs, _mbstowcs_l](mbstowcs-mbstowcs-l.md) with security enhancements as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).

## Syntax

```C
errno_t mbstowcs_s(
   size_t *pReturnValue,
   wchar_t *wcstr,
   size_t sizeInWords,
   const char *mbstr,
   size_t count
);
errno_t _mbstowcs_s_l(
   size_t *pReturnValue,
   wchar_t *wcstr,
   size_t sizeInWords,
   const char *mbstr,
   size_t count,
   _locale_t locale
);
template <size_t size>
errno_t mbstowcs_s(
   size_t *pReturnValue,
   wchar_t (&wcstr)[size],
   const char *mbstr,
   size_t count
); // C++ only
template <size_t size>
errno_t _mbstowcs_s_l(
   size_t *pReturnValue,
   wchar_t (&wcstr)[size],
   const char *mbstr,
   size_t count,
   _locale_t locale
); // C++ only
```

### Parameters

*pReturnValue*<br/>
The number of characters converted.

*wcstr*<br/>
Address of buffer for the resulting converted wide character string.

*sizeInWords*<br/>
The size of the *wcstr* buffer in words.

*mbstr*<br/>
The address of a sequence of null terminated multibyte characters.

*count*<br/>
The maximum number of wide characters to store in the *wcstr* buffer, not including the terminating null, or [_TRUNCATE](../../c-runtime-library/truncate.md).

*locale*<br/>
The locale to use.

## Return Value

Zero if successful, an error code on failure.

|Error condition|Return value and **errno**|
|---------------------|------------------------------|
|*wcstr* is **NULL** and *sizeInWords* > 0|**EINVAL**|
|*mbstr* is **NULL**|**EINVAL**|
|The destination buffer is too small to contain the converted string (unless *count* is **_TRUNCATE**; see Remarks below)|**ERANGE**|
|*wcstr* is not **NULL** and *sizeInWords* == 0|**EINVAL**|

If any of these conditions occurs, the invalid parameter exception is invoked as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md) . If execution is allowed to continue, the function returns an error code and sets **errno** as indicated in the table.

## Remarks

The **mbstowcs_s** function converts a string of multibyte characters pointed to by *mbstr* into wide characters stored in the buffer pointed to by *wcstr*. The conversion will continue for each character until one of these conditions is met:

- A multibyte null character is encountered

- An invalid multibyte character is encountered

- The number of wide characters stored in the *wcstr* buffer equals *count*.

The destination string is always null-terminated (even in the case of an error).

If *count* is the special value [_TRUNCATE](../../c-runtime-library/truncate.md), then **mbstowcs_s** converts as much of the string as will fit into the destination buffer, while still leaving room for a null terminator.

If **mbstowcs_s** successfully converts the source string, it puts the size in wide characters of the converted string, including the null terminator, into *&#42;pReturnValue* (provided *pReturnValue* is not **NULL**). This occurs even if the *wcstr* argument is **NULL** and provides a way to determine the required buffer size. Note that if *wcstr* is **NULL**, *count* is ignored, and *sizeInWords* must be 0.

If **mbstowcs_s** encounters an invalid multibyte character, it puts 0 in *&#42;pReturnValue*, sets the destination buffer to an empty string, sets **errno** to **EILSEQ**, and returns **EILSEQ**.

If the sequences pointed to by *mbstr* and *wcstr* overlap, the behavior of **mbstowcs_s** is undefined.

> [!IMPORTANT]
> Ensure that *wcstr* and *mbstr* do not overlap, and that *count* correctly reflects the number of multibyte characters to convert.

**mbstowcs_s** uses the current locale for any locale-dependent behavior; **_mbstowcs_s_l** is identical except that it uses the locale passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).

In C++, using these functions is simplified by template overloads; the overloads can infer buffer length automatically (eliminating the need to specify a size argument) and they can automatically replace older, non-secure functions with their newer, secure counterparts. For more information, see [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**mbstowcs_s**|\<stdlib.h>|
|**_mbstowcs_s_l**|\<stdlib.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Data Conversion](../../c-runtime-library/data-conversion.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[MultiByteToWideChar](/windows/win32/api/stringapiset/nf-stringapiset-multibytetowidechar)<br/>
[Interpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[_mbclen, mblen, _mblen_l](mbclen-mblen-mblen-l.md)<br/>
[mbtowc, _mbtowc_l](mbtowc-mbtowc-l.md)<br/>
[wcstombs, _wcstombs_l](wcstombs-wcstombs-l.md)<br/>
[wctomb, _wctomb_l](wctomb-wctomb-l.md)<br/>
