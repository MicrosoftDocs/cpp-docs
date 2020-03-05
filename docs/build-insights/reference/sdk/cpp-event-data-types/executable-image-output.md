---
title: "ExecutableImageOutput class"
description: "The C++ Build Insights SDK ExecutableImageOutput class reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "ExecutableImageOutput", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# ExecutableImageOutput class

::: moniker range="<=vs-2015"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and above. To see the documentation for these versions, set the Visual Studio version selector control for this article to Visual Studio 2017 or Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

The `ExecutableImageOutput` class is used with the [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md), and [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) functions. Use it to match an [EXECUTABLE_IMAGE_OUTPUT](../event-table.md#executable-image-output) event.

## Syntax

```cpp
class ExecutableImageOutput : public FileOutput
{
public:
    ExecutableImageOutput(const RawEvent& event);
};
```

## Members

Along with the inherited members from its [FileOutput](file-output.md) base class, the `ExecutableImageOutput` class contains the following members:

### Constructors

[ExecutableImageOutput](#executable-image-output)

## <a name="executable-image-output"></a> ExecutableImageOutput

```cpp
ExecutableImageOutput(const RawEvent& event);
```

### Parameters

*event*\
An [EXECUTABLE_IMAGE_OUTPUT](../event-table.md#executable-image-output) event.

::: moniker-end
