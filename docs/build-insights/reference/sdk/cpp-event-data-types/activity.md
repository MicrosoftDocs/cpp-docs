---
title: "Activity class - C++ Build Insights SDK"
description: "The C++ Build Insights SDK Activity class reference. Use the Activity class to match any activity event."
ms.date: "06/16/2022"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "Activity", "throughput analysis", "build time analysis", "vcperf.exe"]
ms.topic: reference
ms.custom: kr2b-contr-experiment
---

# Activity class

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `Activity` class is used with the [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md), and [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) functions. Use it to match any activity event. Refer to [event table](../event-table.md) to see all events that can be matched by the `Activity` class.

## Syntax

```cpp
class Activity : public Event
{
public:
    Activity(const RawEvent& event);

    const long long& StartTimestamp() const;
    const long long& StopTimestamp() const;
    const long long& ExclusiveDurationTicks() const;
    const long long& CPUTicks() const;
    const long long& ExclusiveCPUTicks() const;
    const long long& WallClockTimeResponsibilityTicks() const;
    const long long& ExclusiveWallClockTimeResponsibilityTicks() const;

    std::chrono::nanoseconds Duration() const;
    std::chrono::nanoseconds ExclusiveDuration() const;
    std::chrono::nanoseconds CPUTime() const ;
    std::chrono::nanoseconds ExclusiveCPUTime() const;
    std::chrono::nanoseconds WallClockTimeResponsibility() const;
    std::chrono::nanoseconds ExclusiveWallClockTimeResponsibility() const;
};
```

## Remarks

Several member functions in the `Activity` class return a tick count. C++ Build Insights uses Windows' performance counter as a source of ticks. A tick count must be used with a tick frequency to convert it into a time unit such as seconds. The `TickFrequency` member function, available in the [Event](event.md) base class, may be called to obtain the tick frequency. The [EVENT_DATA](../c-event-data-types/event-data-struct.md#tick-conversion-example) page shows an example of converting ticks into a time unit.

If you don't want to convert ticks to time units yourself, the `Activity` class provides member functions that return time values in nanoseconds. Use the standard C++ `chrono` library to convert them into other time units.

## Members

Along with its members inherited from the [Event](event.md) base class, the `Activity` class contains the following members:

### Constructor

[Activity](#activity)

### Functions

[CPUTicks](#cpu-ticks)\
[CPUTime](#cpu-time)\
[Duration](#duration)\
[ExclusiveCPUTicks](#exclusive-cpu-ticks)\
[ExclusiveCPUTime](#exclusive-cpu-time)\
[ExclusiveDuration](#exclusive-duration)\
[ExclusiveDurationTicks](#exclusive-duration-ticks)\
[ExclusiveWallClockTimeResponsibility](#exclusive-wall-clock-time-responsibility)\
[ExclusiveWallClockTimeResponsibilityTicks](#exclusive-wall-clock-time-responsibility-ticks)\
[StartTimestamp](#start-timestamp)\
[StopTimestamp](#stop-timestamp)\
[WallClockTimeResponsibility](#wall-clock-time-responsibility)\
[WallClockTimeResponsibilityTicks](#wall-clock-time-responsibility-ticks)

## <a name="activity"></a> Activity

```cpp
Activity(const RawEvent& event);
```

### Parameters

*event*\
Any activity event.

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

## <a name="duration"></a> Duration

```cpp
std::chrono::nanoseconds Duration() const;
```

### Return Value

The duration of the activity in nanoseconds.

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

A tick count that represents this activity's contribution to overall wall-clock time. A wall-clock time responsibility tick is different from a regular tick. Wall-clock time responsibility ticks take into account parallelism between activities. Two parallel activities may have a duration of 50 ticks, and the same start and stop time. In this case, both get assigned a wall-clock time responsibility of 25 ticks.

::: moniker-end
