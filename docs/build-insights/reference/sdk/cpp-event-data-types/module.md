---
title: "Module class"
description: "The C++ Build Insights SDK Module class reference."
ms.date: "06/08/2021"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "Module", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# Module class

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `Module` class is used with the [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md), and [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) functions. Use it to match a [MODULE](../event-table.md#module) event.

## Syntax

```cpp
class Module : public TranslationUnitType
{
public:
    Module(const RawEvent& event);
};
```

## Members

Along with the inherited members from its [TranslationUnitType](translation-unit-type.md) base class, the `Module` class contains the following members:

### Constructors

[Module](#module)

### Functions

None

## <a name="module"></a> Module

```cpp
Module(const RawEvent& event);
```

### Parameters

*event*\
A [MODULE](../event-table.md#module) event.

::: moniker-end
