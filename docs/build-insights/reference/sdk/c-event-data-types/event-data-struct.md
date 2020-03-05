---
title: "EVENT_DATA structure"
description: "The C++ Build Insights SDK EVENT_DATA structure reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "EVENT_DATA", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# EVENT_DATA structure

::: moniker range="<=vs-2015"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and above. To see the documentation for these versions, set the Visual Studio version selector control for this article to Visual Studio 2017 or Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

The `EVENT_DATA` structure describes an event received from an analysis or relogging session. These sessions are started by calling the [Analyze](../functions/analyze.md), [AnalyzeA](../functions/analyze-a.md), [AnalyzeW](../functions/analyze-w.md), [Relog](../functions/relog.md), [RelogA](../functions/relog-a.md), or [RelogW](../functions/relog-w.md) functions.

## Syntax

```cpp
typedef struct EVENT_DATA_TAG
{
    unsigned short          EventId;
    unsigned long long      EventInstanceId;

    long long               TickFrequency;
    long long               StartTimestamp;
    long long               StopTimestamp;
    long long               ExclusiveDurationTicks;
    long long               CPUTicks;
    long long               ExclusiveCPUTicks;
    long long               WallClockTimeResponsibilityTicks;
    long long               ExclusiveWallClockTimeResponsibilityTicks;

    const void*             Data;

    unsigned long           ProcessId;
    unsigned long           ThreadId;
    unsigned short          ProcessorIndex;

    const char*             EventName;
    const wchar_t*          EventWideName;

} EVENT_DATA;
```

## Members

|  |  |
|--|--|
| `EventId` | A number that identifies the event. For a list of event identifiers, see [EVENT_ID](event-id-enum.md). |
| `EventInstanceId` | A number that uniquely identifies the current event inside a trace. This value doesn't change when analyzing or relogging the same trace multiple times. Use this field to identify the same event in multiple analysis or relogging passes over the same trace. |
| `TickFrequency` | The number of ticks per second to use when evaluating a duration measured in ticks. |
| `StartTimestamp` | When the event is an *Activity*, this field is set to a tick value captured at the time the activity started. If this event is a *Simple Event*, this field is set to a tick value captured at the time the event occurred. |
| `StopTimestamp` | When the event is an *Activity*, this field is set to a tick value captured at the time the activity stopped. If the stop event hasn't yet been received for this activity, this field is set to zero. If this event is a *Simple Event*, this field is set to zero. |
| `ExclusiveDurationTicks` | If this event is an *Activity*, this field is set to the number of ticks that occurred directly in this activity. The number of ticks that occurred in a child activity are excluded. This field is set to zero for *Simple Events*. |
| `CPUTicks` | If this event is an *Activity*, this field is set to the number of CPU ticks that occurred during this activity. A CPU tick is different from a regular tick. CPU ticks are only counted when the CPU is executing code in an activity. CPU ticks aren't counted when the thread associated with the activity is sleeping. This field is set to zero for *Simple Events*. |
| `ExclusiveCPUTicks` | This field has the same meaning as `CPUTicks`, except that it doesn't include CPU ticks that occurred in children activities. This field is set to zero for *Simple Events*. |
| `WallClockTimeResponsibilityTicks` | If this event is an *Activity*, this field is set to a tick count that represents this activity's contribution to overall wall-clock time. A wall-clock time responsibility tick is different from a regular tick. Wall-clock time responsibility ticks take into account parallelism between activities. For example, two parallel activities may have a duration of 50 ticks and the same start and stop time. In this case, both will be assigned a wall-clock time responsibility of 25 ticks. This field is set to zero for *Simple Events*. |
| `ExclusiveWallClockTimeResponsibilityTicks` | This field has the same meaning as `WallClockTimeResponsibilityTicks`, except that it doesn't include the wall-clock time responsibility ticks of children activities. This field is set to zero for *Simple Events*. |
| `Data` | Points to additional data stored in the event. The type of data pointed to is different, depending on the `EventId` field. |
| `ProcessId` | The identifier for the process in which the event occurred. |
| `ThreadId` | The identifier for the thread in which the event occurred. |
| `ProcessorIndex` | The zero-indexed CPU number on which the event occurred. |
| `EventName` | An ANSI string containing the name of the entity identified by `EventId`. |
| `EventWideName` | A wide string containing the name of the entity identified by `EventId`. |

