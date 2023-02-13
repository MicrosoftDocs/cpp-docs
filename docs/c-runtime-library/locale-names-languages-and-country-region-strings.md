---
title: "Locale Names, Languages, and Country-Region Strings"
description: "An overview of using Microsoft Universal CRT locale, language, and country and region strings."
ms.topic: "conceptual"
ms.date: "12/10/2018"
helpviewer_keywords: ["country/region strings", "localization, locale", "locales", "setlocale function", "language strings"]
ms.assetid: a0e5a0c5-5602-4da0-b65f-de3d6c8530a2
---
# UCRT Locale names, Languages, and Country/Region strings

You can set the *`locale`* argument to the [`setlocale`, `_wsetlocale`](./reference/setlocale-wsetlocale.md), [`_create_locale`](./reference/create-locale-wcreate-locale.md), and [`_wcreate_locale`](./reference/create-locale-wcreate-locale.md) functions in several ways. The locale can be set by using the locale names, languages, country/region codes, and code pages that are supported by the Windows NLS API. The *`locale`* argument takes one of the following forms:

> *`locale`* :: "*locale-name*"\
&emsp;\| "*language*\[_*country-region*\[.*code-page*]]"\
&emsp;\| ".*code-page*"\
&emsp;\| "C"\
&emsp;\| ""\
&emsp;\| NULL

The *locale-name* form is a short, IETF-standardized string; for example, `en-US` for English (United States) or `bs-Cyrl-BA` for Bosnian (Cyrillic, Bosnia and Herzegovina). These forms are preferred. For a list of supported locale names by Windows operating system version, see the **Language tag** column of the table in [Appendix A: Product Behavior](/openspecs/windows_protocols/ms-lcid/a9eac961-e77d-41a6-90a5-ce1a8b0cdb9c) in \[MS-LCID]: Windows Language Code Identifier (LCID) Reference. This resource lists the supported language, script, and region parts of the locale names. For information about the supported locale names that have non-default sort orders, see the **Locale name** column in [Sort order identifiers](/windows/win32/Intl/sort-order-identifiers). Under Windows 10 or later, locale names that correspond to valid [BCP-47](https://tools.ietf.org/html/bcp47) language tags are allowed. For example, `jp-US` is a valid BCP-47 tag, but it's effectively only `US` for locale functionality.

The *language*\[**\_**_country-region_\[__.__*code-page*]] form is stored in the locale setting for a category when a language string, or language string and country or region string, is used to create the locale. The set of supported language strings is described in [Language strings](./language-strings.md), and the list of supported country and region strings is listed in [Country/Region strings](./country-region-strings.md). If the specified language isn't associated with the specified country or region, the default language for the specified country or region is stored in the locale setting. We don't recommend this form for locale strings embedded in code or serialized to storage: These strings are more likely to be changed by an operating system update than the locale name form.

The *code-page* is the ANSI/OEM code page that's associated with the locale. The code page is determined for you when you specify a locale by language or by language and country/region alone. The special value `.ACP` specifies the ANSI code page for the country/region. The special value `.OCP` specifies the OEM code page for the country/region. For example, if you specify `"Greek_Greece.ACP"` as the locale, the locale is stored as `Greek_Greece.1253` (the ANSI code page for Greek), and if you specify `"Greek_Greece.OCP"` as the locale, it's stored as `Greek_Greece.737` (the OEM code page for Greek). For more information about code pages, see [Code pages](./code-pages.md). For a list of supported code pages on Windows, see [Code page identifiers](/windows/win32/Intl/code-page-identifiers).

If you use only the code page to specify the locale, the user's default language and country/region as reported by [`GetUserDefaultLocaleName`](/windows/win32/api/winnls/nf-winnls-getuserdefaultlocalename) are used. For example, if you specify `".1254"` (ANSI Turkish) as the locale for a user that's configured for English (United States), the locale that's stored is `English_United States.1254`. We don't recommend this form, because it could lead to inconsistent behavior.

A *`locale`* argument value of `C` specifies the minimal ANSI conforming environment for C translation. The `C` locale assumes that every **`char`** data type is 1 byte and its value is always less than 256. If *`locale`* points to an empty string, the locale is the implementation-defined native environment.

You can specify all of the locale categories at the same time for the `setlocale` and `_wsetlocale` functions by using the `LC_ALL` category. The categories can all be set to the same locale, or you can set each category individually by using a locale argument that has this form:

> *`LC-ALL-specifier`* :: *`locale`*\
&emsp;\| \[**`LC_COLLATE=`***`locale`*]\[**`;LC_CTYPE=`***`locale`*]\[**`;LC_MONETARY=`***`locale`*]\[**`;LC_NUMERIC=`***`locale`*]\[**`;LC_TIME=`***`locale`*]

You can specify multiple category types, separated by semicolons. Category types that aren't specified use the current locale setting. For example, this code snippet sets the current locale for all categories to `de-DE`, and then sets the categories `LC_MONETARY` to `en-GB` and `LC_TIME` to `es-ES`:

```C
_wsetlocale(LC_ALL, L"de-DE");
_wsetlocale(LC_ALL, L"LC_MONETARY=en-GB;LC_TIME=es-ES");
```

## UTF-8 Support

UTF-8 support can be enabled by using the UTF-8 code page in your locale string. For more information, see the [UTF-8 support section of `setlocale`](./reference/setlocale-wsetlocale.md#utf-8-support).

## See also

[C runtime library reference](./c-run-time-library-reference.md)\
[`_get_current_locale`](./reference/get-current-locale.md)\
[`setlocale`, `_wsetlocale`](./reference/setlocale-wsetlocale.md)\
[`_create_locale`, `_wcreate_locale`](./reference/create-locale-wcreate-locale.md)\
[Language strings](./language-strings.md)\
[Country/Region strings](./country-region-strings.md)
