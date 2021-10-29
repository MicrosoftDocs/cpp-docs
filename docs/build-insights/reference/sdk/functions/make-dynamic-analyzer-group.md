---
title: "MakeDynamicAnalyzerGroup"
description: "The C++ Build Insights SDK MakeDynamicAnalyzerGroup function reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "MakeDynamicAnalyzerGroup", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# MakeDynamicAnalyzerGroup

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `MakeDynamicAnalyzerGroup` function is used to create a dynamic analyzer group. Members of an analyzer group receive events one by one from left to right, until all events in a trace get analyzed.

## Syntax

```cpp
auto MakeDynamicAnalyzerGroup(std::vector<IAnalyzer*> analyzers);

auto MakeDynamicAnalyzerGroup(std::vector<std::shared_ptr<IAnalyzer>> analyzers);

auto MakeDynamicAnalyzerGroup(std::vector<std::unique_ptr<IAnalyzer>> analyzers);
```

### Parameters

*analyzers*\
A vector of [IAnalyzer](../other-types/ianalyzer-class.md) pointers included in the dynamic analyzer group. These pointers can be raw, `std::unique_ptr`, or `std::shared_ptr`.

### Return Value

A dynamic analyzer group. Use the **`auto`** keyword to capture the return value.

## Remarks

Unlike static analyzer groups, the members of a dynamic analyzer group don't need to be known at compile time. You can choose analyzer group members at runtime based on program input, or based on other values that are unknown at compile time. Unlike static analyzer groups, [`IAnalyzer`](../other-types/ianalyzer-class.md) pointers within a dynamic analyzer group have polymorphic behavior, and virtual function calls are dispatched correctly. This flexibility comes at the cost of a possibly slower event processing time. When all analyzer group members are known at compile time, and if you don't need polymorphic behavior, consider using a static analyzer group. To use a static analyzer group, call [`MakeStaticAnalyzerGroup`](make-static-analyzer-group.md) instead.

A dynamic analyzer group can be encapsulated inside a static analyzer group. It's done by passing its address to [`MakeStaticAnalyzerGroup`](make-static-analyzer-group.md). Use this technique for passing dynamic analyzer groups to functions such as [`Analyze`](analyze.md), which only accept static analyzer groups.

::: moniker-end
