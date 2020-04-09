---
title: "CodeGeneration class"
description: "The C++ Build Insights SDK CodeGeneration class reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "CodeGeneration", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# CodeGeneration class

::: moniker range="<=vs-2015"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and above. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=vs-2017"

The `CodeGeneration` class is used with the [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md), and [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) functions. Use it to match a [CODE_GENERATION](../event-table.md#code-generation) event.

## Syntax

```cpp
class CodeGeneration : public Activity
{
public:
    CodeGeneration(const RawEvent& event);
};
```

## Members

Along with the inherited members from its [Activity](activity.md) base class, the `CodeGeneration` class contains the following members:

### Constructors

[CodeGeneration](#code-generation)

## <a name="code-generation"></a> CodeGeneration

```cpp
CodeGeneration(const RawEvent& event);
```

### Parameters

*event*\
A [CODE_GENERATION](../event-table.md#code-generation) event.

::: moniker-end
