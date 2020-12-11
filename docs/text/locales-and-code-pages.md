---
description: "Learn more about: Locales and Code Pages"
title: "Locales and Code Pages"
ms.date: "11/04/2016"
helpviewer_keywords: ["locales [C++], about locales", "locale IDs [C++]", "locales [C++]", "code pages [C++]", "code pages [C++], dynamically changing", "character sets [C++], code pages", "multibyte code pages [C++]", "character sets [C++], locales", "localization [C++], code pages", "localization [C++], locales", "code pages [C++], locales", "conventions [C++], international character support"]
ms.assetid: bd937361-b6d3-4c98-af95-beb7c903187b
---
# Locales and Code Pages

A locale ID reflects the local conventions and language for a particular geographical region. A given language might be spoken in more than one country/region; for example, Portuguese is spoken in Brazil as well as in Portugal. Conversely, a country/region might have more than one official language. For example, Canada has two languages: English and French. Thus, Canada has two distinct locales: Canadian-English and Canadian-French. Some locale-dependent categories include the formatting of dates and the display format for monetary values.

The language determines the text and data formatting conventions, while the country/region determines the local conventions. Every language has a unique mapping, represented by code pages, which includes characters other than those in the alphabet (such as punctuation marks and numbers). A code page is a character set and is related to the language. As such, a [locale](../c-runtime-library/locale.md) is a unique combination of language, country/region, and code page. The locale and code page setting can be changed at run time by calling the [setlocale](../c-runtime-library/reference/setlocale-wsetlocale.md) function.

Different languages might use different code pages. For example, the ANSI code page 1252 is used for English and most European languages, and the ANSI code page 932 is used for Japanese Kanji. Virtually all code pages share the ASCII character set for the lowest 128 characters (0x00 to 0x7F).

Any single-byte code page can be represented in a table (with 256 entries) as a mapping of byte values to characters (including numbers and punctuation marks), or glyphs. Any multibyte code page can also be represented as a very large table (with 64K entries) of double-byte values to characters. In practice, however, it is usually represented as a table for the first 256 (single-byte) characters and as ranges for the double-byte values.

For more information about code pages, see [Code Pages](../c-runtime-library/code-pages.md).

The C run-time library has two types of internal code pages: locale and multibyte. You can change the current code page during program execution (see the documentation for the [setlocale](../c-runtime-library/reference/setlocale-wsetlocale.md) and [_setmbcp](../c-runtime-library/reference/setmbcp.md) functions). Also, the run-time library might obtain and use the value of the operating system code page, which is constant for the duration of the program's execution.

When the locale code page changes, the behavior of the locale-dependent set of functions changes to that dictated by the chosen code page. By default, all locale-dependent functions begin execution with a locale code page unique to the "C" locale. You can change the internal locale code page (as well as other locale-specific properties) by calling the `setlocale` function. A call to `setlocale`(LC_ALL, "") sets the locale to that indicated by the operating system user locale.

Similarly, when the multibyte code page changes, the behavior of the multibyte functions changes to that dictated by the chosen code page. By default, all multibyte functions begin execution with a multibyte code page corresponding to the operating system's default code page. You can change the internal multibyte code page by calling the `_setmbcp` function.

The C run-time function `setlocale` sets, changes, or queries some or all of the current program's locale information. The [_wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md) routine is a wide-character version of `setlocale`; the arguments and return values of `_wsetlocale` are wide-character strings.

## See also

[Unicode and MBCS](../text/unicode-and-mbcs.md)<br/>
[Benefits of Character Set Portability](../text/benefits-of-character-set-portability.md)
