---
title: "Relog"
description: "The C++ Build Insights SDK Relog function reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "Relog", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# Relog

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `Relog` function is used to read MSVC events from an Event Tracing for Windows (ETW) trace and write them into a new, modified ETW trace.

## Syntax

```cpp
template <
    typename... TAnalyzerGroupMembers,
    typename... TReloggerGroupMembers>
RESULT_CODE Relog(
    const char*                                   inputLogFile,
    const char*                                   outputLogFile,
    unsigned                                      numberOfAnalysisPasses,
    unsigned long long                            systemEventsRetentionFlags,
    StaticAnalyzerGroup<TAnalyzerGroupMembers...> analyzerGroup,
    StaticReloggerGroup<TReloggerGroupMembers...> reloggerGroup);

template <
    typename... TAnalyzerGroupMembers,
    typename... TReloggerGroupMembers>
RESULT_CODE Relog(
    const wchar_t*                                inputLogFile,
    const wchar_t*                                outputLogFile,
    unsigned                                      numberOfAnalysisPasses,
    unsigned long long                            systemEventsRetentionFlags,
    StaticAnalyzerGroup<TAnalyzerGroupMembers...> analyzerGroup,
    StaticReloggerGroup<TReloggerGroupMembers...> reloggerGroup);
```

### Parameters

*TAnalyzerGroupMembers*\
This parameter is always deduced.

*TReloggerGroupMembers*\
This parameter is always deduced.

*inputLogFile*\
The input ETW trace that you wish to read events from.

*outputLogFile*\
The file in which to write the new events.

*numberOfAnalysisPasses*\
The number of analysis passes to run on the input trace. The trace gets passed through the provided analyzer group once per analysis pass.

*systemEventsRetentionFlags*\
A bitmask that specifies which system ETW events to keep in the relogged trace. For more information, see [RELOG_RETENTION_SYSTEM_EVENT_FLAGS](../other-types/relog-retention-system-event-flags-constants.md).

*analyzerGroup*\
The analyzer group used for the analysis phase of the relogging session. Call [MakeStaticAnalyzerGroup](make-static-analyzer-group.md) to create an analyzer group. To use a dynamic analyzer group obtained from [MakeDynamicAnalyzerGroup](make-dynamic-analyzer-group.md), first encapsulate it inside a static analyzer group by passing its address to `MakeStaticAnalyzerGroup`.

*reloggerGroup*\
The relogger group that relogs events into the trace file specified in *outputLogFile*. Call [MakeStaticReloggerGroup](make-static-relogger-group.md) to create a relogger group. To use a dynamic relogger group obtained from [MakeDynamicReloggerGroup](make-dynamic-relogger-group.md), first encapsulate it inside a static relogger group by passing its address to `MakeStaticReloggerGroup`.

### Return Value

A result code from the [RESULT_CODE](../other-types/result-code-enum.md) enum.

### Remark

The input trace is passed through the analyzer group *numberOfAnalysisPasses* times. There's no similar option for relogging passes. The trace is passed trough the relogger group only once, after all analysis passes are complete.

The relogging of system events like CPU samples from within a relogger class isn't supported. Use the *systemEventsRetentionFlags* parameter to decide which system events to keep in the output trace.

The `relog` function depends on the COM API. You must call `CoInitialize` before you call `relog`. Call `CoUninitialize` once `relog` has finished. If you call `relog` without a call to `CoInitialize` first, you'll get error code 9 (`RESULT_CODE_FAILURE_START_RELOGGER`).

::: moniker-end
