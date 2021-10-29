---
title: "StopAndAnalyzeTracingSession"
description: "The C++ Build Insights SDK StopAndAnalyzeTracingSession function reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "StopAndAnalyzeTracingSession", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# StopAndAnalyzeTracingSession

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `StopAndAnalyzeTracingSession` function stops an ongoing tracing session and saves the resulting trace in a temporary file. An analysis session is then immediately started using the temporary file as an input. Executables calling this function must have administrator privileges.

## Syntax

```cpp
template <typename... TAnalyzerGroupMembers>
RESULT_CODE StopAndAnalyzeTracingSession(
    const char*                                   sessionName,
    unsigned                                      numberOfAnalysisPasses,
    TRACING_SESSION_STATISTICS*                   statistics,
    StaticAnalyzerGroup<TAnalyzerGroupMembers...> analyzerGroup);

template <typename... TAnalyzerGroupMembers>
RESULT_CODE StopAndAnalyzeTracingSession(
    const wchar_t*                                sessionName,
    unsigned                                      numberOfAnalysisPasses,
    TRACING_SESSION_STATISTICS*                   statistics,
    StaticAnalyzerGroup<TAnalyzerGroupMembers...> analyzerGroup);
```

### Parameters

*sessionName*\
The name of the tracing session to stop. Use the same session name as the one passed to [StartTracingSession](start-tracing-session.md), [StartTracingSessionA](start-tracing-session-a.md), or [StartTracingSessionW](start-tracing-session-w.md).

*numberOfAnalysisPasses*\
The number of analysis passes to run on the trace. The trace gets passed through the provided analyzer group once per analysis pass.

*statistics*\
Pointer to a [TRACING_SESSION_STATISTICS](../other-types/tracing-session-statistics-struct.md) object. `StopAndAnalyzeTracingSession` writes trace collection statistics in this object before returning.

*analyzerGroup*\
The analyzer group used for the analysis. Call [MakeStaticAnalyzerGroup](make-static-analyzer-group.md) to create an analyzer group. If you wish to use a dynamic analyzer group obtained from [MakeDynamicAnalyzerGroup](make-dynamic-analyzer-group.md), first encapsulate it inside a static analyzer group by passing its address to `MakeStaticAnalyzerGroup`.

### Return Value

A result code from the [RESULT_CODE](../other-types/result-code-enum.md) enum.

::: moniker-end
