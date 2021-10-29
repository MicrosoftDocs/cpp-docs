---
title: "OnTraceInfoFunc typedef"
description: "The C++ Build Insights SDK OnTraceInfoFunc typedef reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "OnTraceInfoFunc", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# OnTraceInfoFunc typedef

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `OnTraceInfoFunc` typedef is one of the function signatures used in the [ANALYSIS_CALLBACKS](analysis-callbacks-struct.md) and [RELOG_CALLBACKS](relog-callbacks-struct.md) structures.

## Syntax

```cpp
typedef enum CALLBACK_CODE (BUILD_INSIGHTS_API *OnTraceInfoFunc)(
    const TRACE_INFO_DATA*          traceInfo,
    void*                           callbackContext);
```

### Parameters

*traceInfo*\
A [TRACE_INFO_DATA](../c-event-data-types/trace-info-data-struct.md) object that contains information about the trace currently being analyzed or relogged.

*callbackContext*\
The context value that was set for this callback in [ANALYSIS_DESCRIPTOR](analysis-descriptor-struct.md) or [RELOG_DESCRIPTOR](relog-descriptor-struct.md).

### Return Value

A [CALLBACK_CODE](callback-code-enum.md) value that controls what should happen next.

::: moniker-end
