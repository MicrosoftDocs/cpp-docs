---
title: "Locale Names, Languages, and Country-Region Strings"
ms.date: "12/10/2018"
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

The *locale-name* form is a short, IETF-standardized string; for example, `en-US` for English (United States) or `bs-Cyrl-BA` for Bosnian (Cyrillic, Bosnia and Herzegovina). These forms are preferred. For a list of supported locale names by Windows operating system version, see the **Language tag** column of the table in [Appendix A: Product Behavior](https://docs.microsoft.com/openspecs/windows_protocols/ms-lcid/a9eac961-e77d-41a6-90a5-ce1a8b0cdb9c) in \[MS-LCID]: Windows Language Code Identifier (LCID) Reference. This resource lists the supported language, script, and region parts of the locale names. For information about the supported locale names that have non-default sort orders, see the **Locale name** column in [Sort Order Identifiers](/windows/win32/Intl/sort-order-identifiers). Under Windows 10 or later, locale names that correspond to valid [BCP-47](https://tools.ietf.org/html/bcp47) language tags are allowed. For example, `jp-US` is a valid BCP-47 tag, but it is effectively only `US` for locale functionality.

The *language*\[**\_**_country-region_\[__.__*code-page*]] form is stored in the locale setting for a category when a language string, or language string and country or region string, is used to create the locale. The set of supported language strings is described in [Language Strings](../c-runtime-library/language-strings.md), and the list of supported country and region strings is listed in [Country/Region Strings](../c-runtime-library/country-region-strings.md). If the specified language is not associated with the specified country or region, the default language for the specified country or region is stored in the locale setting. We do not recommend this form for locale strings embedded in code or serialized to storage, because these strings are more likely to be changed by an operating system update than the locale name form.

The *code-page* is the ANSI/OEM code page that's associated with the locale. The code page is determined for you when you specify a locale by language or by language and country/region alone. The special value `.ACP` specifies the ANSI code page for the country/region. The special value `.OCP` specifies the OEM code page for the country/region. For example, if you specify `"Greek_Greece.ACP"` as the locale, the locale is stored as `Greek_Greece.1253` (the ANSI code page for Greek), and if you specify `"Greek_Greece.OCP"` as the locale, it is stored as `Greek_Greece.737` (the OEM code page for Greek). For more information about code pages, see [Code Pages](../c-runtime-library/code-pages.md). For a list of supported code pages on Windows, see [Code Page Identifiers](/windows/win32/Intl/code-page-identifiers).

If you use only the code page to specify the locale, the user's default language and country/region as reported by [GetUserDefaultLocaleName](/windows/win32/api/winnls/nf-winnls-getuserdefaultlocalename) are used. For example, if you specify `".1254"` (ANSI Turkish) as the locale for a user that's configured for English (United States), the locale that's stored is `English_United States.1254`. We do not recommend this form, because it could lead to inconsistent behavior.

A *locale* argument value of `C` specifies the minimal ANSI conforming environment for C translation. The `C` locale assumes that every **`char`** data type is 1 byte and its value is always less than 256. If *locale* points to an empty string, the locale is the implementation-defined native environment.

You can specify all of the locale categories at the same time for the `setlocale` and `_wsetlocale` functions by using the `LC_ALL` category. The categories can all be set to the same locale, or you can set each category individually by using a locale argument that has this form:

> *LC-ALL-specifier* :: *locale*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;\| \[**LC_COLLATE=**_locale_]\[**;LC_CTYPE=**_locale_]\[**;LC_MONETARY=**_locale_]\[**;LC_NUMERIC=**_locale_]\[**;LC_TIME=**_locale_]

You can specify multiple category types, separated by semicolons. Category types that are not specified use the current locale setting. For example, this code snippet sets the current locale for all categories to `de-DE`, and then sets the categories `LC_MONETARY` to `en-GB` and `LC_TIME` to `es-ES`:

```C
_wsetlocale(LC_ALL, L"de-DE");
_wsetlocale(LC_ALL, L"LC_MONETARY=en-GB;LC_TIME=es-ES");
```


## UTF-8 Support

Starting in Windows 10 build 17134 (April 2018 Update), the Universal C Runtime supports using a UTF-8 code page. This means that `char` strings passed to C runtime functions will expect strings in the UTF-8 encoding. To enable UTF-8 mode, use "UTF-8" as the code page when using `setlocale`. For example, [`setlocale(LC_ALL, ".utf8")`](reference/setlocale-wsetlocale.md) will use the current default Windows ANSI code page (ACP) for the locale and UTF-8 for the code page.

After calling `setlocale(LC_ALL, ".UTF8")`, you may pass "😊" to `mbtowcs` and it will be properly translated to a `wchar_t` string, whereas previously there was not a locale setting available to do this.

UTF-8 mode is also enabled for functions that have historically translated `char` strings using the default Windows ANSI code page (ACP). For example, calling [`_mkdir("😊")`](reference/mkdir-wmkdir.md) while using a UTF-8 code page will correctly produce a directory with that emoji as the folder name, instead of requiring the ACP to be changed to UTF-8 prior to running your program. Likewise, calling [`_getcwd()`](reference/getcwd-wgetcwd.md) inside of that folder will return a UTF-8 encoded string. For compatibility, the ACP is still used if the C locale code page is not set to UTF-8.

The following aspects of the C Runtime that are not able to use UTF-8 because they are set during program startup and must use the default Windows ANSI code page (ACP): [`__argv`](argc-argv-wargv.md), [`_acmdln`](acmdln-tcmdln-wcmdln.md), and [`_pgmptr`](pgmptr-wpgmptr.md).

Previous to this support, [`mbrtoc16`, `mbrtoc32`](reference/mbrtoc16-mbrtoc323.md), [`c16rtomb`, and `c32rtomb`](reference/c16rtomb-c32rtomb1.md) existed to translate between UTF-8 narrow strings, UTF-16 (same encoding as `wchar_t` on Windows platforms) and UTF-32. For compatibility reasons, these APIs still only translate to and from UTF-8 and not the code page set via `setlocale`.

To use this feature on an OS prior to Windows 10, such as Windows 7, you must use [app-local deployment](../windows/universal-crt-deployment.md#local-deployment) or link statically using version 17134 of the Windows SDK or later. For Windows 10 operating systems prior to 17134, only static linking is supported.


## See also

[C Run-Time Library Reference](../c-runtime-library/c-run-time-library-reference.md)<br/>
[_get_current_locale](../c-runtime-library/reference/get-current-locale.md)<br/>
[setlocale, _wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md)<br/>
[_create_locale, _wcreate_locale](../c-runtime-library/reference/create-locale-wcreate-locale.md)<br/>
[Language Strings](../c-runtime-library/language-strings.md)<br/>
[Country/Region Strings](../c-runtime-library/country-region-strings.md)
