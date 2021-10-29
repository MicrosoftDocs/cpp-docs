---
title: "TraceInfo class"
description: "The C++ Build Insights SDK TraceInfo class reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "TraceInfo", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# TraceInfo class

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `TraceInfo` class is used to access useful properties about a trace being analyzed or relogged.

## Syntax

```cpp
class TraceInfo
{
public:
    TraceInfo(const TRACE_INFO_DATA& data);

    const unsigned long& LogicalProcessorCount() const;

    const long long& TickFrequency() const;
    const long long& StartTimestamp() const;
    const long long& StopTimestamp() const;

    std::chrono::nanoseconds Duration() const;
};
```

## Remarks

Subtract the `StartTimestamp` from `StopTimestamp` to obtain the number of ticks elapsed during the whole trace. Use `TickFrequency` to convert the resulting value into a time unit. For an example of converting ticks to time, see [EVENT_DATA](../c-event-data-types/event-data-struct.md).

If you don't want to convert ticks yourself, the `TraceInfo` class provides a member function that returns the trace duration in nanoseconds. Use the standard C++ `chrono` library to convert this value into other time units.

## Members

### Constructors

[TraceInfo](#trace-info)

### Functions

[Duration](#duration)
[LogicalProcessorCount](#logical-processor-count)
[StartTimestamp](#start-timestamp)
[StopTimestamp](#stop-timestamp)
[TickFrequency](#tick-frequency)

## <a name="duration"></a> Duration

```cpp
std::chrono::nanoseconds Duration() const;
```

### Return Value

The duration of the activity in nanoseconds.

## <a name="logical-processor-count"></a> LogicalProcessorCount

```cpp
const unsigned long& LogicalProcessorCount() const;
```

### Return Value

The number of logical processors on the machine where the trace was collected.

## <a name="start-timestamp"></a> StartTimestamp

```cpp
const long long& StartTimestamp() const;
```

### Return Value

A tick value captured at the time the trace was started.

## <a name="stop-timestamp"></a> StopTimestamp

```cpp
const long long& StopTimestamp() const;
```

### Return Value

A tick value captured at the time the trace was stopped.

## <a name="tick-frequency"></a> TickFrequency

```cpp
const long long& TickFrequency() const;
```

### Return Value

The number of ticks per second to use when evaluating a duration measured in ticks.

## <a name="trace-info"></a> TraceInfo

```cpp
TraceInfo(const TRACE_INFO_DATA& data);
```

### Parameters

*data*\
The data containing the information about the trace.

::: moniker-end
