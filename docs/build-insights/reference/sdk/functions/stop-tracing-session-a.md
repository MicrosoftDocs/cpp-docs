---
title: "StopTracingSessionA"
description: "The C++ Build Insights SDK StopTracingSessionA function reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "StopTracingSessionA", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# StopTracingSessionA

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `StopTracingSessionA` function stops an ongoing tracing session and produces a raw trace file. Raw trace files can be passed to the [Analyze](analyze.md), [AnalzeA](analyze-a.md), and [AnalyzeW](analyze-w.md) functions to start an analysis session. Raw trace files can also be passed to the [Relog](relog.md), [RelogA](relog-a.md), and [RelogW](relog-w.md) functions to start relogging session. Executables calling `StopTracingSessionA` must have administrator privileges.

## Syntax

```cpp
enum RESULT_CODE StopTracingSessionA(
    const char*                 sessionName,
    const char*                 outputLogFile,
    TRACING_SESSION_STATISTICS* statistics);
```

### Parameters

*sessionName*\
The name of the tracing session to stop. Use the same session name as the one passed to [StartTracingSession](start-tracing-session.md), [StartTracingSessionA](start-tracing-session-a.md), or [StartTracingSessionW](start-tracing-session-w.md).

*outputLogFile*\
Path to the final output log file where the raw trace should be saved.

*statistics*\
Pointer to a [TRACING_SESSION_STATISTICS](../other-types/tracing-session-statistics-struct.md) object. `StopTracingSessionA` writes trace collection statistics in this object before returning.

### Return Value

A result code from the [RESULT_CODE](../other-types/result-code-enum.md) enum.

::: moniker-end
