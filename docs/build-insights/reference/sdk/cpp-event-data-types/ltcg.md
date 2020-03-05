---
title: "LTCG class"
description: "The C++ Build Insights SDK LTCG class reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "LTCG", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# LTCG class

::: moniker range="<=vs-2015"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and above. To see the documentation for these versions, set the Visual Studio version selector control for this article to Visual Studio 2017 or Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

The `LTCG` class is used with the [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md), and [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) functions. Use it to match a [LTCG](../event-table.md#ltcg) event.

## Syntax

```cpp
class LTCG : public Activity
{
public:
    LTCG(const RawEvent& event);
};
```

## Members

Along with the inherited members from its [Activity](activity.md) base class, the `LTCG` class contains the following members:

### Constructors

[LTCG](#ltcg)

## <a name="ltcg"></a> LTCG

```cpp
LTCG(const RawEvent& event);
```

### Parameters

*event*\
A [LTCG](../event-table.md#ltcg) event.

::: moniker-end
