---
title: "Country-Region Strings"
description: "Learn more about: Country/Region Strings"
ms.date: "1/29/2020"
helpviewer_keywords: ["country/region strings"]
---
# Country/region strings

Country and region strings can be combined with a language string to create a locale specification for the `setlocale`, `_wsetlocale`, `_create_locale`, and `_wcreate_locale` functions.

For lists of country and region names that are supported by various Windows operating system versions, see the **Language**, **Location**, and **Language tag** columns of the table in [Appendix A: Product Behavior](/openspecs/windows_protocols/ms-lcid/a9eac961-e77d-41a6-90a5-ce1a8b0cdb9c) in \[MS-LCID]: Windows Language Code Identifier (LCID) Reference. For an example of code that enumerates available locale names and related values, see [NLS: Name-based APIs Sample](/windows/win32/intl/nls--name-based-apis-sample).

## Other supported country and region strings

The Microsoft C run-time library implementation also supports the following country/region strings and abbreviations:

| Country/region string | Abbreviation | Equivalent locale name |
|---|---|---|
| `america` | `USA` | `en-US` |
| `britain` | `GBR` | `en-GB` |
| `china` | `CHN` | `zh-CN` |
| `czech` | `CZE` | `cs-CZ` |
| `england` | `GBR` | `en-GB` |
| `great britain` | `GBR` | `en-GB` |
| `holland` | `NLD` | `nl-NL` |
| `hong-kong` | `HKG` | `zh-HK` |
| `new-zealand` | `NZL` | `en-NZ` |
| `nz` | `NZL` | `en-NZ` |
| `pr china` | `CHN` | `zh-CN` |
| `pr-china` | `CHN` | `zh-CN` |
| `puerto-rico` | `PRI` | `es-PR` |
| `slovak` | `SVK` | `sk-SK` |
| `south africa` | `ZAF` | `af-ZA` |
| `south korea` | `KOR` | `ko-KR` |
| `south-africa` | `ZAF` | `af-ZA` |
| `south-korea` | `KOR` | `ko-KR` |
| `trinidad & tobago` | `TTO` | `en-TT` |
| `uk` | `GBR` | `en-GB` |
| `united-kingdom` | `GBR` | `en-GB` |
| `united-states` | `USA` | `en-US` |
| `us` | `USA` | `en-US` |

## See also

[Locale names, Languages, and Country/Region strings](./locale-names-languages-and-country-region-strings.md)\
[Language strings](./language-strings.md)\
[`setlocale`, `_wsetlocale`](./reference/setlocale-wsetlocale.md)\
[`_create_locale`, `_wcreate_locale`](./reference/create-locale-wcreate-locale.md)
