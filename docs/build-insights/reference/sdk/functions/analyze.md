---
title: "Analyze - C++ Build Insights SDK"
description: "The C++ Build Insights SDK Analyze function reference. Use the Analyze function to analyze an Event Tracing for Windows trace from MSVC while tracing a build."
ms.date: "06/16/2022"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "Analyze", "throughput analysis", "build time analysis", "vcperf.exe"]
ms.topic: reference
ms.custom: kr2b-contr-experiment
---

# Analyze function

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `Analyze` function is used to analyze an Event Tracing for Windows (ETW) trace obtained from MSVC while tracing a C++ build. The events in the ETW trace are forwarded sequentially to an analyzer group provided by the caller. This function supports multi-pass analyses that allow forwarding the event stream to the analyzer group multiple times in a row.

## Syntax

```cpp
template <typename... TAnalyzerGroupMembers>
RESULT_CODE Analyze(
    const char*                                   inputLogFile,
    unsigned                                      numberOfPasses,
    StaticAnalyzerGroup<TAnalyzerGroupMembers...> analyzerGroup);

template <typename... TAnalyzerGroupMembers>
RESULT_CODE Analyze(
    const wchar_t*                                inputLogFile,
    unsigned                                      numberOfPasses,
    StaticAnalyzerGroup<TAnalyzerGroupMembers...> analyzerGroup);
```

### Parameters

*TAnalyzerGroupMembers*\
This parameter is always deduced.

*inputLogFile*\
The input ETW trace that you wish to read events from.

*numberOfPasses*\
The number of analysis passes to run on the input trace. The trace gets passed through the provided analyzer group once per analysis pass.

*analyzerGroup*\
The analyzer group used for the analysis. Call [MakeStaticAnalyzerGroup](make-static-analyzer-group.md) to create an analyzer group. To use a dynamic analyzer group obtained from [MakeDynamicAnalyzerGroup](make-dynamic-analyzer-group.md), first encapsulate it inside a static analyzer group by passing its address to `MakeStaticAnalyzerGroup`.

### Return Value

A result code from the [RESULT_CODE](../other-types/result-code-enum.md) enum.

::: moniker-end
