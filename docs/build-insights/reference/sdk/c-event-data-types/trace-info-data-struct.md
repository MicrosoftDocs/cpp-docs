---
title: "TRACE_INFO_DATA structure"
description: "The C++ Build Insights SDK TRACE_INFO_DATA structure reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "TRACE_INFO_DATA", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# TRACE_INFO_DATA structure

::: moniker range="<=vs-2015"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and above. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=vs-2017"

The `TRACE_INFO_DATA` structure describes a trace being analyzed or relogged.

## Syntax

```cpp
typedef struct TRACE_INFO_DATA_TAG
{
    unsigned long           LogicalProcessorCount;
    long long               TickFrequency;
    long long               StartTimestamp;
    long long               StopTimestamp;

} TRACE_INFO_DATA;
```

## Members

|  |  |
|--|--|
| `LogicalProcessorCount` | The number of logical processors on the machine where the trace was collected. |
| `TickFrequency` | The number of ticks per second to use when evaluating a duration measured in ticks. |
| `StartTimestamp` | This field is set to a tick value captured at the time the trace was started. |
| `StopTimestamp` | This field is set to a tick value captured at the time the trace was stopped. |

## Remarks

Subtract `StartTimestamp` from `StopTimestamp` to obtain the number of ticks elapsed during the whole trace. Use `TickFrequency` to convert the resulting value into a time unit. For an example that converts ticks to time units, see [EVENT_DATA](event-data-struct.md).

::: moniker-end
