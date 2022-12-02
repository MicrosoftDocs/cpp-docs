---
description: "Learn more about: Locale"
title: "Locale"
ms.date: "04/11/2018"
f1_keywords: ["c.international"]
helpviewer_keywords: ["localization, locale", "country/region information", "language information routines", "setlocale function", "locale routines"]
---
# Locale

*Locale* refers to country/region and language settings that you can use to customize your program. Some locale-dependent categories include the display formats for dates and monetary values. For more information, see [Locale categories](./locale-categories.md).

Use the [`setlocale`](./reference/setlocale-wsetlocale.md) function to change or query some or all of the current program or thread locale information while using functions without the **`_l`** suffix. The functions with the **`_l`** suffix will use the locale parameter passed in for their locale information during the execution of that specific function only. To create a locale for use with a function with a **`_l`** suffix, use [`_create_locale`](./reference/create-locale-wcreate-locale.md). To free this locale, use [`_free_locale`](./reference/free-locale.md). To get the current locale, use [`_get_current_locale`](./reference/get-current-locale.md).

Use [`_configthreadlocale`](./reference/configthreadlocale.md) to control whether each thread has its own locale, or all threads in a program share the same locale. For more information, see [Locales and code pages](../text/locales-and-code-pages.md).

More secure versions of the functions in the following table are available, indicated by the **`_s`** ("secure") suffix. For more information, see [Security features in the CRT](./security-features-in-the-crt.md).

## Locale-dependent routines

