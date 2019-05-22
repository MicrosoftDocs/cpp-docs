---
title: "Locale Names, Languages, and Country-Region Strings"
ms.date: "12/10/2018"
f1_keywords: ["c.strings"]
helpviewer_keywords: ["country/region strings", "localization, locale", "locales", "setlocale function", "language strings"]
ms.assetid: a0e5a0c5-5602-4da0-b65f-de3d6c8530a2
---
# UCRT Locale names, Languages, and Country/Region strings

The *locale* argument to the [setlocale, \_wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md), [\_create\_locale](../c-runtime-library/reference/create-locale-wcreate-locale.md), and [\_wcreate\_locale](../c-runtime-library/reference/create-locale-wcreate-locale.md) functions can be set by using the locale names, languages, country/region codes, and code pages that are supported by the Windows NLS API. The *locale* argument takes the following form:

> *locale* :: "*locale-name*"<br/>
&nbsp;&nbsp;&nbsp;&nbsp;\| "*language*\[**\_**_country-region_\[__.__*code-page*]]"<br/>
&nbsp;&nbsp;&nbsp;&nbsp;\| "__.__*code-page*"<br/>
&nbsp;&nbsp;&nbsp;&nbsp;\| "C"<br/>
&nbsp;&nbsp;&nbsp;&nbsp;\| ""<br/>
&nbsp;&nbsp;&nbsp;&nbsp;\| NULL

The *locale-name* form is a short, IETF-standardized string; for example, `en-US` for English (United States) or `bs-Cyrl-BA` for Bosnian (Cyrillic, Bosnia and Herzegovina). These forms are preferred. For a list of supported locale names by Windows operating system version, see the **Language tag** column of the table in [Appendix A: Product Behavior](https://msdn.microsoft.com/library/cc233982.aspx) in [MS-LCID]: Windows Language Code Identifier (LCID) Reference. This resource lists the supported language, script, and region parts of the locale names. For information about the supported locale names that have non-default sort orders, see the **Locale name** column in [Sort Order Identifiers](/windows/desktop/Intl/sort-order-identifiers). Under Windows 10 or later, locale names that correspond to valid [BCP-47](https://tools.ietf.org/html/bcp47) language tags are allowed. For example, `jp-US` is a valid BCP-47 tag, but it is effectively only `US` for locale functionality.

The *language*\[**\_**_country-region_\[__.__*code-page*]] form is stored in the locale setting for a category when a language string, or language string and country or region string, is used to create the locale. The set of supported language strings is described in [Language Strings](../c-runtime-library/language-strings.md), and the list of supported country and region strings is listed in [Country/Region Strings](../c-runtime-library/country-region-strings.md). If the specified language is not associated with the specified country or region, the default language for the specified country or region is stored in the locale setting. We do not recommend this form for locale strings embedded in code or serialized to storage, because these strings are more likely to be changed by an operating system update than the locale name form.

The *code-page* is the ANSI/OEM code page that's associated with the locale. The code page is determined for you when you specify a locale by language or by language and country/region alone. The special value `.ACP` specifies the ANSI code page for the country/region. The special value `.OCP` specifies the OEM code page for the country/region. For example, if you specify `"Greek_Greece.ACP"` as the locale, the locale is stored as `Greek_Greece.1253` (the ANSI code page for Greek), and if you specify `"Greek_Greece.OCP"` as the locale, it is stored as `Greek_Greece.737` (the OEM code page for Greek). For more information about code pages, see [Code Pages](../c-runtime-library/code-pages.md). For a list of supported code pages on Windows, see [Code Page Identifiers](/windows/desktop/Intl/code-page-identifiers).

If you use only the code page to specify the locale, the user's default language and country/region as reported by [GetUserDefaultLocaleName](/windows/desktop/api/winnls/nf-winnls-getuserdefaultlocalename) are used. For example, if you specify `".1254"` (ANSI Turkish) as the locale for a user that's configured for English (United States), the locale that's stored is `English_United States.1254`. We do not recommend this form, because it could lead to inconsistent behavior.

A *locale* argument value of `C` specifies the minimal ANSI conforming environment for C translation. The `C` locale assumes that every **char** data type is 1 byte and its value is always less than 256. If *locale* points to an empty string, the locale is the implementation-defined native environment.

You can specify all of the locale categories at the same time for the `setlocale` and `_wsetlocale` functions by using the `LC_ALL` category. The categories can all be set to the same locale, or you can set each category individually by using a locale argument that has this form:

> *LC-ALL-specifier* :: *locale*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;\| \[**LC_COLLATE=**_locale_]\[**;LC_CTYPE=**_locale_]\[**;LC_MONETARY=**_locale_]\[**;LC_NUMERIC=**_locale_]\[**;LC_TIME=**_locale_]

You can specify multiple category types, separated by semicolons. Category types that are not specified use the current locale setting. For example, this code snippet sets the current locale for all categories to `de-DE`, and then sets the categories `LC_MONETARY` to `en-GB` and `LC_TIME` to `es-ES`:

```C
_wsetlocale(LC_ALL, L"de-DE");
_wsetlocale(LC_ALL, L"LC_MONETARY=en-GB;LC_TIME=es-ES");
```

## See also

[C Run-Time Library Reference](../c-runtime-library/c-run-time-library-reference.md)<br/>
[_get_current_locale](../c-runtime-library/reference/get-current-locale.md)<br/>
[setlocale, _wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md)<br/>
[_create_locale, _wcreate_locale](../c-runtime-library/reference/create-locale-wcreate-locale.md)<br/>
[Language Strings](../c-runtime-library/language-strings.md)<br/>
[Country/Region Strings](../c-runtime-library/country-region-strings.md)
