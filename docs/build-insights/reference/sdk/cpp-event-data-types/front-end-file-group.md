---
title: "FrontEndFileGroup class"
description: "The C++ Build Insights SDK FrontEndFileGroup class reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "FrontEndFileGroup", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# FrontEndFileGroup class

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `FrontEndFileGroup` class is used with the [MatchEventStack](../functions/match-event-stack.md) and [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) functions. Use it to match groups of [FRONT_END_FILE](../event-table.md#front-end-file) events.

## Syntax

```cpp
class FrontEndFileGroup : public EventGroup<FrontEndFile>
{
public:
    FrontEndFileGroup(std::deque<FrontEndFile>&& group);
};
```

## Members

Along with the inherited members from its [EventGroup\<FrontEndFile\>](event-group.md) base class, the `FrontEndFileGroup` class contains the following members:

### Constructors

[FrontEndFileGroup](#front-end-file-group)

## <a name="front-end-file-group"></a> FrontEndFileGroup

```cpp
FrontEndFileGroup(std::deque<FrontEndFile>&& group);
```

### Parameters

*group*\
A group of [FRONT_END_FILE](../event-table.md#front-end-file) events.

::: moniker-end