| Routine | Use | **`setlocale`** category setting dependence |
|---|---|---|
| [`atof`, `_atof_l`, `_wtof`, `_wtof_l`](./reference/atof-atof-l-wtof-wtof-l.md) | Convert character to floating-point value | `LC_NUMERIC` |
| [`atoi`, `_atoi_l`, `_wtoi`, `_wtoi_l`](./reference/atoi-atoi-l-wtoi-wtoi-l.md) | Convert character to integer value | `LC_NUMERIC` |
| [`_atoi64`, `_atoi64_l`, `_wtoi64`, `_wtoi64_l`](./reference/atoi64-atoi64-l-wtoi64-wtoi64-l.md) | Convert character to 64-bit integer value | `LC_NUMERIC` |
| [`atol`, `_atol_l`, `_wtol`, `_wtol_l`](./reference/atol-atol-l-wtol-wtol-l.md) | Convert character to long value | `LC_NUMERIC` |
| [`_atodbl`, `_atodbl_l`, `_atoldbl`, `_atoldbl_l`, `_atoflt`, `_atoflt_l`](./reference/atodbl-atodbl-l-atoldbl-atoldbl-l-atoflt-atoflt-l.md) | Convert character to double-long value | `LC_NUMERIC` |
| [`is`, `isw` routines](./is-isw-routines.md) | Test given integer for particular condition. | `LC_CTYPE` |
| [`isleadbyte`, `_isleadbyte_l`](./reference/isleadbyte-isleadbyte-l.md) | Test for lead byte | `LC_CTYPE` |
| [`localeconv`](./reference/localeconv.md) | Read appropriate values for formatting numeric quantities | `LC_MONETARY, LC_NUMERIC` |
| [`MB_CUR_MAX`](./mb-cur-max.md) | Maximum length in bytes of any multibyte character in current locale (macro defined in `STDLIB.H`) | `LC_CTYPE` |
| [`_mbccpy`, `_mbccpy_l`](./reference/mbccpy-mbccpy-l.md),[`_mbccpy_s`, `_mbccpy_s_l`](./reference/mbccpy-s-mbccpy-s-l.md) | Copy one multibyte character | `LC_CTYPE` |
| [`_mbclen`, `mblen`, `_mblen_l`](./reference/mbclen-mblen-mblen-l.md) | Validate and return number of bytes in multibyte character | `LC_CTYPE` |
| [`strlen`, `wcslen`, `_mbslen`, `_mbslen_l`, `_mbstrlen`, `_mbstrlen_l`](./reference/strlen-wcslen-mbslen-mbslen-l-mbstrlen-mbstrlen-l.md) | For multibyte-character strings: validate each character in string; return string length | `LC_CTYPE` |
| [`mbstowcs`, `_mbstowcs_l`](./reference/mbstowcs-mbstowcs-l.md),[`mbstowcs_s`, `_mbstowcs_s_l`](./reference/mbstowcs-s-mbstowcs-s-l.md) | Convert sequence of multibyte characters to corresponding sequence of wide characters | `LC_CTYPE` |
| [`mbtowc`, `_mbtowc_l`](./reference/mbtowc-mbtowc-l.md) | Convert multibyte character to corresponding wide character | `LC_CTYPE` |
| [`printf`](./reference/printf-printf-l-wprintf-wprintf-l.md) functions | Write formatted output | `LC_NUMERIC` (determines radix character output) |
| [`scanf`](./reference/scanf-scanf-l-wscanf-wscanf-l.md) functions | Read formatted input | `LC_NUMERIC` (determines radix character recognition) |
| [`setlocale`, `_wsetlocale`](./reference/setlocale-wsetlocale.md) | Select locale for program | Not applicable |
| [`strcoll`, `wcscoll`, `_mbscoll`, `_strcoll_l`, `_wcscoll_l`, `_mbscoll_l`](./reference/strcoll-wcscoll-mbscoll-strcoll-l-wcscoll-l-mbscoll-l.md) | Compare characters of two strings | `LC_COLLATE` |
| [`_stricmp`, `_wcsicmp`, `_mbsicmp`, `_stricmp_l`, `_wcsicmp_l`, `_mbsicmp_l`](./reference/stricmp-wcsicmp-mbsicmp-stricmp-l-wcsicmp-l-mbsicmp-l.md) | Compare two strings without regard to case | `LC_CTYPE` |
| [`_stricoll`, `_wcsicoll`, `_mbsicoll`, `_stricoll_l`, `_wcsicoll_l`, `_mbsicoll_l`](./reference/stricoll-wcsicoll-mbsicoll-stricoll-l-wcsicoll-l-mbsicoll-l.md) | Compare characters of two strings (case insensitive) | `LC_COLLATE` |
| [`_strncoll`, `_wcsncoll`, `_mbsncoll`, `_strncoll_l`, `_wcsncoll_l`, `_mbsncoll_l`](./reference/strncoll-wcsncoll-mbsncoll-strncoll-l-wcsncoll-l-mbsncoll-l.md) | Compare first **`n`** characters of two strings | `LC_COLLATE` |
| [`_strnicmp`, `_wcsnicmp`, `_mbsnicmp`, `_strnicmp_l`, `_wcsnicmp_l`, `_mbsnicmp_l`](./reference/strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md) | Compare characters of two strings without regard to case. | `LC_CTYPE` |
| [`_strnicoll`, `_wcsnicoll`, `_mbsnicoll`, `_strnicoll_l`, `_wcsnicoll_l`, `_mbsnicoll_l`](./reference/strnicoll-wcsnicoll-mbsnicoll-strnicoll-l-wcsnicoll-l-mbsnicoll-l.md) | Compare first **`n`** characters of two strings (case insensitive) | `LC_COLLATE` |
| [`strftime`, `wcsftime`, `_strftime_l`, `_wcsftime_l`](./reference/strftime-wcsftime-strftime-l-wcsftime-l.md) | Format date and time value according to supplied **`format`** argument | `LC_TIME` |
| [`_strlwr`, `_wcslwr`, `_mbslwr`, `_strlwr_l`, `_wcslwr_l`, `_mbslwr_l`](./reference/strlwr-wcslwr-mbslwr-strlwr-l-wcslwr-l-mbslwr-l.md),[`_strlwr_s`, `_strlwr_s_l`, `_mbslwr_s`, `_mbslwr_s_l`, `_wcslwr_s`, `_wcslwr_s_l`](./reference/strlwr-s-strlwr-s-l-mbslwr-s-mbslwr-s-l-wcslwr-s-wcslwr-s-l.md) | Convert, in place, each uppercase letter in given string to lowercase | `LC_CTYPE` |
| [`strtod`, `_strtod_l`, `wcstod`, `_wcstod_l`](./reference/strtod-strtod-l-wcstod-wcstod-l.md) | Convert character string to **`double`** value | `LC_NUMERIC` (determines radix character recognition) |
| [`strtol`, `wcstol`, `_strtol_l`, `_wcstol_l`](./reference/strtol-wcstol-strtol-l-wcstol-l.md) | Convert character string to **`long`** value | `LC_NUMERIC` (determines radix character recognition) |
| [`strtoul`, `_strtoul_l`, `wcstoul`, `_wcstoul_l`](./reference/strtoul-strtoul-l-wcstoul-wcstoul-l.md) | Convert character string to unsigned long value | `LC_NUMERIC` (determines radix character recognition) |
| [`_strupr`, `_strupr_l`, `_mbsupr`, `_mbsupr_l`, `_wcsupr_l`, `_wcsupr`](./reference/strupr-strupr-l-mbsupr-mbsupr-l-wcsupr-l-wcsupr.md),[`_strupr_s`, `_strupr_s_l`, `_mbsupr_s`, `_mbsupr_s_l`, `_wcsupr_s`, `_wcsupr_s_l`](./reference/strupr-s-strupr-s-l-mbsupr-s-mbsupr-s-l-wcsupr-s-wcsupr-s-l.md) | Convert, in place, each lowercase letter in string to uppercase | `LC_CTYPE` |
| [`strxfrm`, `wcsxfrm`, `_strxfrm_l`, `_wcsxfrm_l`](./reference/strxfrm-wcsxfrm-strxfrm-l-wcsxfrm-l.md) | Transform string into collated form according to locale | `LC_COLLATE` |
| [`tolower`, `_tolower`, `towlower`, `_tolower_l`, `_towlower_l`](./reference/tolower-tolower-towlower-tolower-l-towlower-l.md),[`_mbctolower`, `_mbctolower_l`, `_mbctoupper`, `_mbctoupper_l`](./reference/mbctolower-mbctolower-l-mbctoupper-mbctoupper-l.md) | Convert given character to corresponding lowercase character | `LC_CTYPE` |
| [`toupper`, `_toupper`, `towupper`, `_toupper_l`, `_towupper_l`](./reference/toupper-toupper-towupper-toupper-l-towupper-l.md),[`_mbctolower`, `_mbctolower_l`, `_mbctoupper`, `_mbctoupper_l`](./reference/mbctolower-mbctolower-l-mbctoupper-mbctoupper-l.md) | Convert given character to corresponding uppercase letter | `LC_CTYPE` |
| [`wcstombs`, `_wcstombs_l`](./reference/wcstombs-wcstombs-l.md),[`wcstombs_s`, `_wcstombs_s_l`](./reference/wcstombs-s-wcstombs-s-l.md) | Convert sequence of wide characters to corresponding sequence of multibyte characters | `LC_CTYPE` |
| [`wctomb`, `_wctomb_l`](./reference/wctomb-wctomb-l.md),[`wctomb_s`, `_wctomb_s_l`](./reference/wctomb-s-wctomb-s-l.md) | Convert wide character to corresponding multibyte character | `LC_CTYPE` |

> [!NOTE]
> For multibyte routines, the multibyte code page must be equivalent to the locale set with [`setlocale`](./reference/setlocale-wsetlocale.md). [`_setmbcp`](./reference/setmbcp.md), with an argument of `_MB_CP_LOCALE` makes the multibyte code page the same as the **`setlocale`** code page.

## See also

[Internationalization](./internationalization.md)\
[Universal C runtime routines by category](./run-time-routines-by-category.md)
