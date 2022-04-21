---
title: "OptICF class"
description: "The C++ Build Insights SDK OptICF class reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "OptICF", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# OptICF class

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `OptICF` class is used with the [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md), and [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) functions. Use it to match an [OPT_ICF](../event-table.md#opt-icf) event.

## Syntax

```cpp
class OptICF : public Activity
{
public:
    OptICF(const RawEvent& event);
};
```

## Members

Along with the inherited members from its [Activity](activity.md) base class, the `OptICF` class contains the following members:

### Constructors

[OptICF](#opt-icf)

## <a name="opt-icf"></a> OptICF

```cpp
OptICF(const RawEvent& event);
```

### Parameters

*event*\
An [OPT_ICF](../event-table.md#opt-icf) event.

::: moniker-end
