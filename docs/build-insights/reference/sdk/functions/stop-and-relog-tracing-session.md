---
title: "StopAndRelogTracingSession"
description: "The C++ Build Insights SDK StopAndRelogTracingSession function reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "StopAndRelogTracingSession", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# StopAndRelogTracingSession

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `StopAndRelogTracingSession` function stops an ongoing tracing session and saves the resulting trace in a temporary file. A relogging session is then immediately started using the temporary file as an input. The final relogged trace produced by the relogging session is saved in a file specified by the caller. Executables calling this function must have administrator privileges.

## Syntax

```cpp
template <
    typename... TAnalyzerGroupMembers,
    typename... TReloggerGroupMembers>
RESULT_CODE StopAndRelogTracingSession(
    const char*                                   sessionName,
    const char*                                   outputLogFile,
    TRACING_SESSION_STATISTICS*                   statistics,
    unsigned                                      numberOfAnalysisPasses,
    unsigned long long                            systemEventsRetentionFlags,
    StaticAnalyzerGroup<TAnalyzerGroupMembers...> analyzerGroup,
    StaticReloggerGroup<TReloggerGroupMembers...> reloggerGroup);

template <
    typename... TAnalyzerGroupMembers,
    typename... TReloggerGroupMembers>
RESULT_CODE StopAndRelogTracingSession(
    const wchar_t*                                sessionName,
    const wchar_t*                                outputLogFile,
    TRACING_SESSION_STATISTICS*                   statistics,
    unsigned                                      numberOfAnalysisPasses,
    unsigned long long                            systemEventsRetentionFlags,
    StaticAnalyzerGroup<TAnalyzerGroupMembers...> analyzerGroup,
    StaticReloggerGroup<TReloggerGroupMembers...> reloggerGroup);
```

### Parameters

*sessionName*\
The name of the tracing session to stop. Use the same session name as the one passed to [StartTracingSession](start-tracing-session.md), [StartTracingSessionA](start-tracing-session-a.md), or [StartTracingSessionW](start-tracing-session-w.md).

*outputLogFile*\
The file in which to write the relogged trace produced by the relogging session.

*statistics*\
Pointer to a [TRACING_SESSION_STATISTICS](../other-types/tracing-session-statistics-struct.md) object. `StopAndRelogTracingSession` writes trace collection statistics in this object before returning.

*numberOfAnalysisPasses*\
The number of analysis passes to run on the trace. The trace gets passed through the provided analyzer group once per analysis pass.

*systemEventsRetentionFlags*\
A [RELOG_RETENTION_SYSTEM_EVENT_FLAGS](../other-types/relog-retention-system-event-flags-constants.md) bitmask that specifies which system ETW events to keep in the relogged trace.

*analyzerGroup*\
The analyzer group used for the analysis phase of the relogging session. Call [MakeStaticAnalyzerGroup](make-static-analyzer-group.md) to create an analyzer group. If you wish to use a dynamic analyzer group obtained from [MakeDynamicAnalyzerGroup](make-dynamic-analyzer-group.md), first encapsulate it inside a static analyzer group by passing its address to `MakeStaticAnalyzerGroup`.

*reloggerGroup*\
The relogger group that relogs events into the trace file specified in *outputLogFile*. Call [MakeStaticReloggerGroup](make-static-relogger-group.md) to create a relogger group. If you wish to use a dynamic relogger group obtained from [MakeDynamicReloggerGroup](make-dynamic-relogger-group.md), first encapsulate it inside a static relogger group by passing its address to `MakeStaticReloggerGroup`.

### Return Value

A result code from the [RESULT_CODE](../other-types/result-code-enum.md) enum.

### Remarks

The input trace is passed through the analyzer group *numberOfAnalysisPasses* times. There's no similar option for relogging passes. The trace is passed trough the relogger group only once, after all analysis passes are complete.

The relogging of system events like CPU samples from within a relogger class isn't supported. Use the *systemEventsRetentionFlags* parameter to decide which system events to keep in the output trace.

::: moniker-end
