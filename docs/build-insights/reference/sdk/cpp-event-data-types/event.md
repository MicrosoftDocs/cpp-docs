---
title: "Event class"
description: "The C++ Build Insights SDK Event class reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "Event", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# Event class

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `Event` class is used with the [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md), and [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) functions. Use it to match any event.

## Syntax

```cpp
class Event
{
public:
    Event(const RawEvent& event);

    const unsigned short&        EventId() const;
    const unsigned long long&    EventInstanceId() const;
    const long long&             TickFrequency() const;
    const long long&             Timestamp() const;
    const unsigned long&         ProcessId() const;
    const unsigned long&         ThreadId() const;
    const unsigned short&        ProcessorIndex() const;
    const char*                  EventName() const;
    const wchar_t*               EventWideName() const;
};
```

## Members

### Constructors

[Event](#entity)

### Functions

[Data](#data)
[EventId](#event-id)\
[EventInstanceId](#event-instance-id)\
[EventName](#event-name)\
[EventWideName](#event-wide-name)\
[ProcessId](#process-id)\
[ProcessorIndex](#processor-index)\
[ThreadId](#thread-id)\
[TickFrequency](#tick-frequency)\
[Timestamp](#timestamp)

## <a name="entity"></a> Event

```cpp
Event(const RawEvent& event);
```

### Parameters

*event*\
Any event.

## <a name="data"></a> Data

```cpp
const void* Data() const;
```

### Return Value

A pointer to extra data contained in this event. For more information on how to interpret this field, see [EVENT_DATA](../c-event-data-types/event-data-struct.md).

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

A wide string containing the name of the event identified by [EventId](#event-id).

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

## <a name="timestamp"></a> Timestamp

```cpp
const long long& Timestamp() const;
```

### Return Value

If the event is an activity, this function returns a tick value captured at the time the activity started. For a simple event, this function returns a tick value captured at the time the event occurred.

::: moniker-end
