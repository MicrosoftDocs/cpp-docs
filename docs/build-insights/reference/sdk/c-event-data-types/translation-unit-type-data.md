---
title: "TRANSLATION_UNIT_TYPE_DATA enum"
description: "The C++ Build Insights SDK TRANSLATION_UNIT_TYPE_DATA enum reference."
ms.date: "06/10/2021"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "TRANSLATION_UNIT_TYPE_DATA", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# TRANSLATION_UNIT_TYPE_DATA enum

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `TRANSLATION_UNIT_TYPE_DATA` structure describes the type of the translation unit in the compiler front end pass.

## Syntax

```cpp
typedef struct TRANSLATION_UNIT_TYPE_DATA_TAG
{
    int  TranslationUnitType;

}  TRANSLATION_UNIT_TYPE_DATA;
```

## Members

| Name | Description |
|--|--|
| `TranslationUnitType` | The type of this translation unit (either modules, header unit, or precompiled header). |

## Remarks

Used by the C SDK functions.

::: moniker-end
