---
description: "Learn more about: Interpretation of multibyte-character sequences"
title: "Interpretation of multibyte-character sequences"
ms.date: "10/22/2019"
f1_keywords: ["c.character.multibyte"]
helpviewer_keywords: ["MBCS [C++], locale code page"]
ms.assetid: da9150de-70ea-4d2f-90e6-ddb9202dd80b
---
# Interpretation of multibyte-character sequences

Most multibyte-character routines in the Microsoft run-time library recognize multibyte-character sequences relating to a multibyte code page. The output value is affected by the setting of the **LC_CTYPE** category setting of the locale. For more information, see [setlocale](../c-runtime-library/reference/setlocale-wsetlocale.md). The versions of these functions without the **_l** suffix use the current locale for this locale-dependent behavior. The versions with the **_l** suffix are identical, except they use the locale parameter instead of the current locale.

## Locale-dependent multibyte routines

|Routine|Use|
|-------------|---------|
|[_mbclen, mblen, _mblen_l](../c-runtime-library/reference/mbclen-mblen-mblen-l.md)|Validate and return number of bytes in multibyte character|
|[strlen, wcslen, _mbslen, _mbslen_l, _mbstrlen, _mbstrlen_l](../c-runtime-library/reference/strlen-wcslen-mbslen-mbslen-l-mbstrlen-mbstrlen-l.md)|For multibyte character strings: validate each character in string; return string length. For wide character strings: return string length.|
|[mbstowcs, _mbstowcs_l](../c-runtime-library/reference/mbstowcs-mbstowcs-l.md), [mbstowcs_s, _mbstowcs_s_l](../c-runtime-library/reference/mbstowcs-s-mbstowcs-s-l.md)|Convert sequence of multibyte characters to corresponding sequence of wide characters|
|[mbtowc, _mbtowc_l](../c-runtime-library/reference/mbtowc-mbtowc-l.md)|Convert multibyte character to corresponding wide character|
|[wcstombs, _wcstombs_l](../c-runtime-library/reference/wcstombs-wcstombs-l.md), [wcstombs_s, _wcstombs_s_l](../c-runtime-library/reference/wcstombs-s-wcstombs-s-l.md)|Convert sequence of wide characters to corresponding sequence of multibyte characters|
|[wctomb, _wctomb_l](../c-runtime-library/reference/wctomb-wctomb-l.md), [wctomb_s, _wctomb_s_l](../c-runtime-library/reference/wctomb-s-wctomb-s-l.md)|Convert wide character to corresponding multibyte character|

## Locale-independent multibyte routines

|Routine|Use|
|-------------|---------|
|[mbrtoc16, mbrtoc32](../c-runtime-library/reference/mbrtoc16-mbrtoc323.md)|Convert multibyte UTF-8 character to equivalent UTF-16 or UTF-32 character|
|[c16rtomb, c32rtomb](../c-runtime-library/reference/c16rtomb-c32rtomb1.md)|Convert UTF-16 or UTF-32 character to equivalent UTF-8 multibyte character|

## See also

[Internationalization](../c-runtime-library/internationalization.md)\
[Universal C runtime routines by category](../c-runtime-library/run-time-routines-by-category.md)
