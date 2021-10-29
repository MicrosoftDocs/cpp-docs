---
title: "Linker class"
description: "The C++ Build Insights SDK Linker class reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "Linker", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# Linker class

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `Linker` class is used with the [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md), and [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) functions. Use it to match a [LINKER](../event-table.md#linker) event.

## Syntax

```cpp
class Linker : public Invocation
{
public:
    Linker(const RawEvent& event);
};
```

## Members

Along with the inherited members from its [Invocation](invocation.md) base class, the `Linker` class contains the following members:

### Constructors

[Linker](#linker)

## <a name="linker"></a> Linker

```cpp
Linker(const RawEvent& event);
```

### Parameters

*event*\
A [LINKER](../event-table.md#linker) event.

::: moniker-end
