---
title: "RawEvent class"
description: "The C++ Build Insights SDK RawEvent class reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "RawEvent", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# RawEvent class

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `RawEvent` class is used to represent a general event in an [EventStack](event-stack.md).

## Syntax

```cpp
class RawEvent
{
public:
    RawEvent(const EVENT_DATA& event);

    const unsigned short&        EventId() const;
    const unsigned long long&    EventInstanceId() const;
    const long long&             TickFrequency() const;
    const long long&             StartTimestamp() const;
    const long long&             StopTimestamp() const;
    const long long&             ExclusiveDurationTicks() const;
    const long long&             CPUTicks() const;
    const long long&             ExclusiveCPUTicks() const;
    const long long&             WallClockTimeResponsibilityTicks() const;
    const long long&             ExclusiveWallClockTimeResponsibilityTicks() const;
    const void*                  Data() const;
    const unsigned long&         ProcessId() const;
    const unsigned long&         ThreadId() const;
    const unsigned short&        ProcessorIndex() const;
    const char*                  EventName() const;
    const wchar_t*               EventWideName() const;

    std::chrono::nanoseconds Duration() const;
    std::chrono::nanoseconds ExclusiveDuration() const;
    std::chrono::nanoseconds CPUTime() const ;
    std::chrono::nanoseconds ExclusiveCPUTime() const;
    std::chrono::nanoseconds WallClockTimeResponsibility() const;
    std::chrono::nanoseconds ExclusiveWallClockTimeResponsibility() const;
};
```

## Remarks

Several member functions in the `RawEvent` class return a tick count. C++ Build Insights uses Windows' performance counter as a source of ticks. A tick count must be used with a tick frequency to convert it into a time unit like seconds. The `TickFrequency` member function may be called to obtain the tick frequency. See the [EVENT_DATA](../c-event-data-types/event-data-struct.md#tick-conversion-example) page for an example on how to convert ticks into a time unit.

If you don't want to convert ticks yourself, the `RawEvent` class provides member functions that return time values in nanoseconds. Use the standard C++ `chrono` library to convert nanoseconds into other time units.

## Members

### Constructor

