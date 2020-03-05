---
title: "ExpOutput class"
description: "The C++ Build Insights SDK ExpOutput class reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "ExpOutput", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# ExpOutput class

::: moniker range="<=vs-2015"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and above. To see the documentation for these versions, set the Visual Studio version selector control for this article to Visual Studio 2017 or Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

The `ExpOutput` class is used with the [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md), and [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) functions. Use it to match an [EXP_OUTPUT](../event-table.md#exp-output) event.

## Syntax

```cpp
class ExpOutput : public FileOutput
{
public:
    ExpOutput(const RawEvent& event);
};
```

## Members

Along with the inherited members from its [FileOutput](file-output.md) base class, the `ExpOutput` class contains the following members:

### Constructors

[ExpOutput](#exp-output)

## <a name="exp-output"></a> ExpOutput

```cpp
ExpOutput(const RawEvent& event);
```

### Parameters

*event*\
An [EXP_OUTPUT](../event-table.md#exp-output) event.

::: moniker-end