## Remarks

Many fields in `EVENT_DATA` contain tick counts. C++ Build Insights uses Window's performance counter as a source of ticks. A tick count must be used with the `TickFrequency` field to convert it into an appropriate time unit such as seconds. See the example below for performing this conversion. `EVENT_DATA` doesn't contain a field for the regular tick count of an activity. To obtain this value, subtract `StartTimestamp` from `StopTimestamp`. `EVENT_DATA` is a structure that's meant to be used by C API users. For C++ API users, classes like [Event](../cpp-event-data-types/event.md) do time conversions automatically.

The value of the `EVENT_DATA` `Data` field depends on the value of its `EventId` field. The value of `Data` is described in the table below. Some entity identifiers may be missing from the table below. In this case, the `Data` field is set to `nullptr` or zero.

| `EventId` value | Type pointed to by `Data` |
|--|--|
| `EVENT_ID_BACK_END_PASS` | [CL_PASS_DATA](cl-pass-data-struct.md) |
| `EVENT_ID_COMMAND_LINE` | `const wchar_t` |
| `EVENT_ID_COMPILER` | [INVOCATION_DATA](invocation-data-struct.md) |
| `EVENT_ID_ENVIRONMENT_VARIABLE` | [NAME_VALUE_PAIR_DATA](name-value-pair-data-struct.md) |
| `EVENT_ID_EXECUTABLE_IMAGE_OUTPUT` | [FILE_DATA](file-data-struct.md) |
| `EVENT_ID_EXP_OUTPUT` | [FILE_DATA](file-data-struct.md) |
| `EVENT_ID_FILE_INPUT` | [FILE_DATA](file-data-struct.md) |
| `EVENT_ID_FORCE_INLINE` | [FUNCTION_FORCE_INLINEE_DATA](function-force-inlinee-data-struct.md) |
| `EVENT_ID_FRONT_END_FILE` | [FRONT_END_FILE_DATA](front-end-file-data-struct.md) |
| `EVENT_ID_FRONT_END_PASS` | [CL_PASS_DATA](cl-pass-data-struct.md) |
| `EVENT_ID_FUNCTION` | [FUNCTION_DATA](function-data-struct.md) |
| `EVENT_ID_IMP_LIB_OUTPUT` | [FILE_DATA](file-data-struct.md) |
| `EVENT_ID_LIB_OUTPUT` | [FILE_DATA](file-data-struct.md) |
| `EVENT_ID_LINKER` | [INVOCATION_DATA](invocation-data-struct.md) |
| `EVENT_ID_OBJ_OUTPUT` | [FILE_DATA](file-data-struct.md) |
| `EVENT_ID_SYMBOL_NAME` | [SYMBOL_NAME_DATA](symbol-name-data-struct.md) |
| `EVENT_ID_TEMPLATE_INSTANTIATION` | [TEMPLATE_INSTANTIATION_DATA](template-instantiation-data-struct.md) |

## Tick conversion example

```cpp
//
// We have the elapsed number of ticks, along with the
// number of ticks per second. We use these values
// to convert to the number of elapsed microseconds.
// To guard against loss-of-precision, we convert
// to microseconds *before* dividing by ticks-per-second.
//

long long ConvertDurationToMicroseconds(const sruct EVENT_DATA& eventData)
{
    long long duration = eventData.StopTimestamp - eventData.StartTimestamp;
    long long duration *= 1000000;
    return duration / eventData.TickFrequency;
}
```

::: moniker-end
