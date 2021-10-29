---
title: "OptRef class"
description: "The C++ Build Insights SDK OptRef class reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "OptRef", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# OptRef class

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `OptRef` class is used with the [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md), and [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) functions. Use it to match an [OPT_REF](../event-table.md#opt-ref) event.

## Syntax

```cpp
class OptRef : public Activity
{
public:
    OptRef(const RawEvent& event);
};
```

## Members

Along with the inherited members from its [Activity](activity.md) base class, the `OptRef` class contains the following members:

### Constructors

[OptRef](#opt-ref)

## <a name="opt-ref"></a> OptRef

```cpp
OptRef(const RawEvent& event);
```

### Parameters

*event*\
An [OPT_REF](../event-table.md#opt-ref) event.

::: moniker-end
