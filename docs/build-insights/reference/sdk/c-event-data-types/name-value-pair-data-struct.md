---
title: "NAME_VALUE_PAIR_DATA structure"
description: "The C++ Build Insights SDK NAME_VALUE_PAIR_DATA structure reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "NAME_VALUE_PAIR_DATA", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# NAME_VALUE_PAIR_DATA structure

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `NAME_VALUE_PAIR_DATA` structure describes a name and value pair.

## Syntax

```cpp
typedef struct NAME_VALUE_PAIR_DATA_TAG
{
    const wchar_t*      Name;
    const wchar_t*      Value;
} NAME_VALUE_PAIR_DATA;
```

## Members

| Name | Description |
|--|--|
| `Name` | The name. |
| `Value` | The value. |

::: moniker-end
