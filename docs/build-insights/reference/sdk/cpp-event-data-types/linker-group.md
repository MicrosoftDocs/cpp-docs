---
title: "LinkerGroup class"
description: "The C++ Build Insights SDK LinkerGroup class reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "LinkerGroup", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# LinkerGroup class

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `LinkerGroup` class is used with the [MatchEventStack](../functions/match-event-stack.md) and [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) functions. Use it to match groups of [LINKER](../event-table.md#linker) events.

## Syntax

```cpp
class LinkerGroup : public EventGroup<Linker>
{
public:
    LinkerGroup(std::deque<Linker>&& group);
};
```

## Members

Along with the inherited members from its [EventGroup\<Linker\>](event-group.md) base class, the `LinkerGroup` class contains the following members:

### Constructors

[LinkerGroup](#linker-group)

## <a name="linker-group"></a> LinkerGroup

```cpp
LinkerGroup(std::deque<Linker>&& group);
```

### Parameters

*group*\
A group of [LINKER](../event-table.md#linker) events.

::: moniker-end
