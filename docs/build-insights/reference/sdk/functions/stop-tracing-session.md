---
title: "C++ Build Insights SDK StopTracingSession"
description: "Stop a C++ Build Insights tracing session and save a raw trace file."
ms.date: "11/10/2026"
ms.custom: kr2b-contr-experiment
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "StopTracingSession", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# StopTracingSession

::: moniker range="<=msvc-140"

The C++ Build Insights SDK works with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. You can find the selector at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `StopTracingSession` function stops an ongoing tracing session and produces a raw trace file. You can pass raw trace files to the [Analyze](analyze.md), [AnalyzeA](analyze-a.md), and [AnalyzeW](analyze-w.md) functions to start an analysis session. You can pass raw trace files to the [Relog](relog.md), [RelogA](relog-a.md), and [RelogW](relog-w.md) functions to start a relogging session.

Stopping a session that collects system events requires administrator privileges. Stopping a session that doesn't collect system events requires appropriate ETW permissions.

## Syntax

```cpp
inline RESULT_CODE StopTracingSession(
    const char*                 sessionName,
    const char*                 outputLogFile,
    TRACING_SESSION_STATISTICS* statistics);

inline RESULT_CODE StopTracingSession(
    const wchar_t*              sessionName,
    const wchar_t*              outputLogFile,
    TRACING_SESSION_STATISTICS* statistics);
```

### Parameters

*sessionName*\
The name of the tracing session to stop. Use the same name you use in the start function, such as [StartTracingSession](start-tracing-session.md) or [StartTracingSession2](start-tracing-session2.md).

*outputLogFile*\
Full path of the final output log file to save the raw trace.

*statistics*\
Pointer to a [TRACING_SESSION_STATISTICS](../other-types/tracing-session-statistics-struct.md) object. `StopTracingSession` writes trace collection statistics in this object before returning.

### Return Value

A result code from the [RESULT_CODE](../other-types/result-code-enum.md) enum.

::: moniker-end
