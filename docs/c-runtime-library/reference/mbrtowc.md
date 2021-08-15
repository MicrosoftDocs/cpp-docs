---
description: "Learn more about: mbrtowc"
title: "mbrtowc"
ms.date: "4/2/2020"
api_name: ["mbrtowc", "_o_mbrtowc"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-convert-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["mbrtowc"]
helpviewer_keywords: ["mbrtowc function"]
ms.assetid: a1e87fcc-6de0-4ca1-bf26-508d28490286
---
# mbrtowc

Convert a multibyte character in the current locale into the equivalent wide character, with the capability of restarting in the middle of a multibyte character.

## Syntax

```C
size_t mbrtowc(
   wchar_t *wchar,
   const char *mbchar,
   size_t count,
   mbstate_t *mbstate
);
```

### Parameters

*wchar*<br/>
Address of a wide character to receive the converted wide character string (type **`wchar_t`**). This value can be a null pointer if no return wide character is required.

*mbchar*<br/>
Address of a sequence of bytes (a multibyte character).

*count*<br/>
Number of bytes to check.

*mbstate*<br/>
Pointer to conversion state object. If this value is a null pointer, the function uses a static internal conversion state object. Because the internal **mbstate_t** object is not thread-safe, we recommend that you always pass your own *mbstate* argument.

## Return Value

One of the following values:

0
The next *count* or fewer bytes complete the multibyte character that represents the null wide character, which is stored in *wchar*, if *wchar* is not a null pointer.

1 to *count*, inclusive
The next *count* or fewer bytes complete a valid multibyte character. The value returned is the number of bytes that complete the multibyte character. The wide character equivalent is stored in *wchar*, if *wchar* is not a null pointer.

(size_t)(-1)
An encoding error occurred. The next *count* or fewer bytes do not contribute to a complete and valid multibyte character. In this case, **errno** is set to EILSEQ and the conversion shift state in *mbstate* is unspecified.

(size_t)(-2)
The next *count* bytes contribute to an incomplete but potentially valid multibyte character, and all *count* bytes have been processed. No value is stored in *wchar*, but *mbstate* is updated to restart the function.

## Remarks

If *mbchar* is a null pointer, the function is equivalent to the call:

`mbrtowc(NULL, "", 1, &mbstate)`

In this case, the value of the arguments *wchar* and *count* are ignored.

If *mbchar* is not a null pointer, the function examines *count* bytes from *mbchar* to determine the required number of bytes that are required to complete the next multibyte character. If the next character is valid, the corresponding multibyte character is stored in *wchar* if it is not a null pointer. If the character is the corresponding wide null character, the resulting state of *mbstate* is the initial conversion state.

The **mbrtowc** function differs from [mbtowc, _mbtowc_l](mbtowc-mbtowc-l.md) by its restartability. The conversion state is stored in *mbstate* for subsequent calls to the same or other restartable functions. Results are undefined when mixing the use of restartable and nonrestartable functions.  For example, an application should use **wcsrlen** instead of **wcslen** if a subsequent call to **wcsrtombs** is used instead of **wcstombs**.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Example

Converts a multibyte character to its wide character equivalent.

```cpp
// crt_mbrtowc.cpp

#include <stdio.h>
#include <mbctype.h>
#include <string.h>
#include <locale.h>
#include <wchar.h>

#define BUF_SIZE 100

int Sample(char* szIn, wchar_t* wcOut, int nMax)
{
    mbstate_t   state = {0}; // Initial state
    size_t      nConvResult,
                nmbLen = 0,
                nwcLen = 0;
    wchar_t*    wcCur = wcOut;
    wchar_t*    wcEnd = wcCur + nMax;
    const char* mbCur = szIn;
    const char* mbEnd = mbCur + strlen(mbCur) + 1;
    char*       szLocal;

    // Sets all locale to French_Canada.1252
    szLocal = setlocale(LC_ALL, "French_Canada.1252");
    if (!szLocal)
    {
        printf("The fuction setlocale(LC_ALL, \"French_Canada.1252\") failed!\n");
        return 1;
    }

    printf("Locale set to: \"%s\"\n", szLocal);

    // Sets the code page associated current locale's code page
    // from a previous call to setlocale.
    if (_setmbcp(_MB_CP_SBCS) == -1)
    {
        printf("The fuction _setmbcp(_MB_CP_SBCS) failed!");
        return 1;
    }

    while ((mbCur < mbEnd) && (wcCur < wcEnd))
    {
        //
        nConvResult = mbrtowc(wcCur, mbCur, 1, &state);
        switch (nConvResult)
        {
            case 0:
            {  // done
                printf("Conversion succeeded!\nMultibyte String: ");
                printf(szIn);
                printf("\nWC String: ");
                wprintf(wcOut);
                printf("\n");
                mbCur = mbEnd;
                break;
            }

            case -1:
            {  // encoding error
                printf("The call to mbrtowc has detected an encoding error.\n");
                mbCur = mbEnd;
                break;
            }

            case -2:
            {  // incomplete character
                if   (!mbsinit(&state))
                {
                    printf("Currently in middle of mb conversion, state = %x\n", state);
                    // state will contain data regarding lead byte of mb character
                }

                ++nmbLen;
                ++mbCur;
                break;
            }

            default:
            {
                if   (nConvResult > 2) // The multibyte should never be larger than 2
                {
                    printf("Error: The size of the converted multibyte is %d.\n", nConvResult);
                }

                ++nmbLen;
                ++nwcLen;
                ++wcCur;
                ++mbCur;
            break;
            }
        }
    }

   return 0;
}

int main(int argc, char* argv[])
{
    char    mbBuf[BUF_SIZE] = "AaBbCc\x9A\x8B\xE0\xEF\xF0xXyYzZ";
    wchar_t wcBuf[BUF_SIZE] = {L''};

    return Sample(mbBuf, wcBuf, BUF_SIZE);
}
```

### Sample Output

```Output
Locale set to: "French_Canada.1252"
Conversion succeeded!
Multibyte String: AaBbCcÜïα∩≡xXyYzZ
WC String: AaBbCcÜïα∩≡xXyYzZ
```

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**mbrtowc**|\<wchar.h>|

## See also

[Data Conversion](../../c-runtime-library/data-conversion.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[Interpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
