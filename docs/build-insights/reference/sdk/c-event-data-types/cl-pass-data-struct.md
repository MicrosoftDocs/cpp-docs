---
title: "CL_PASS_DATA structure"
description: "The C++ Build Insights SDK CL_PASS_DATA structure reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "CL_PASS_DATA", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# CL_PASS_DATA structure

::: moniker range="<=vs-2015"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and above. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=vs-2017"

The `CL_PASS_DATA` structure describes a compilation pass.

## Syntax

```cpp
typedef struct CL_PASS_DATA_TAG
{
    int                         TranslationUnitPassCode;
    const wchar_t*              InputSourcePath;
    const wchar_t*              OutputObjectPath;

} CL_PASS_DATA;
```

## Members

|  |  |
|--|--|
| `TranslationUnitPassCode` | A code identifying the compilation pass being executed. For more information, see [TRANSLATION_UNIT_PASS_CODE](translation-unit-pass-code-enum.md). |
| `InputSourcePath` | The C or C++ source file on which this compilation pass is being executed. |
| `OutputObjectPath` | The object file being produced by the compiler. |

::: moniker-end
