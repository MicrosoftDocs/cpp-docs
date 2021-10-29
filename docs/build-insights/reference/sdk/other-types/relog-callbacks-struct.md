---
title: "RELOG_CALLBACKS structure"
description: "The C++ Build Insights SDK RELOG_CALLBACKS structure reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "RELOG_CALLBACKS", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# RELOG_CALLBACKS structure

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `RELOG_CALLBACKS` structure is used when initializing a [RELOG_DESCRIPTOR](relog-descriptor-struct.md) object. It specifies which functions to call during the relogging of an Event Tracing for Windows (ETW) trace.

## Syntax

```cpp
typedef struct RELOG_CALLBACKS_TAG
{
    OnRelogEventFunc        OnStartActivity;
    OnRelogEventFunc        OnStopActivity;
    OnRelogEventFunc        OnSimpleEvent;
    OnTraceInfoFunc         OnTraceInfo;
    OnBeginEndPassFunc      OnBeginRelogging;
    OnBeginEndPassFunc      OnEndRelogging;
    OnBeginEndPassFunc      OnBeginReloggingPass;
    OnBeginEndPassFunc      OnEndReloggingPass;
} RELOG_CALLBACKS;
```

## Members

| Name | Description |
|--|--|
| `OnStartActivity` | Called to process an activity start event. |
| `OnStopActivity` | Called to process an activity stop event. |
| `OnSimpleEvent` | Called to process a simple event. |
| `OnTraceInfo` | Called once at the beginning of the relogging pass, after `OnBeginReloggingPass` has been called. |
| `OnBeginRelogging` | Called when beginning a relogging session, before the relogging pass has begun. |
| `OnEndRelogging` | Called when ending a relogging session, after the relogging pass has ended. |
| `OnBeginReloggingPass` | Called when beginning the relogging pass, before processing any event. |
| `OnEndReloggingPass` | Called when ending the relogging pass, after processing all events. |

## Remarks

All members of the `RELOG_CALLBACKS` structure must point to a valid function. For more information on the accepted function signatures, see [OnRelogEventFunc](on-relog-event-func-typedef.md), [OnTraceInfoFunc](on-trace-info-func-typedef.md), and [OnBeginEndPassFunc](on-begin-end-pass-func-typedef.md).

::: moniker-end
