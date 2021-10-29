---
title: "HeaderUnit class"
description: "The C++ Build Insights SDK HeaderUnit class reference."
ms.date: "06/08/2021"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "HeaderUnit", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# HeaderUnit class

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `HeaderUnit` class is used with the [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md), and [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) functions. Use it to match a [HEADER_UNIT](../event-table.md#header-unit) event.

## Syntax

```cpp
class HeaderUnit : public TranslationUnitType
{
public:
    HeaderUnit(const RawEvent& event);
};
```

## Members

Along with the inherited members from its [TranslationUnitType](translation-unit-type.md) base class, the `HeaderUnit` class contains the following members:

### Constructors

[HeaderUnit](#header-unit)

### Functions

None

## <a name="header-unit"></a> HeaderUnit

```cpp
HeaderUnit(const RawEvent& event);
```

### Parameters

*event*\
A [HEADER_UNIT](../event-table.md#header-unit) event.

::: moniker-end
