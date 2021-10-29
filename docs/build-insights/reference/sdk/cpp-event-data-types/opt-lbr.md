---
title: "OptLBR class"
description: "The C++ Build Insights SDK OptLBR class reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "OptLBR", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# OptLBR class

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `OptLBR` class is used with the [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md), and [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) functions. Use it to match an [OPT_LBR](../event-table.md#opt-lbr) event.

## Syntax

```cpp
class OptLBR : public Activity
{
public:
    OptLBR(const RawEvent& event);
};
```

## Members

Along with the inherited members from its [Activity](activity.md) base class, the `OptLBR` class contains the following members:

### Constructors

[OptLBR](#opt-lbr)

## <a name="opt-lbr"></a> OptLBR

```cpp
OptLBR(const RawEvent& event);
```

### Parameters

*event*\
An [OPT_LBR](../event-table.md#opt-lbr) event.

::: moniker-end
