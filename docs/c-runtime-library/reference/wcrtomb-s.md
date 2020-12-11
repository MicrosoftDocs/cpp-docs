---
description: "Learn more about: wcrtomb_s"
title: "wcrtomb_s"
ms.date: "4/2/2020"
api_name: ["wcrtomb_s", "_o_wcrtomb_s"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-convert-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["wcrtomb_s"]
helpviewer_keywords: ["wide characters, converting", "wcrtomb_s function", "multibyte characters", "characters, converting"]
ms.assetid: 9a8a1bd0-1d60-463d-a3a2-d83525eaf656
---
# wcrtomb_s

Convert a wide character into its multibyte character representation. A version of [wcrtomb](wcrtomb.md) with security enhancements as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).

## Syntax

```C
errno_t wcrtomb_s(
   size_t *pReturnValue,
   char *mbchar,
   size_t sizeOfmbchar,
   wchar_t *wchar,
   mbstate_t *mbstate
);
template <size_t size>
errno_t wcrtomb_s(
   size_t *pReturnValue,
   char (&mbchar)[size],
   wchar_t *wchar,
   mbstate_t *mbstate
); // C++ only
```

### Parameters

*pReturnValue*<br/>
Returns the number of bytes written or -1 if an error occurred.

*mbchar*<br/>
The resulting multibyte converted character.

*sizeOfmbchar*<br/>
The size of the *mbchar* variable in bytes.

*wchar*<br/>
A wide character to convert.

*mbstate*<br/>
A pointer to an **mbstate_t** object.

## Return Value

Returns zero or an **errno** value if an error occurs.

## Remarks

The **wcrtomb_s** function converts a wide character, beginning in the specified conversion state contained in *mbstate*, from the value contained in *wchar*, into the address represented by *mbchar*. The *pReturnValue* value will be the number of bytes converted, but no more than **MB_CUR_MAX** bytes, or an -1 if an error occurred.

If *mbstate* is null, the internal **mbstate_t** conversion state is used. If the character contained in *wchar* does not have a corresponding multibyte character, the value of *pReturnValue* will be -1 and the function will return the **errno** value of **EILSEQ**.

The **wcrtomb_s** function differs from [wctomb_s, _wctomb_s_l](wctomb-s-wctomb-s-l.md) by its restartability. The conversion state is stored in *mbstate* for subsequent calls to the same or other restartable functions. Results are undefined when mixing the use of restartable and nonrestartable functions. For example, an application would use **wcsrlen** rather than **wcslen**, if a subsequent call to **wcsrtombs_s** were used instead of **wcstombs_s**.

In C++, using this function is simplified by template overloads; the overloads can infer buffer length automatically (eliminating the need to specify a size argument) and they can automatically replace older, non-secure functions with their newer, secure counterparts. For more information, see [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Exceptions

The **wcrtomb_s** function is multithread safe as long as no function in the current thread calls **setlocale** while this function is executing and the *mbstate* is null.

## Example

```C
// crt_wcrtomb_s.c
// This program converts a wide character
// to its corresponding multibyte character.
//

#include <string.h>
#include <stdio.h>
#include <wchar.h>

int main( void )
{
    errno_t     returnValue;
    size_t      pReturnValue;
    mbstate_t   mbstate;
    size_t      sizeOfmbStr = 1;
    char        mbchar = 0;
    wchar_t*    wchar = L"Q\0";

    // Reset to initial conversion state
    memset(&mbstate, 0, sizeof(mbstate));

    returnValue = wcrtomb_s(&pReturnValue, &mbchar, sizeof(char),
                            *wchar, &mbstate);
    if (returnValue == 0) {
        printf("The corresponding wide character \"");
        wprintf(L"%s\"", wchar);
        printf(" was converted to a the \"%c\" ", mbchar);
        printf("multibyte character.\n");
    }
    else
    {
        printf("No corresponding multibyte character "
               "was found.\n");
    }
}
```

```Output
The corresponding wide character "Q" was converted to a the "Q" multibyte character.
```

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**wcrtomb_s**|\<wchar.h>|

## See also

[Data Conversion](../../c-runtime-library/data-conversion.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[Interpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[mbsinit](mbsinit.md)<br/>