[RawEvent](#raw-event)

### Functions

[CPUTicks](#cpu-ticks)\
[CPUTime](#cpu-time)\
[Data](#data)\
[Duration](#duration)\
[EventId](#event-id)
[EventInstanceId](#event-instance-id)
[EventName](#event-name)\
[EventWideName](#event-wide-name)\
[ExclusiveCPUTicks](#exclusive-cpu-ticks)\
[ExclusiveCPUTime](#exclusive-cpu-time)\
[ExclusiveDuration](#exclusive-duration)\
[ExclusiveDurationTicks](#exclusive-duration-ticks)\
[ExclusiveWallClockTimeResponsibility](#exclusive-wall-clock-time-responsibility)\
[ExclusiveWallClockTimeResponsibilityTicks](#exclusive-wall-clock-time-responsibility-ticks)\
[ProcessId](#process-id)\
[ProcessorIndex](#processor-index)\
[StartTimestamp](#start-timestamp)\
[StopTimestamp](#stop-timestamp)\
[ThreadId](#thread-id)\
[TickFrequency](#tick-frequency)\
[WallClockTimeResponsibility](#wall-clock-time-responsibility)\
[WallClockTimeResponsibilityTicks](#wall-clock-time-responsibility-ticks)

## <a name="raw-event"></a> RawEvent

```cpp
RawEvent(const EVENT_DATA& data);
```

### Parameters

*event*\
The event data.

## <a name="cpu-ticks"></a> CPUTicks

```cpp
const long long& CPUTicks() const;
```

### Return Value

The number of CPU ticks that occurred during this activity. A CPU tick is different from a regular tick. CPU ticks are only counted when the CPU is executing code in an activity. CPU ticks aren't counted when the thread associated with the activity is sleeping.

## <a name="cpu-time"></a> CPUTime

```cpp
std::chrono::nanoseconds CPUTime()() const;
```

### Return Value

The amount of time the CPU was executing code inside this activity. This value may be higher than the duration of the activity if child activities are executed on separate threads. The value is returned in nanoseconds.

## <a name="data"></a> Data

```cpp
const void* Data() const;
```

### Return Value

A pointer to extra data contained in this event. For more information on how to interpret this field, see [EVENT_DATA](../c-event-data-types/event-data-struct.md).

## <a name="duration"></a> Duration

```cpp
std::chrono::nanoseconds Duration() const;
```

### Return Value

The duration of the activity in nanoseconds.

## <a name="event-id"></a> EventId

```cpp
const unsigned short& EventId() const;
```

### Return Value

A number that identifies the event type. For a list of event identifiers, see [EVENT_ID](../c-event-data-types/event-id-enum.md).

## <a name="event-instance-id"></a> EventInstanceId

```cpp
const unsigned long long& EventInstanceId() const;
```

### Return Value

A number that uniquely identifies the event inside a trace. This value doesn't change when analyzing or relogging the same trace multiple times. Use this value to identify the same event in multiple analysis or relogging passes over the same trace.

## <a name="event-name"></a> EventName

```cpp
const char* EventName() const;
```

### Return Value

An ANSI string containing the name of the event type identified by [EventId](#event-id).

## <a name="event-wide-name"></a> EventWideName

```cpp
const wchar_t* EventWideName() const;
```

### Return Value

A wide string containing the name of the event type identified by [EventId](#event-id).

## <a name="exclusive-cpu-ticks"></a> ExclusiveCPUTicks

```cpp
const long long& ExclusiveCPUTicks() const;
```

### Return Value

Same as [CPUTicks](#cpu-ticks), but not including the CPU ticks that occurred in child activities.

## <a name="exclusive-cpu-time"></a> ExclusiveCPUTime

```cpp
std::chrono::nanoseconds ExclusiveCPUTime() const;
```

### Return Value

Same as [CPUTime](#cpu-time), except that the CPU time of child activities isn't included.

## <a name="exclusive-duration"></a> ExclusiveDuration

```cpp
std::chrono::nanoseconds ExclusiveDuration() const;
```

### Return Value

The duration of the activity in nanoseconds, not including the amount of time that was spent in child activities.

## <a name="exclusive-duration-ticks"></a> ExclusiveDurationTicks

```cpp
const long long& ExclusiveDurationTicks() const;
```

### Return Value

The number of ticks that occurred in this activity, excluding the number of ticks that occurred in child activities.

## <a name="exclusive-wall-clock-time-responsibility"></a> ExclusiveWallClockTimeResponsibility

```cpp
std::chrono::nanoseconds ExclusiveWallClockTimeResponsibility() const;
```

### Return Value

Same as [WallClockTimeResponsibility](#wall-clock-time-responsibility), but not including the wall-clock time responsibility of child activities.

## <a name="exclusive-wall-clock-time-responsibility-ticks"></a> ExclusiveWallClockTimeResponsibilityTicks

```cpp
const long long& ExclusiveWallClockTimeResponsibilityTicks() const;
```

### Return Value

Same as [WallClockTimeResponsibilityTicks](#wall-clock-time-responsibility-ticks), but not including the wall-clock time responsibility ticks of child activities.

## <a name="process-id"></a> ProcessId

```cpp
const unsigned long& ProcessId() const;
```

### Return Value

The identifier for the process in which the event occurred.

## <a name="processor-index"></a> ProcessorIndex

```cpp
const unsigned short& ProcessorIndex() const;
```

### Return Value

The zero-based index for the logical processor on which the event occurred.

## <a name="start-timestamp"></a> StartTimestamp

```cpp
const long long& StartTimestamp() const;
```

### Return Value

A tick value captured at the time the activity started.

## <a name="stop-timestamp"></a> StopTimestamp

```cpp
const long long& StopTimestamp() const;
```

### Return Value

A tick value captured at the time the activity stopped.

## <a name="thread-id"></a> ThreadId

```cpp
const unsigned long& ThreadId() const;
```

### Return Value

The identifier for the thread in which the event occurred.

## <a name="tick-frequency"></a> TickFrequency

```cpp
const long long& TickFrequency() const;
```

### Return Value

The number of ticks per second to use when evaluating a duration measured in ticks for this event.

## <a name="wall-clock-time-responsibility"></a> WallClockTimeResponsibility

```cpp
std::chrono::nanoseconds WallClockTimeResponsibility() const;
```

### Return Value

The wall-clock time responsibility of this activity, in nanoseconds. For more information on what wall-clock time responsibility means, see [WallClockTimeResponsibilityTicks](#wall-clock-time-responsibility-ticks).

## <a name="wall-clock-time-responsibility-ticks"></a> WallClockTimeResponsibilityTicks

```cpp
const long long& WallClockTimeResponsibilityTicks() const;
```

### Return Value

A tick count that represents this activity's contribution to overall wall-clock time. A wall-clock time responsibility tick is different from a regular tick. Wall-clock time responsibility ticks take into account parallelism between activities. Two parallel activities may have a duration of 50 ticks and the same start and stop time. In this case, both get assigned a wall-clock time responsibility of 25 ticks.

::: moniker-end
