---
title: "IRelogger class"
description: "The C++ Build Insights SDK IRelogger class reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "IRelogger", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# IRelogger class

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `IRelogger` class provides an interface for relogging an Event Tracing for Windows (ETW) trace. It's used with the [MakeDynamicReloggerGroup](../functions/make-dynamic-relogger-group.md) and [MakeStaticReloggerGroup](../functions/make-static-analyzer-group.md) functions. Use `IRelogger` as a base class to create your own relogger that can be part of a relogger group.

## Syntax

```cpp
class IRelogger
{
public:
    virtual AnalysisControl OnStartActivity(const EventStack& eventStack,
        const void* relogSession);

    virtual AnalysisControl OnStopActivity(const EventStack& eventStack,
        const void* relogSession);

    virtual AnalysisControl OnSimpleEvent(const EventStack& eventStack,
        const void* relogSession);

    virtual AnalysisControl OnTraceInfo(const TraceInfo& traceInfo);
    virtual AnalysisControl OnBeginRelogging();
    virtual AnalysisControl OnEndRelogging();
    virtual AnalysisControl OnBeginReloggingPass();
    virtual AnalysisControl OnEndReloggingPass() ;

    virtual ~IRelogger();
};
```

## Remarks

The default return value for all functions that aren't overridden is `AnalysisControl::CONTINUE`. For more information, see [AnalysisControl](analysis-control-enum-class.md).

## Members

### Destructor

[~IRelogger](#irelogger-destructor)

### Functions

[OnBeginRelogging](#on-begin-relogging)\
[OnBeginReloggingPass](#on-begin-relogging-pass)\
[OnEndRelogging](#on-end-relogging)\
[OnEndReloggingPass](#on-end-relogging-pass)\
[OnSimpleEvent](#on-simple-event)\
[OnStartActivity](#on-start-activity)\
[OnStopActivity](#on-stop-activity)\
[OnTraceInfo](#on-trace-info)

## <a name="irelogger-destructor"></a> ~IRelogger

Destroys the IRelogger class.

```cpp
virtual ~IRelogger();
```

## <a name="on-begin-relogging"></a> OnBeginRelogging

This function is called before the relogging pass begins.

```cpp
virtual AnalysisControl OnBeginRelogging();
```

### Return Value

An [AnalysisControl](analysis-control-enum-class.md) code that describes what should happen next.

## <a name="on-begin-relogging-pass"></a> OnBeginReloggingPass

This function is called at the beginning of the relogging pass.

```cpp
virtual AnalysisControl OnBeginReloggingPass();
```

### Return Value

An [AnalysisControl](analysis-control-enum-class.md) code that describes what should happen next.

## <a name="on-end-relogging"></a> OnEndRelogging

This function is called after the relogging pass has ended.

```cpp
virtual AnalysisControl OnEndRelogging();
```

### Return Value

An [AnalysisControl](analysis-control-enum-class.md) code that describes what should happen next.

## <a name="on-end-relogging-pass"></a> OnEndReloggingPass

This function is called at the end of the relogging pass.

```cpp
virtual AnalysisControl OnEndReloggingPass();
```

### Return Value

An [AnalysisControl](analysis-control-enum-class.md) code that describes what should happen next.

## <a name="on-simple-event"></a> OnSimpleEvent

```cpp
virtual AnalysisControl OnSimpleEvent(const EventStack& eventStack);
```

This function is called when a simple event is being processed.

### Parameters

*eventStack*\
The event stack for this simple event. For more information on event stacks, see [Events](../event-table.md).

### Return Value

An [AnalysisControl](analysis-control-enum-class.md) code that describes what should happen next.

## <a name="on-start-activity"></a> OnStartActivity

```cpp
virtual AnalysisControl OnStartActivity(const EventStack& eventStack);
```

This function is called when an activity start event is being processed.

### Parameters

*eventStack*\
The event stack for this activity start event. For more information on event stacks, see [Events](../event-table.md).

### Return Value

An [AnalysisControl](analysis-control-enum-class.md) code that describes what should happen next.

## <a name="on-stop-activity"></a> OnStopActivity

This function is called when an activity stop event is being processed.

```cpp
virtual AnalysisControl OnStopActivity(const EventStack& eventStack);
```

### Parameters

*eventStack*\
The event stack for this activity stop event. For more information on event stacks, see [Events](../event-table.md).

### Return Value

An [AnalysisControl](analysis-control-enum-class.md) code that describes what should happen next.

## <a name="on-trace-info"></a> OnTraceInfo

```cpp
virtual AnalysisControl OnTraceInfo(const TraceInfo& traceInfo);
```

This function is called once at the beginning of every analysis or relogging pass.

### Parameters

*traceInfo*\
A [TraceInfo](../cpp-event-data-types/trace-info.md) object that contains useful properties about the trace being consumed.

### Return Value

An [AnalysisControl](analysis-control-enum-class.md) code that describes what should happen next.

::: moniker-end
