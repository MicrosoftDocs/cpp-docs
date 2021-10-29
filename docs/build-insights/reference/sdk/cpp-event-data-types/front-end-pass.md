---
title: "FrontEndPass class"
description: "The C++ Build Insights SDK FrontEndPass class reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "FrontEndPass", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# FrontEndPass class

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `FrontEndPass` class is used with the [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md), and [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) functions. Use it to match a [FRONT_END_PASS](../event-table.md#front-end-pass) event.

## Syntax

```cpp
class FrontEndPass : public CompilerPass
{
public:
    FrontEndPass(const RawEvent& event);
};
```

## Members

Along with the inherited members from its [CompilerPass](compiler-pass.md) base class, the `FrontEndPass` class contains the following members:

### Constructors

[FrontEndPass](#front-end-pass)

## <a name="front-end-pass"></a> FrontEndPass

```cpp
FrontEndPass(const RawEvent& event);
```

### Parameters

*event*\
A [FRONT_END_PASS](../event-table.md#front-end-pass) event.

::: moniker-end
