---
title: "ObjOutput class"
description: "The C++ Build Insights SDK ObjOutput class reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "ObjOutput", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# ObjOutput class

::: moniker range="<=vs-2015"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and above. To see the documentation for these versions, set the Visual Studio version selector control for this article to Visual Studio 2017 or Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

The `ObjOutput` class is used with the [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md), and [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) functions. Use it to match an [OBJ_OUTPUT](../event-table.md#obj-output) event.

## Syntax

```cpp
class ObjOutput : public FileOutput
{
public:
    ObjOutput(const RawEvent& event);
};
```

## Members

Along with the inherited members from its [FileOutput](file-output.md) base class, the `ObjOutput` class contains the following members:

### Constructors

[ObjOutput](#obj-output)

## <a name="obj-output"></a> ObjOutput

```cpp
ObjOutput(const RawEvent& event);
```

### Parameters

*event*\
An [OBJ_OUTPUT](../event-table.md#obj-output) event.

::: moniker-end
