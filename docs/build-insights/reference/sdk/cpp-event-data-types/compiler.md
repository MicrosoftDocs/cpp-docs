---
title: "Compiler class"
description: "The C++ Build Insights SDK Compiler class reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "Compiler", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# Compiler class

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `Compiler` class is used with the [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md), and [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) functions. Use it to match a [COMPILER](../event-table.md#compiler) event.

## Syntax

```cpp
class Compiler : public Invocation
{
public:
    Compiler(const RawEvent& event);
};
```

## Members

Along with the inherited members from its [Invocation](invocation.md) base class, the `Compiler` class contains the following members:

### Constructors

[Compiler](#compiler)

## <a name="compiler"></a> Compiler

```cpp
Compiler(const RawEvent& event);
```

### Parameters

*event*\
A [COMPILER](../event-table.md#compiler) event.

::: moniker-end
