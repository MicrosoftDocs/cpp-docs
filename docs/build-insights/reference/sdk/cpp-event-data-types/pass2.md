---
title: "Pass2 class"
description: "The C++ Build Insights SDK Pass2 class reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "Pass2", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# Pass2 class

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `Pass2` class is used with the [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md), and [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) functions. Use it to match a [PASS2](../event-table.md#pass2) event.

## Syntax

```cpp
class Pass2 : public LinkerPass
{
public:
    Pass2(const RawEvent& event);
};
```

## Members

Along with the inherited members from its [LinkerPass](linker-pass.md) base class, the `Pass2` class contains the following members:

### Constructors

[Pass2](#pass2)

## <a name="pass2"></a> Pass2

```cpp
Pass2(const RawEvent& event);
```

### Parameters

*event*\
A [PASS2](../event-table.md#pass2) event.

::: moniker-end
