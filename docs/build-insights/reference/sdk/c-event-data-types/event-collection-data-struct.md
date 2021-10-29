---
title: "EVENT_COLLECTION_DATA structure"
description: "The C++ Build Insights SDK EVENT_COLLECTION_DATA structure reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "EVENT_COLLECTION_DATA", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# EVENT_COLLECTION_DATA structure

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `EVENT_COLLECTION_DATA` structure describes an array of [EVENT_DATA](event-data-struct.md) elements.

## Syntax

```cpp
typedef struct EVENT_COLLECTION_DATA_TAG
{
    unsigned int            Count;
    const EVENT_DATA*       Elements;

} EVENT_COLLECTION_DATA;
```

## Members

| Name | Description |
|--|--|
| `Count` | The number of `EVENT_DATA` elements in the array. |
| `Elements` | Pointer to the first `EVENT_DATA` element in the array. |

::: moniker-end
