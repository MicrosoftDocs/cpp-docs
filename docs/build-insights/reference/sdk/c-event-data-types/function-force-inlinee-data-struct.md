---
title: "FUNCTION_FORCE_INLINEE_DATA structure"
description: "The C++ Build Insights SDK FUNCTION_FORCE_INLINEE_DATA structure reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "FUNCTION_FORCE_INLINEE_DATA", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# FUNCTION_FORCE_INLINEE_DATA structure

::: moniker range="<=vs-2015"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and above. To see the documentation for these versions, set the Visual Studio version selector control for this article to Visual Studio 2017 or Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

The `FUNCTION_FORCE_INLINEE_DATA` structure describes a force-inlined function.

## Syntax

```cpp
typedef struct FUNCTION_FORCE_INLINEE_DATA_TAG
{
    const char*         Name;
    unsigned short      Size;

} FUNCTION_FORCE_INLINEE_DATA;
```

## Members

|  |  |
|--|--|
| `Name` | The function's name, encoded in UTF-8. |
| `Size` | The function's size, as a number of intermediate instructions. |

::: moniker-end
