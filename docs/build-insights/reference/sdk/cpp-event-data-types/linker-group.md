---
title: "LinkerGroup class"
description: "The C++ Build Insights SDK LinkerGroup class reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "LinkerGroup", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# LinkerGroup class

::: moniker range="<=vs-2015"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and above. To see the documentation for these versions, set the Visual Studio version selector control for this article to Visual Studio 2017 or Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

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
