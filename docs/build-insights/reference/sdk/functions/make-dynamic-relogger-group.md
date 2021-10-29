---
title: "MakeDynamicReloggerGroup"
description: "The C++ Build Insights SDK MakeDynamicReloggerGroup function reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "MakeDynamicReloggerGroup", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# MakeDynamicReloggerGroup

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `MakeDynamicReloggerGroup` function is used to create a dynamic relogger group. Members of a relogger group receive events one by one from left to right until all events in a trace have been processed.

## Syntax

```cpp
auto MakeDynamicReloggerGroup(std::vector<IRelogger*> reloggers);

auto MakeDynamicReloggerGroup(std::vector<std::shared_ptr<IRelogger>> reloggers);

auto MakeDynamicReloggerGroup(std::vector<std::unique_ptr<IRelogger>> reloggers);
```

### Parameters

*reloggers*\
A vector of [IRelogger](../other-types/irelogger-class.md) pointers included in the dynamic relogger group. These pointers can be raw, `std::unique_ptr`, or `std::shared_ptr`. [IAnalyzer](../other-types/ianalyzer-class.md) pointers are also considered `IRelogger` pointers because of an inheritance relationship.

### Return Value

A dynamic relogger group. Use the **`auto`** keyword to capture the return value.

## Remarks

Unlike static relogger groups, the members of a dynamic relogger group don't need to be known at compile time. You can choose relogger group members at runtime based on program input, or based on other values that are unknown at compile time. Unlike static relogger groups, [`IRelogger`](../other-types/irelogger-class.md) pointers within a dynamic relogger group have polymorphic behavior, and virtual function calls are dispatched correctly. This flexibility comes at the cost of a possibly slower event processing time. When all relogger group members are known at compile time, and if you don't need polymorphic behavior, consider using a static relogger group. To use a static relogger group, call [`MakeStaticReloggerGroup`](make-static-relogger-group.md) instead.

A dynamic relogger group can be encapsulated inside a static relogger group. You pass its address to [`MakeStaticReloggerGroup`](make-static-relogger-group.md). Use this technique for passing dynamic relogger groups to functions such as [`Relog`](relog.md), which only accept static relogger groups.

::: moniker-end
