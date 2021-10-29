---
title: "TopDown class"
description: "The C++ Build Insights SDK TopDown class reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "TopDown", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# TopDown class

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `TopDown` class is used with the [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md), and [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) functions. Use it to match a [TOP_DOWN](../event-table.md#top-down) event.

## Syntax

```cpp
class TopDown : public Activity
{
public:
    TopDown(const RawEvent& event);
};
```

## Members

Along with the inherited members from its [Activity](activity.md) base class, the `TopDown` class contains the following members:

### Constructors

[TopDown](#top-down)

## <a name="top-down"></a> TopDown

```cpp
TopDown(const RawEvent& event);
```

### Parameters

*event*\
A [TOP_DOWN](../event-table.md#top-down) event.

::: moniker-end
