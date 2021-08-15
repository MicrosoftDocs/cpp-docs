---
description: "Learn more about: mbsrtowcs"
title: "mbsrtowcs"
ms.date: "4/2/2020"
api_name: ["mbsrtowcs", "_o_mbsrtowcs"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-convert-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["mbsrtowcs"]
helpviewer_keywords: ["mbsrtowcs function"]
ms.assetid: f3a29de8-e36e-425b-a7fa-a258e6d7909d
---
# mbsrtowcs

Converts a multibyte character string in the current locale to a corresponding wide character string, with the capability of restarting in the middle of a multibyte character. A more secure version of this function is available; see [mbsrtowcs_s](mbsrtowcs-s.md).

## Syntax

```C
size_t mbsrtowcs(
   wchar_t *wcstr,
   const char **mbstr,
   sizeof count,
   mbstate_t *mbstate
);
template <size_t size>
size_t mbsrtowcs(
   wchar_t (&wcstr)[size],
   const char **mbstr,
   sizeof count,
   mbstate_t *mbstate
); // C++ only
```

### Parameters

*wcstr*<br/>
Address to store the resulting converted wide character string.

*mbstr*<br/>
Indirect pointer to the location of the multibyte character string to convert.

*count*<br/>
The maximum number of characters (not bytes) to convert and store in *wcstr*.

*mbstate*<br/>
A pointer to an **mbstate_t** conversion state object. If this value is a null pointer, a static internal conversion state object is used. Because the internal **mbstate_t** object is not thread-safe, we recommend that you always pass your own *mbstate* parameter.

## Return Value

Returns the number of characters successfully converted, not including the terminating null character, if any. Returns (size_t)(-1) if an error occurred, and sets **errno** to EILSEQ.

## Remarks

The **mbsrtowcs** function converts a string of multibyte characters indirectly pointed to by *mbstr*, into wide characters stored in the buffer pointed to by *wcstr*, by using the conversion state contained in *mbstate*. The conversion continues for each character until either a terminating null multibyte character is encountered, a multibyte sequence that does not correspond to a valid character in the current locale is encountered, or until *count* characters have been converted. If **mbsrtowcs** encounters the multibyte null character ('\0') either before or when *count* occurs, it converts it to a 16-bit terminating null character and stops.

Thus, the wide character string at *wcstr* is null-terminated only if **mbsrtowcs** encounters a multibyte null character during conversion. If the sequences pointed to by *mbstr* and *wcstr* overlap, the behavior of **mbsrtowcs** is undefined. **mbsrtowcs** is affected by the LC_TYPE category of the current locale.

The **mbsrtowcs** function differs from [mbstowcs, _mbstowcs_l](mbstowcs-mbstowcs-l.md) by its restartability. The conversion state is stored in *mbstate* for subsequent calls to the same or other restartable functions. Results are undefined when mixing the use of restartable and nonrestartable functions.  For example, an application should use **mbsrlen** instead of **mbslen**, if a subsequent call to **mbsrtowcs** is used instead of **mbstowcs**.

If *wcstr* is not a null pointer, the pointer object pointed to by *mbstr* is assigned a null pointer if conversion stopped because a terminating null character was reached. Otherwise, it is assigned the address just past the last multibyte character converted, if any. This allows a subsequent function call to restart conversion where this call stopped.

If the *wcstr* argument is a null pointer, the *count* argument is ignored and **mbsrtowcs** returns the required size in wide characters for the destination string. If *mbstate* is a null pointer, the function uses a non-thread-safe static internal **mbstate_t** conversion state object. If the character sequence *mbstr* does not have a corresponding multibyte character representation, a -1 is returned and the **errno** is set to **EILSEQ**.

If *mbstr* isa null pointer, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, this function sets **errno** to **EINVAL** and returns -1.

In C++, this function has a template overload that invokes the newer, secure counterpart of this function. For more information, see [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Exceptions

The **mbsrtowcs** function is multithread safe as long as no function in the current thread calls **setlocale** as long as this function is executing and the *mbstate* argument is not a null pointer.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**mbsrtowcs**|\<wchar.h>|

## See also

[Data Conversion](../../c-runtime-library/data-conversion.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[Interpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[mbrtowc](mbrtowc.md)<br/>
[mbtowc, _mbtowc_l](mbtowc-mbtowc-l.md)<br/>
[mbstowcs, _mbstowcs_l](mbstowcs-mbstowcs-l.md)<br/>
[mbsinit](mbsinit.md)<br/>
