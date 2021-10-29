---
title: "SimpleEvent class"
description: "The C++ Build Insights SDK SimpleEvent class reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "SimpleEvent", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# SimpleEvent class

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `SimpleEvent` class is used with the [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md), and [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) functions. Use it to match any simple event. Refer to the [event table](../event-table.md) to see all events that can be matched by the `SimpleEvent` class.

## Syntax

```cpp
class SimpleEvent : public Event
{
public:
    SimpleEvent(const RawEvent& event);
};
```

## Members

Along with the inherited members from its [Event](event.md) base class, the `SimpleEvent` class contains the following members:

### Constructors

[SimpleEvent](#simple-event)

## <a name="simple-event"></a> SimpleEvent

```cpp
SimpleEvent(const RawEvent& event);
```

### Parameters

*event*\
Any simple event.

::: moniker-end
