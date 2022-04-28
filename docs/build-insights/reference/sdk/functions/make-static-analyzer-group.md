---
title: "C++ Build Insights SDK MakeStaticAnalyzerGroup"
description: "The C++ Build Insights SDK MakeStaticAnalyzerGroup function reference. Use this function to create a static analyzer group for functions like Analyze or Relog."
ms.date: "04/27/2022"
ms.topic: language-reference
ms.custom: kr2b-contr-experiment
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "MakeStaticAnalyzerGroup", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# MakeStaticAnalyzerGroup

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `MakeStaticAnalyzerGroup` function creates a static analyzer group that you can pass to functions such as [`Analyze`](analyze.md) or [`Relog`](relog.md). Members of an analyzer group receive events one by one from left to right, until all events in a trace are analyzed.

## Syntax

```cpp
template <typename... TAnalyzerPtrs>
auto MakeStaticAnalyzerGroup(TAnalyzerPtrs... analyzers);
```

### Parameters

*TAnalyzerPtrs*\
This parameter is always deduced.

*analyzers*\
A parameter pack of [`IAnalyzer`](../other-types/ianalyzer-class.md) pointers included in the static analyzer group. These pointers can be raw, `std::unique_ptr`, or `std::shared_ptr`.

### Return Value

A static analyzer group. Use the `auto` keyword to capture the return value.

## Remarks

Unlike dynamic analyzer groups, the members of a static analyzer group must be known at compile time. Also, a static analyzer group contains [`IAnalyzer`](../other-types/ianalyzer-class.md) pointers that don't have polymorphic behavior. When a static analyzer group analyzes an Event Tracing for Windows (ETW) trace, calls to the `IAnalyzer` interface always resolve to the object directly pointed to by the analyzer group member. This loss of flexibility comes with a possibility of faster event processing.

If the members of an analyzer group can't be known at compile time, or if you require polymorphic behavior on your `IAnalyzer` pointers, consider using a dynamic analyzer group. To use a dynamic analyzer group, call [`MakeDynamicAnalyzerGroup`](make-static-analyzer-group.md) instead.

::: moniker-end
