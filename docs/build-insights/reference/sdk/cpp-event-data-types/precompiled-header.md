---
title: "PrecompiledHeader class"
description: "The C++ Build Insights SDK PrecompiledHeader class reference."
ms.date: "06/08/2021"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "PrecompiledHeader", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# PrecompiledHeader class

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `PrecompiledHeader` class is used with the [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md), and [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) functions. Use it to match a [PRECOMPILED_HEADER](../event-table.md#precompiled-header) event.

## Syntax

```cpp
class PrecompiledHeader : public TranslationUnitType
{
public:
    PrecompiledHeader(const RawEvent& event);
};
```

## Members

Along with the inherited members from its [TranslationUnitType](translation-unit-type.md) base class, the `PrecompiledHeader` class contains the following members:

### Constructors

[PrecompiledHeader](#precompiled-header)

### Functions

None

## <a name="precompiled-header"></a> PrecompiledHeader

```cpp
PrecompiledHeader(const RawEvent& event);
```

### Parameters

*event*\
A [PRECOMPILED_HEADER](../event-table.md#precompiled-header) event.

::: moniker-end
