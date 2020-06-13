---
title: "SYMBOL_NAME_DATA structure"
description: "The C++ Build Insights SDK SYMBOL_NAME_DATA structure reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "SYMBOL_NAME_DATA", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# SYMBOL_NAME_DATA structure

::: moniker range="<=vs-2015"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and above. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=vs-2017"

The `SYMBOL_NAME_DATA` structure describes a compiler front-end symbol.

## Syntax

```cpp
typedef struct SYMBOL_NAME_DATA_TAG
{
    unsigned long long  Key;
    const char*         Name;

} SYMBOL_NAME_DATA;
```

## Members

|  |  |
|--|--|
| `Key` | The symbol's key. This value is unique within the trace being analyzed. |
| `Name` | The symbol's name. |

## Remarks

Symbols coming from two different compiler front-end passes may have the same name but a different key. In this case, use symbol names to determine if two types are the same.

::: moniker-end
