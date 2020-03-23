---
title: "BottomUp class"
description: "The C++ Build Insights SDK BottomUp class reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "BottomUp", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# BottomUp class

::: moniker range="<=vs-2015"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and above. To see the documentation for these versions, set the Visual Studio version selector control for this article to Visual Studio 2017 or Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

The `BottomUp` class is used with the [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md), and [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) functions. Use it to match a [BOTTOM_UP](../event-table.md#bottom-up) event.

## Syntax

```cpp
class BottomUp : public Activity
{
public:
    BottomUp(const RawEvent& event);
};
```

## Members

Along with the inherited members from its [Activity](activity.md) base class, the `BottomUp` class contains the following members:

### Constructors

[BottomUp](#bottom-up)

## <a name="bottom-up"></a> BottomUp

```cpp
BottomUp(const RawEvent& event);
```

### Parameters

*event*\
A [BOTTOM_UP](../event-table.md#bottom-up) event.

::: moniker-end
