---
title: "ImpLibOutput class"
description: "The C++ Build Insights SDK ImpLibOutput class reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "ImpLibOutput", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# ImpLibOutput class

::: moniker range="<=vs-2015"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and above. To see the documentation for these versions, set the Visual Studio version selector control for this article to Visual Studio 2017 or Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

The `ImpLibOutput` class is used with the [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md), and [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) functions. Use it to match an [IMP_LIB_OUTPUT](../event-table.md#imp-lib-output) event.

## Syntax

```cpp
class ImpLibOutput : public FileOutput
{
public:
    ImpLibOutput(const RawEvent& event);
};
```

## Members

Along with the inherited members from its [FileOutput](file-output.md) base class, the `ImpLibOutput` class contains the following members:

### Constructors

[ImpLibOutput](#imp-lib-output)

## <a name="imp-lib-output"></a> ImpLibOutput

```cpp
ImpLibOutput(const RawEvent& event);
```

### Parameters

*event*\
An [IMP_LIB_OUTPUT](../event-table.md#imp-lib-output) event.

::: moniker-end
