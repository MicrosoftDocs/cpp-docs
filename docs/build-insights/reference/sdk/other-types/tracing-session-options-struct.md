---
title: "TRACING_SESSION_OPTIONS structure"
description: "The C++ Build Insights SDK TRACING_SESSION_OPTIONS structure reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "TRACING_SESSION_OPTIONS", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# TRACING_SESSION_OPTIONS structure

::: moniker range="<=vs-2015"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and above. To see the documentation for these versions, set the Visual Studio version selector control for this article to Visual Studio 2017 or Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

The `TRACING_SESSION_OPTIONS` structure is used when initializing an [ANALYSIS_DESCRIPTOR](analysis-descriptor-struct.md) or [RELOG_DESCRIPTOR](relog-descriptor-struct.md) structure. It describes which events to capture during the collection of a trace.

## Syntax

```cpp
typedef struct TRACING_SESSION_OPTIONS_TAG
{
    unsigned long long SystemEventFlags;
    unsigned long long MsvcEventFlags;

} TRACING_SESSION_OPTIONS;
```

## Members

|  |  |
|--|--|
| `SystemEventFlags` | A bitmask describing the system events to capture. For more information, see [TRACING_SESSION_SYSTEM_EVENT_FLAGS](tracing-session-system-event-flags-constants.md). |
| `MsvcEventFlags` | A bitmask describing the MSVC events to capture. For more information, see [TRACING_SESSION_MSVC_EVENT_FLAGS](tracing-session-msvc-event-flags-constants.md). |

::: moniker-end
