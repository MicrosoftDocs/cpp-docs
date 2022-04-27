---
title: "C++ Build Insights SDK Pass1 class"
description: "The C++ Build Insights SDK Pass1 class reference. Use the Pass1 class to match a PASS1 event"
ms.date: "04/27/2022"
ms.topic: language-reference
ms.custom: kr2b-contr-experiment
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "Pass1", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# Pass1 class

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `Pass1` class is used with the [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md), and [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) functions. Use it to match a [PASS1](../event-table.md#pass1) event.

## Syntax

```cpp
class Pass1 : public LinkerPass
{
public:
    Pass1(const RawEvent& event);
};
```

## Members

Along with the inherited members from the [LinkerPass](linker-pass.md) base class, the `Pass1` class contains the following members:

### Constructors

[Pass1](#pass1)

## Pass1

```cpp
Pass1(const RawEvent& event);
```

### Parameters

*event*\
A [PASS1](../event-table.md#pass1) event.

::: moniker-end
