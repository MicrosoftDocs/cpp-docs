---
title: "TEMPLATE_INSTANTIATION_DATA structure"
description: "The C++ Build Insights SDK TEMPLATE_INSTANTIATION_DATA structure reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "TEMPLATE_INSTANTIATION_DATA", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# TEMPLATE_INSTANTIATION_DATA structure

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `TEMPLATE_INSTANTIATION_DATA` structure describes a template instantiation.

## Syntax

```cpp
typedef struct TEMPLATE_INSTANTIATION_DATA_TAG
{
    unsigned long long  SpecializationSymbolKey;
    unsigned long long  PrimaryTemplateSymbolKey;
    int                 KindCode;

} TEMPLATE_INSTANTIATION_DATA;
```

## Members

| Name | Description |
|--|--|
| `SpecializationSymbolKey` | The key for the template specialization's type. This value is unique within the trace being analyzed. |
| `PrimaryTemplateSymbolKey` | The key for the primary template type that was specialized. This value is unique within the trace being analyzed. |
| `KindCode` | The template instantiation's type. For more information, see [TEMPLATE_INSTANTIATION_KIND_CODE](template-instantiation-kind-code-enum.md). |

## Remarks

The keys in the `TEMPLATE_INSTANTIATION_DATA` structure are unique within the trace being analyzed. However, two different keys coming from different compiler front-end passes may point to two identical types. When consuming `TEMPLATE_INSTANTIATION_DATA` information from multiple compiler front-end passes, use the [SYMBOL_NAME](../event-table.md#symbol-name) events to determine if two types are the same. `SymbolName` events are emitted at the end of a compiler front-end pass, after all template instantiations have taken place.

::: moniker-end
