---
title: "MakeStaticReloggerGroup"
description: "The C++ Build Insights SDK MakeStaticReloggerGroup function reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "MakeStaticReloggerGroup", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# MakeStaticReloggerGroup

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `MakeStaticReloggerGroup` function is used to create a static relogger group that can be passed to functions such as [Relog](relog.md). Members of a relogger group receive events one by one from left to right until all events in a trace have been processed.

## Syntax

```cpp
template <typename... TReloggerPtrs>
auto MakeStaticReloggerGroup(TReloggerPtrs... reloggers);
```

### Parameters

*TReloggerPtrs*\
This parameter is always deduced.

*reloggers*\
A parameter pack of [`IRelogger`](../other-types/irelogger-class.md) pointers that's included in the static relogger group. These pointers can be raw, `std::unique_ptr`, or `std::shared_ptr`. [`IAnalyzer`](../other-types/ianalyzer-class.md) pointers are also considered `IRelogger` pointers because of an inheritance relationship.

### Return Value

A static relogger group. Use the **`auto`** keyword to capture the return value.

## Remarks

Unlike dynamic relogger groups, the members of a static relogger group must be known at compile time. Additionally, a static relogger group contains [`IRelogger`](../other-types/irelogger-class.md) pointers that don't have polymorphic behavior. When using a static relogger group to analyze an Event Tracing for Windows (ETW) trace, calls to the `IRelogger` interface always resolve to the object directly pointed to by the relogger group member. This loss of flexibility comes with a possibility of faster event processing times. If the members of a relogger group can't be known at compile time, or if you require polymorphic behavior on your `IRelogger` pointers, consider using a dynamic relogger group. You can use a dynamic relogger group by calling [`MakeDynamicReloggerGroup`](make-dynamic-relogger-group.md) instead.

::: moniker-end
