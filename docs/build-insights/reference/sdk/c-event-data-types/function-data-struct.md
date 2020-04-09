---
title: "FUNCTION_DATA structure"
description: "The C++ Build Insights SDK FUNCTION_DATA structure reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "FUNCTION_DATA", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# FUNCTION_DATA structure

::: moniker range="<=vs-2015"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and above. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=vs-2017"

The `FUNCTION_DATA` structure describes a function.

## Syntax

```cpp
typedef struct FUNCTION_DATA_TAG
{
    const char*         Name;

} FUNCTION_DATA;
```

## Members

|  |  |
|--|--|
| `Name` | The function's name, encoded in UTF-8. |

::: moniker-end
