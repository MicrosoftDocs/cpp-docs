---
title: "OnRelogEventFunc typedef"
description: "The C++ Build Insights SDK OnRelogEventFunc typedef reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "OnRelogEventFunc", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# OnRelogEventFunc typedef

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `OnRelogEventFunc` typedef is one of the function signatures used in the [RELOG_CALLBACKS](relog-callbacks-struct.md) structure.

## Syntax

```cpp
typedef enum CALLBACK_CODE (BUILD_INSIGHTS_API *OnRelogEventFunc)(
    const EVENT_COLLECTION_DATA*    eventStack,
    const void*                     relogSession,
    void*                           callbackContext);
```

### Parameters

*eventStack*\
The event stack for the current event. For more information on event stacks, see [Events](../event-table.md).

*relogSession*\
The relogging session pointer to use when calling the [InjectEvent](../functions/inject-event.md).

*callbackContext*\
The context value that was set for this callback in [RELOG_DESCRIPTOR](analysis-descriptor-struct.md).

### Return Value

A [CALLBACK_CODE](callback-code-enum.md) value that controls what should happen next.

::: moniker-end
