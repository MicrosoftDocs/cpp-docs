---
title: "TRACING_SESSION_STATISTICS structure"
description: "Learn about the C++ Build Insights SDK TRACING_SESSION_STATISTICS structure reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "TRACING_SESSION_STATISTICS", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# TRACING_SESSION_STATISTICS structure

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `TRACING_SESSION_STATISTICS` structure describes statistics on a trace that was collected. Its fields are set when stopping a tracing session.

## Syntax

```cpp
typedef struct TRACING_SESSION_STATISTICS_TAG
{
    unsigned long MSVCEventsLost;
    unsigned long MSVCBuffersLost;
    unsigned long SystemEventsLost;
    unsigned long SystemBuffersLost;

} TRACING_SESSION_STATISTICS;
```

## Members

| Name | Description |
|--|--|
| `MSVCEventsLost` | The number of MSVC events that were dropped. |
| `MSVCBuffersLost` | The number of MSVC event buffers that were dropped. |
| `SystemEventsLost` | The number of system events that were dropped. |
| `SystemBuffersLost` | The number of system event buffers that were dropped. |

## Remarks

This structure is populated when calling the following functions:

- [StopTracingSession](../functions/stop-tracing-session.md)
- [StopTracingSessionA](../functions/stop-tracing-session-a.md)
- [StopTracingSessionW](../functions/stop-tracing-session-w.md)
- [StopAndAnalyzeTracingSession](../functions/stop-and-analyze-tracing-session.md)
- [StopAndAnalyzeTracingSessionA](../functions/stop-and-analyze-tracing-session-a.md)
- [StopAndAnalyzeTracingSessionW](../functions/stop-and-analyze-tracing-session-w.md)
- [StopAndRelogTracingSession](../functions/stop-and-relog-tracing-session.md)
- [StopAndRelogTracingSessionA](../functions/stop-and-relog-tracing-session-a.md)
- [StopAndRelogTracingSessionW](../functions/stop-and-relog-tracing-session-w.md)

::: moniker-end
