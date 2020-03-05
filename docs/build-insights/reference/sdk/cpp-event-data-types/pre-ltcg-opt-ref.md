---
title: "PreLTCGOptRef class"
description: "The C++ Build Insights SDK PreLTCGOptRef class reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "PreLTCGOptRef", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# PreLTCGOptRef class

::: moniker range="<=vs-2015"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and above. To see the documentation for these versions, set the Visual Studio version selector control for this article to Visual Studio 2017 or Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

The `PreLTCGOptRef` class is used with the [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md), and [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) functions. Use it to match a [PRE_LTCG_OPT_REF](../event-table.md#pre-ltcg-opt-ref) event.

## Syntax

```cpp
class PreLTCGOptRef : public Activity
{
public:
    PreLTCGOptRef(const RawEvent& event);
};
```

## Members

Along with the inherited members from its [Activity](activity.md) base class, the `PreLTCGOptRef` class contains the following members:

### Constructors

[PreLTCGOptRef](#pre-ltcg-opt-ref)

## <a name="pre-ltcg-opt-ref"></a> PreLTCGOptRef

```cpp
PreLTCGOptRef(const RawEvent& event);
```

### Parameters

*event*\
A [PRE_LTCG_OPT_REF](../event-table.md#pre-ltcg-opt-ref) event.

::: moniker-end
