---
title: "TemplateInstantiationGroup class"
description: "The C++ Build Insights SDK TemplateInstantiationGroup class reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "TemplateInstantiationGroup", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# TemplateInstantiationGroup class

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `TemplateInstantiationGroup` class is used with the [MatchEventStack](../functions/match-event-stack.md) and [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) functions. Use it to match groups of [TEMPLATE_INSTANTIATION](../event-table.md#template-instantiation) events.

## Syntax

```cpp
class TemplateInstantiationGroup : public EventGroup<TemplateInstantiation>
{
public:
    TemplateInstantiationGroup(std::deque<TemplateInstantiation>&& group);
};
```

## Members

Along with the inherited members from its [EventGroup\<TemplateInstantiation\>](event-group.md) base class, the `TemplateInstantiationGroup` class contains the following members:

### Constructors

[TemplateInstantiationGroup](#template-instantiation-group)

## <a name="template-instantiation-group"></a> TemplateInstantiationGroup

```cpp
TemplateInstantiationGroup(std::deque<TemplateInstantiation>&& group);
```

### Parameters

*group*\
A group of [TEMPLATE_INSTANTIATION](../event-table.md#template-instantiation) events.

::: moniker-end
