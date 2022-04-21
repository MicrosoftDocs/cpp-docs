---
title: "InvocationGroup class"
description: "The C++ Build Insights SDK InvocationGroup class reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "InvocationGroup", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# InvocationGroup class

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `InvocationGroup` class is used with the [MatchEventStack](../functions/match-event-stack.md) and [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) functions. Use it to match groups containing a mix of [COMPILER](../event-table.md#compiler) and [LINKER](../event-table.md#linker) events.

## Syntax

```cpp
class InvocationGroup : public EventGroup<Invocation>
{
public:
    InvocationGroup(std::deque<Invocation>&& group);
};
```

## Members

Along with the inherited members from its [EventGroup\<Invocation\>](event-group.md) base class, the `InvocationGroup` class contains the following members:

### Constructors

[InvocationGroup](#invocation-group)

## <a name="invocation-group"></a> InvocationGroup

```cpp
InvocationGroup(std::deque<Invocation>&& group);
```

### Parameters

*group*\
A group containing a mix of [COMPILER](../event-table.md#compiler) and [LINKER](../event-table.md#linker) events.

::: moniker-end
