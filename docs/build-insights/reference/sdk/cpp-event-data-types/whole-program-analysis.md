---
title: "WholeProgramAnalysis class"
description: "The C++ Build Insights SDK WholeProgramAnalysis class reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "WholeProgramAnalysis", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# WholeProgramAnalysis class

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `WholeProgramAnalysis` class is used with the [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md), and [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) functions. Use it to match a [WHOLE_PROGRAM_ANALYSIS](../event-table.md#whole-program-analysis) event.

## Syntax

```cpp
class WholeProgramAnalysis : public Activity
{
public:
    WholeProgramAnalysis(const RawEvent& event);
};
```

## Members

Along with the inherited members from its [Activity](activity.md) base class, the `WholeProgramAnalysis` class contains the following members:

### Constructors

[WholeProgramAnalysis](#whole-program-analysis)

## <a name="whole-program-analysis"></a> WholeProgramAnalysis

```cpp
WholeProgramAnalysis(const RawEvent& event);
```

### Parameters

*event*\
A [WHOLE_PROGRAM_ANALYSIS](../event-table.md#whole-program-analysis) event.

::: moniker-end
