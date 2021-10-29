---
title: "Thread class"
description: "The C++ Build Insights SDK Thread class reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "Thread", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# Thread class

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `Thread` class is used with the [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md), and [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) functions. Use it to match a [THREAD](../event-table.md#thread) event.

## Syntax

```cpp
class Thread : public Activity
{
public:
    Thread(const RawEvent& event);
};
```

## Members

Along with the inherited members from its [Activity](activity.md) base class, the `Thread` class contains the following members:

### Constructors

[Thread](#thread)

## <a name="thread"></a> Thread

```cpp
Thread(const RawEvent& event);
```

### Parameters

*event*\
A [THREAD](../event-table.md#thread) event.

::: moniker-end
