---
description: "Learn more about: strcoll Functions"
title: "strcoll Functions"
ms.date: "11/04/2016"
helpviewer_keywords: ["code pages, using for string comparisons", "string comparison [C++], culture-specific", "strcoll functions", "strings [C++], comparing by code page"]
ms.assetid: c09eeff3-8aba-4cfb-a524-752436d85573
---
# `strcoll` functions

Each of the `strcoll` and `wcscoll` functions compares two strings according to the `LC_COLLATE` category setting of the locale code page currently in use. Each of the `_mbscoll` functions compares two strings according to the multibyte code page currently in use. Use the `coll` functions for string comparisons when there's a difference between the character set order and the lexicographic character order in the current code page if the difference is of interest for the comparison. Use the corresponding `cmp` functions to test only for string equality.

### strcoll Functions

| SBCS | Unicode | MBCS | Description |
|---|---|---|---|
| [`strcoll`](./reference/strcoll-wcscoll-mbscoll-strcoll-l-wcscoll-l-mbscoll-l.md) | [`wcscoll`](./reference/strcoll-wcscoll-mbscoll-strcoll-l-wcscoll-l-mbscoll-l.md) | [`_mbscoll`](./reference/strcoll-wcscoll-mbscoll-strcoll-l-wcscoll-l-mbscoll-l.md) | Collate two strings |
| [`_stricoll`](./reference/stricoll-wcsicoll-mbsicoll-stricoll-l-wcsicoll-l-mbsicoll-l.md) | [`_wcsicoll`](./reference/stricoll-wcsicoll-mbsicoll-stricoll-l-wcsicoll-l-mbsicoll-l.md) | [`_mbsicoll`](./reference/stricoll-wcsicoll-mbsicoll-stricoll-l-wcsicoll-l-mbsicoll-l.md) | Collate two strings (case insensitive) |
| [`_strncoll`](./reference/strncoll-wcsncoll-mbsncoll-strncoll-l-wcsncoll-l-mbsncoll-l.md) | [`_wcsncoll`](./reference/strncoll-wcsncoll-mbsncoll-strncoll-l-wcsncoll-l-mbsncoll-l.md) | [`_mbsncoll`](./reference/strncoll-wcsncoll-mbsncoll-strncoll-l-wcsncoll-l-mbsncoll-l.md) | Collate first `count` characters of two strings |
| [`_strnicoll`](./reference/strnicoll-wcsnicoll-mbsnicoll-strnicoll-l-wcsnicoll-l-mbsnicoll-l.md) | [`_wcsnicoll`](./reference/strnicoll-wcsnicoll-mbsnicoll-strnicoll-l-wcsnicoll-l-mbsnicoll-l.md) | [`_mbsnicoll`](./reference/strnicoll-wcsnicoll-mbsnicoll-strnicoll-l-wcsnicoll-l-mbsnicoll-l.md) | Collate first `count` characters of two strings (case-insensitive) |

## Remarks

The single-byte character (SBCS) versions of these functions (`strcoll`, `stricoll`, `_strncoll`, and `_strnicoll`) compare `string1` and `string2` according to the `LC_COLLATE` category setting of the current locale. These functions differ from the corresponding `strcmp` functions in that the `strcoll` functions use locale code page information that provides collating sequences. For string comparisons in locales in which the character set order and the lexicographic character order differ, the `strcoll` functions should be used rather than the corresponding `strcmp` functions. For more information on `LC_COLLATE`, see [`setlocale`](./reference/setlocale-wsetlocale.md).

For some code pages and corresponding character sets, the order of characters in the character set may differ from the lexicographic character order. In the "C" locale, it isn't the case: the order of characters in the ASCII character set is the same as the lexicographic order of the characters. However, in certain European code pages, for example, the character 'a' (value 0x61) precedes the character 'ä' (value 0xE4) in the character set, but the character 'ä' precedes the character 'a' lexicographically. To perform a lexicographic comparison in such an instance, use `strcoll` rather than `strcmp`. Alternatively, you can use `strxfrm` on the original strings, then use `strcmp` on the resulting strings.

`strcoll`, `stricoll`, `_strncoll`, and `_strnicoll` automatically handle multibyte-character strings according to the locale code page currently in use, as do their wide-character (Unicode) counterparts. The multibyte-character (MBCS) versions of these functions, however, collate strings on a character basis according to the multibyte code page currently in use.

Because the `coll` functions collate strings lexicographically for comparison, whereas the `cmp` functions simply test for string equality, the `coll` functions are much slower than the corresponding `cmp` versions. Therefore, the `coll` functions should be used only when there's a difference between the character set order and the lexicographic character order in the current code page and this difference is of interest for the string comparison.

## See also

[Locale](./locale.md)\
[String manipulation](./string-manipulation-crt.md)\
[`localeconv`](./reference/localeconv.md)\
[`_mbsnbcoll`, `_mbsnbcoll_l`, `_mbsnbicoll`, `_mbsnbicoll_l`](./reference/mbsnbcoll-mbsnbcoll-l-mbsnbicoll-mbsnbicoll-l.md)\
[`setlocale`, `_wsetlocale`](./reference/setlocale-wsetlocale.md)\
[`strcmp`, `wcscmp`, `_mbscmp`](./reference/strcmp-wcscmp-mbscmp.md)\
[`strncmp`, `wcsncmp`, `_mbsncmp`, `_mbsncmp_l`](./reference/strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)\
[`_strnicmp`, `_wcsnicmp`, `_mbsnicmp`, `_strnicmp_l`, `_wcsnicmp_l`, `_mbsnicmp_l`](./reference/strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)\
[`strxfrm`, `wcsxfrm`, `_strxfrm_l`, `_wcsxfrm_l`](./reference/strxfrm-wcsxfrm-strxfrm-l-wcsxfrm-l.md)
