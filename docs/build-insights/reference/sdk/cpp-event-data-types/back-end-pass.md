---
title: "BackEndPass class"
description: "The C++ Build Insights SDK BackEndPass class reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "BackEndPass", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# BackEndPass class

::: moniker range="<=vs-2015"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and above. To see the documentation for these versions, set the Visual Studio version selector control for this article to Visual Studio 2017 or Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

The `BackEndPass` class is used with the [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md), and [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) functions. Use it to match a [BACK_END_PASS](../event-table.md#back-end-pass) event.

## Syntax

```cpp
class BackEndPass : public CompilerPass
{
public:
    BackEndPass(const RawEvent& event);
};
```

## Members

Along with the inherited members from its [CompilerPass](compiler-pass.md) base class, the `BackEndPass` class contains the following members:

### Constructors

[BackEndPass](#back-end-pass)

## <a name="back-end-pass"></a> BackEndPass

```cpp
BackEndPass(const RawEvent& event);
```

### Parameters

*event*\
A [BACK_END_PASS](../event-table.md#back-end-pass) event.

::: moniker-end
