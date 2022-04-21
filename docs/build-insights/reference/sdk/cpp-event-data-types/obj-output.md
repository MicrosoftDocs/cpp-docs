---
title: "ObjOutput class"
description: "The C++ Build Insights SDK ObjOutput class reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "ObjOutput", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# ObjOutput class

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

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
