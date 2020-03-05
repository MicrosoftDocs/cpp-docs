---
title: "OnBeginEndPassFunc typedef"
description: "The C++ Build Insights SDK OnBeginEndPassFunc typedef reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "OnBeginEndPassFunc", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# OnBeginEndPassFunc typedef

::: moniker range="<=vs-2015"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and above. To see the documentation for these versions, set the Visual Studio version selector control for this article to Visual Studio 2017 or Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

The `OnBeginEndPassFunc` typedef is one of the function signatures used in the [ANALYSIS_CALLBACKS](analysis-callbacks-struct.md) and [RELOG_CALLBACKS](relog-callbacks-struct.md) structures.

## Syntax

```cpp
typedef enum CALLBACK_CODE (BUILD_INSIGHTS_API *OnBeginEndPassFunc)(
    void*                           callbackContext);
```

## Members

|  |  |
|--|--|
| `callbackContext` |  |

::: moniker-end
