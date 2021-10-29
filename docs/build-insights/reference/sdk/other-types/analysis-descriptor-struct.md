---
title: "ANALYSIS_DESCRIPTOR structure"
description: "The C++ Build Insights SDK ANALYSIS_DESCRIPTOR structure reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "ANALYSIS_DESCRIPTOR", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# ANALYSIS_DESCRIPTOR structure

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `ANALYSIS_DESCRIPTOR` structure is used with the [AnalyzeA](../functions/analyze-a.md) and [AnalyzeW](../functions/analyze-w.md) functions. It describes how an Event Tracing for Windows (ETW) trace should be analyzed.

## Syntax

```cpp
typedef struct ANALYSIS_DESCRIPTOR_TAG
{
    unsigned                NumberOfPasses;
    ANALYSIS_CALLBACKS      Callbacks;
    void*                   Context;
} ANALYSIS_DESCRIPTOR;
```

## Members

| Name | Description |
|--|--|
| `NumberOfPasses` | The number of analysis passes that should be done over the ETW trace. |
| `Callbacks` | An [ANALYSIS_CALLBACKS](analysis-callbacks-struct.md) object that specifies which functions to call during the analysis session. |
| `Context` | A user-provided context that is passed as an argument to all callback functions specified in `Callbacks` |

## Remarks

The `Callbacks` structure only accepts pointers to non-member functions. You can get around this limitation by setting `Context` to an object pointer. This object pointer will be passed as an argument to all your non-member callback functions. Use this pointer to call member functions from within your non-member callback functions.

::: moniker-end
