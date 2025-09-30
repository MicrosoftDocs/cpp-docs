---
title: "Language Strings"
description: "Learn more about: Language Strings"
ms.date: "1/12/2021"
helpviewer_keywords: ["language strings"]
---
# Language strings

The [`setlocale`](reference/setlocale-wsetlocale.md) and [`_create_locale`](reference/create-locale-wcreate-locale.md) functions can use the Windows NLS API supported languages on operating systems that don't use the Unicode code page. For a list of supported languages by operating system version, see [Appendix A: Product Behavior](/openspecs/windows_protocols/ms-lcid/a9eac961-e77d-41a6-90a5-ce1a8b0cdb9c) in \[MS-LCID]: Windows Language Code Identifier (LCID) Reference. The language string can be any of the values in the **Language** and **Language tag** columns of the list of supported languages. For example code that enumerates available locale names and related values, see [NLS: Name-based APIs Sample](/windows/win32/intl/nls--name-based-apis-sample).

## Supported language strings

The Microsoft C run-time library implementation also supports these language strings:

| Language string | Equivalent Locale Name |
|---|---|
| `american` | `en-US` |
| `american english` | `en-US` |
| `american-english` | `en-US` |
| `australian` | `en-AU` |
| `belgian` | `nl-BE` |
| `canadian` | `en-CA` |
| `chh` | `zh-HK` |
| `chi` | `zh-SG` |
| `chinese` | `zh` |
| `chinese-hongkong` | `zh-HK` |
| `chinese-simplified` | `zh-CN` |
| `chinese-singapore` | `zh-SG` |
| `chinese-traditional` | `zh-TW` |
| `dutch-belgian` | `nl-BE` |
| `english-american` | `en-US` |
| `english-aus` | `en-AU` |
| `english-belize` | `en-BZ` |
| `english-can` | `en-CA` |
| `english-caribbean` | `en-029` |
| `english-ire` | `en-IE` |
| `english-jamaica` | `en-JM` |
| `english-nz` | `en-NZ` |
| `english-south africa` | `en-ZA` |
| `english-trinidad y tobago` | `en-TT` |
| `english-uk` | `en-GB` |
| `english-us` | `en-US` |
| `english-usa` | `en-US` |
| `french-belgian` | `fr-BE` |
| `french-canadian` | `fr-CA` |
| `french-luxembourg` | `fr-LU` |
| `french-swiss` | `fr-CH` |
| `german-austrian` | `de-AT` |
| `german-lichtenstein` | `de-LI` |
| `german-luxembourg` | `de-LU` |
| `german-swiss` | `de-CH` |
| `irish-english` | `en-IE` |
| `italian-swiss` | `it-CH` |
| `norwegian` | `no` |
| `norwegian-bokmal` | `nb-NO` |
| `norwegian-nynorsk` | `nn-NO` |
| `portuguese-brazilian` | `pt-BR` |
| `spanish-argentina` | `es-AR` |
| `spanish-bolivia` | `es-BO` |
| `spanish-chile` | `es-CL` |
| `spanish-colombia` | `es-CO` |
| `spanish-costa rica` | `es-CR` |
| `spanish-dominican republic` | `es-DO` |
| `spanish-ecuador` | `es-EC` |
| `spanish-el salvador` | `es-SV` |
| `spanish-guatemala` | `es-GT` |
| `spanish-honduras` | `es-HN` |
| `spanish-mexican` | `es-MX` |
| `spanish-modern` | `es-ES` |
| `spanish-nicaragua` | `es-NI` |
| `spanish-panama` | `es-PA` |
| `spanish-paraguay` | `es-PY` |
| `spanish-peru` | `es-PE` |
| `spanish-puerto rico` | `es-PR` |
| `spanish-uruguay` | `es-UY` |
| `spanish-venezuela` | `es-VE` |
| `swedish-finland` | `sv-FI` |
| `swiss` | `de-CH` |
| `uk` | `en-GB` |
| `us` | `en-US` |
| `usa` | `en-US` |

## See also

- [Locale names, Languages, and Country/Region strings](locale-names-languages-and-country-region-strings.md)
- [Country/Region strings](country-region-strings.md)
- [`setlocale`, `_wsetlocale`](reference/setlocale-wsetlocale.md)
- [`_create_locale`, `_wcreate_locale`](reference/create-locale-wcreate-locale.md)
