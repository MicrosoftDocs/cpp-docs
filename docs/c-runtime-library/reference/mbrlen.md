---
description: "Learn more about: mbrlen"
title: "mbrlen"
ms.date: "4/2/2020"
api_name: ["mbrlen", "_o_mbrlen"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-string-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["mbrlen"]
helpviewer_keywords: ["mbrlen function"]
ms.assetid: dde8dee9-e091-4c4c-81b3-639808885ae1
---
# mbrlen

Determine the number of bytes that are required to complete a multibyte character in the current locale, with the capability of restarting in the middle of a multibyte character.

## Syntax

```C
size_t mbrlen(
   const char * str,
   size_t count,
   mbstate_t * mbstate
);
```

### Parameters

*str*<br/>
Pointer to the next byte to inspect in a multibyte character string.

*count*<br/>
The maximum number of bytes to inspect.

*mbstate*<br/>
Pointer to the current shift state of the initial byte of *str*.

## Return Value

One of the following values:

| Value | Description |
|--|--|
| 0 | The next *count* or fewer bytes complete the multibyte character that represents the wide null character. |
| 1 to *count*, inclusive | The next *count* or fewer bytes complete a valid multibyte character. The value returned is the number of bytes that complete the multibyte character. |
| (size_t)(-2) | The next *count* bytes contribute to an incomplete but potentially valid multibyte character and all *count* bytes have been processed. |
| (size_t)(-1) | An encoding error occurred. The next *count* or fewer bytes do not contribute to a complete and valid multibyte character. In this case, **errno** is set to EILSEQ and the conversion state in *mbstate* is unspecified. |

## Remarks

The **mbrlen** function inspects at most *count* bytes starting with the byte pointed to by *str* to determine the number of bytes that are required to complete the next multibyte character, including any shift sequences. It is equivalent to the call `mbrtowc(NULL, str, count, &mbstate)` where *mbstate* is either a user-provided **mbstate_t** object, or a static internal object provided by the library.

The **mbrlen** function saves and uses the shift state of an incomplete multibyte character in the *mbstate* parameter. This gives **mbrlen** the capability of restarting in the middle of a multibyte character if need be, examining at most *count* bytes. If *mbstate* is a null pointer, **mbrlen** uses an internal, static **mbstate_t** object to store the shift state. Because the internal **mbstate_t** object is not thread-safe, we recommend that you always allocate and pass your own *mbstate* parameter.

The **mbrlen** function differs from [_mbclen, mblen, _mblen_l](mbclen-mblen-mblen-l.md) by its restartability. The shift state is stored in *mbstate* for subsequent calls to the same or other restartable functions. Results are undefined when mixing the use of restartable and nonrestartable functions.  For example, an application should use **wcsrlen** instead of **wcslen** if a subsequent call to **wcsrtombs** is used instead of **wcstombs**.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|not applicable|not applicable|**mbrlen**|not applicable|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**mbrlen**|\<wchar.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

This example shows how the interpretation of multibyte characters depends on the current code page, and demonstrates the resuming capability of **mbrlen**.

```C
// crt_mbrlen.c
// Compile by using: cl crt_mbrlen.c
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <wchar.h>

size_t Example(const char * pStr)
{
    size_t      charLen = 0;
    size_t      charCount = 0;
    mbstate_t   mbState = {0};

    while ((charLen = mbrlen(pStr++, 1, &mbState)) != 0 &&
            charLen != (size_t)-1)
    {
        if (charLen != (size_t)-2) // if complete mbcs char,
        {
            charCount++;
        }
    }
    return (charCount);
}

int main( void )
{
    int         cp;
    size_t      charCount = 0;
    const char  *pSample =
        "\x82\xD0\x82\xE7\x82\xAA\x82\xC8: Shift-jis hiragana.";

    cp = _getmbcp();
    charCount = Example(pSample);
    printf("\nCode page: %d\n%s\nCharacter count: %d\n",
        cp, pSample, charCount);

    setlocale(LC_ALL, "ja-JP"); // Set Japanese locale
    _setmbcp(932); // and Japanese multibyte code page
    cp = _getmbcp();
    charCount = Example(pSample);
    printf("\nCode page: %d\n%s\nCharacter count: %d\n",
        cp, pSample, charCount);
}
```

```Output

Code page: 0
é╨éτé¬é╚: Shift-jis hiragana.
Character count: 29

Code page: 932
????: Shift-jis hiragana.
Character count: 25
```

## See also

[String Manipulation](../../c-runtime-library/string-manipulation-crt.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
