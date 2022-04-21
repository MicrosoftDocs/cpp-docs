---
title: "RELOG_DESCRIPTOR structure"
description: "The C++ Build Insights SDK RELOG_DESCRIPTOR structure reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "RELOG_DESCRIPTOR", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# RELOG_DESCRIPTOR structure

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `RELOG_DESCRIPTOR` structure is used with the [RelogA](../functions/relog-a.md) and [RelogW](../functions/relog-w.md) functions. It describes how an Event Tracing for Windows (ETW) trace should be relogged.

## Syntax

```cpp
typedef struct RELOG_DESCRIPTOR_TAG
{
    unsigned                NumberOfAnalysisPasses;
    ANALYSIS_CALLBACKS      AnalysisCallbacks;
    RELOG_CALLBACKS         RelogCallbacks;
    unsigned long long      SystemEventsRetentionFlags;
    void*                   AnalysisContext;
    void*                   RelogContext;
} RELOG_DESCRIPTOR;
```

## Members

| Name | Description |
|--|--|
| `NumberOfAnalysisPasses` | The number of analysis passes that should be done over the ETW trace during the relogging session's analysis phase. |
| `AnalysisCallbacks` | An [ANALYSIS_CALLBACKS](analysis-callbacks-struct.md) object that specifies which functions to call during the relogging session's analysis phase. |
| `RelogCallbacks` | A [RELOG_CALLBACKS](relog-callbacks-struct.md) object that specifies which functions to call during the relogging session's relogging phase. |
| `SystemEventsRetentionFlags` | A [RELOG_RETENTION_SYSTEM_EVENT_FLAGS](relog-retention-system-event-flags-constants.md) bitmask that specifies which system ETW events to keep in the relogged trace. |
| `AnalysisContext` | A user-provided context that's passed as an argument to all callback functions specified in `AnalysisCallbacks` |
| `RelogContext` | A user-provided context that's passed as an argument to all callback functions specified in `RelogCallbacks` |

## Remarks

The relogging of ETW events during a relogging session is controlled by the user through the callback functions specified in `RelogCallbacks`. However, system ETW events such as CPU samples aren't forwarded to these callback functions. Use the `SystemEventsRetentionFlags` field to control the relogging of system ETW events.

The `AnalysisCallbacks` and `RelogCallbacks` structures only accept pointers to non-member functions. You can get around this limitation by setting them to an object pointer. This object pointer will be passed as an argument to all your non-member callback functions. Use this pointer to call member functions from within your non-member callback functions.

The analysis phase of a relogging session is always executed before the relogging phase.

::: moniker-end
