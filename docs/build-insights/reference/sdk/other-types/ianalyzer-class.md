---
title: "IAnalyzer class"
description: "The C++ Build Insights SDK IAnalyzer class reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "IAnalyzer", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# IAnalyzer class

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `IAnalyzer` class provides an interface for analyzing an Event Tracing for Windows (ETW) trace. It's used with the [MakeDynamicAnalyzerGroup](../functions/make-dynamic-analyzer-group.md), [MakeDynamicReloggerGroup](../functions/make-dynamic-relogger-group.md), [MakeStaticAnalyzerGroup](../functions/make-dynamic-analyzer-group.md), and [MakeStaticReloggerGroup](../functions/make-static-analyzer-group.md) functions. Use `IAnalyzer` as a base class to create your own analyzer that can be part of an analyzer or relogger group.

## Syntax

```cpp
class IAnalyzer : public IRelogger
{
public:
    virtual AnalysisControl OnStartActivity(const EventStack& eventStack);
    virtual AnalysisControl OnStopActivity(const EventStack& eventStack)
    virtual AnalysisControl OnSimpleEvent(const EventStack& eventStack);
    virtual AnalysisControl OnBeginAnalysis();
    virtual AnalysisControl OnEndAnalysis();
    virtual AnalysisControl OnBeginAnalysisPass();
    virtual AnalysisControl OnEndAnalysisPass();

    AnalysisControl OnStartActivity(const EventStack& eventStack,
        const void* relogSession) final;

    AnalysisControl OnStopActivity(const EventStack& eventStack,
        const void* relogSession) final;

    AnalysisControl OnSimpleEvent(const EventStack& eventStack,
        const void* relogSession) final;

    AnalysisControl OnBeginRelogging() final;
    AnalysisControl OnEndRelogging() final;
    AnalysisControl OnBeginReloggingPass() final;
    AnalysisControl OnEndReloggingPass() final;

    virtual ~IAnalyzer();
};
```

## Remarks

Classes that derive from `IAnalyzer` can be used as both analyzers and reloggers. When used as reloggers, the relogger-specific functions redirect to their analyzer equivalent. The reverse isn't true: a class that derives from `IRelogger` can't be used as an analyzer. Using an analyzer in a relogger group is a common pattern. When placed in an early position of a relogger group, an analyzer can pre-compute information and make it available for reloggers in later positions.

The default return value for all functions that aren't overridden is `AnalysisControl::CONTINUE`. For more information, see [AnalysisControl](analysis-control-enum-class.md).

## Members

In addition to the [OnTraceInfo](irelogger-class.md#on-trace-info) member from the `IRelogger` interface, the `IAnalyzer` class contains the following members:

### Destructor

[~IAnalyzer](#ianalyzer-destructor)

### Functions

[OnBeginAnalysis](#on-begin-analysis)\
[OnBeginAnalysisPass](#on-begin-analysis-pass)\
[OnBeginRelogging](#on-begin-relogging)\
[OnBeginReloggingPass](#on-begin-relogging-pass)\
[OnEndAnalysis](#on-end-analysis)\
[OnEndAnalysisPass](#on-end-analysis-pass)\
[OnEndRelogging](#on-end-relogging)\
[OnEndReloggingPass](#on-end-relogging-pass)\
[OnSimpleEvent](#on-simple-event)\
[OnStartActivity](#on-start-activity)\
[OnStopActivity](#on-stop-activity)

## <a name="ianalyzer-destructor"></a> ~IAnalyzer

Destroys the IAnalyzer class.

```cpp
virtual ~IAnalyzer();
```

## <a name="on-begin-analysis"></a> OnBeginAnalysis

For analyzers part of an analyzer group, this function is called before the first analysis pass begins. For analyzers part of a relogger group, this function is called before the relogging pass begins. For analyzers part of both the analyzer and relogger group of the same relogging session, this function is called twice before the first analysis pass begins.

```cpp
virtual AnalysisControl OnBeginAnalysis();
```

### Return Value

An [AnalysisControl](analysis-control-enum-class.md) code that describes what should happen next.

## <a name="on-begin-analysis-pass"></a> OnBeginAnalysisPass

For analyzers part of an analyzer group, this function is called at the beginning of every analysis pass. For analyzers part of a relogger group, this function is called at the beginning of the relogger pass. For analyzers part of both the analyzer and relogger group of the same relogging session, this function is called at the beginning of every analysis pass, and at the beginning of the relogger pass.

```cpp
virtual AnalysisControl OnBeginAnalysisPass();
```

### Return Value

An [AnalysisControl](analysis-control-enum-class.md) code that describes what should happen next.

## <a name="on-begin-relogging"></a> OnBeginRelogging

```cpp
AnalysisControl OnBeginRelogging() final;
```

This function can't be overridden. It's called by the C++ Build Insights SDK when an analyzer is part of a relogger group. This function redirects the call to [OnBeginAnalysis](#on-begin-analysis).

### Return Value

The result of the [OnBeginAnalysis](#on-begin-analysis) call.

## <a name="on-begin-relogging-pass"></a> OnBeginReloggingPass

This function can't be overridden. It's called by the C++ Build Insights SDK when an analyzer is part of a relogger group. This function redirects the call to [OnBeginAnalysisPass](#on-begin-analysis-pass).

```cpp
AnalysisControl OnBeginReloggingPass() final;
```

### Return Value

The result of the [OnBeginAnalysisPass](#on-begin-analysis-pass) call.

## <a name="on-end-analysis"></a> OnEndAnalysis

For analyzers that are part of an analyzer group, this function is called after the last analysis pass has ended. For analyzers that are part of a relogger group, this function is called after the relogging pass has ended. For analyzers that are part of both the analyzer and relogger group of the same relogging session, this function is called twice:

1. after all analysis passes have ended and before the relogging pass begins, and
1. after the relogging pass has ended.

```cpp
virtual AnalysisControl OnEndAnalysis();
```

### Return Value

An [AnalysisControl](analysis-control-enum-class.md) code that describes what should happen next.

## <a name="on-end-analysis-pass"></a> OnEndAnalysisPass

For analyzers part of an analyzer group, this function is called at the end of every analysis pass. For analyzers part of a relogger group, this function is called at the end of the relogger pass. For analyzers part of both the analyzer and relogger group of the same relogging session, this function is called at the end of every analysis pass, and at the end of the relogger pass.

```cpp
virtual AnalysisControl OnEndAnalysisPass();
```

### Return Value

An [AnalysisControl](analysis-control-enum-class.md) code that describes what should happen next.

## <a name="on-end-relogging"></a> OnEndRelogging

This function can't be overridden. It's called by the C++ Build Insights SDK when an analyzer is part of a relogger group. This function redirects the call to [OnEndAnalysis](#on-end-analysis).

```cpp
AnalysisControl OnEndRelogging() final;
```

### Return Value

The result of the [OnEndAnalysis](#on-end-analysis) call.

## <a name="on-end-relogging-pass"></a> OnEndReloggingPass

This function can't be overridden. It's called by the C++ Build Insights SDK when an analyzer is part of a relogger group. This function redirects the call to [OnEndAnalysisPass](#on-end-analysis-pass).

```cpp
AnalysisControl OnEndReloggingPass() final;
```

### Return Value

The result of the [OnEndAnalysisPass](#on-end-analysis-pass) call.

## <a name="on-simple-event"></a> OnSimpleEvent

This function is called when a simple event is being processed. The second version of this function can't be overridden. It's called by the C++ Build Insights SDK when an analyzer is part of a relogger group. All calls to version 2 are redirected to version 1.

### Version 1

```cpp
virtual AnalysisControl OnSimpleEvent(const EventStack& eventStack);
```

### Version 2

```cpp
AnalysisControl OnSimpleEvent(const EventStack& eventStack,
        const void* relogSession) final;
```

### Parameters

*eventStack*\
The event stack for this simple event. For more information on event stacks, see [Events](../event-table.md).

*relogSession*\
This parameter is unused.

### Return Value

An [AnalysisControl](analysis-control-enum-class.md) code that describes what should happen next.

## <a name="on-start-activity"></a> OnStartActivity

This function is called when an activity start event is being processed. The second version of this function can't be overridden. It's called by the C++ Build Insights SDK when an analyzer is part of a relogger group. All calls to version 2 are redirected to version 1.

### Version 1

```cpp
virtual AnalysisControl OnStartActivity(const EventStack& eventStack);
```

### Version 2

```cpp
AnalysisControl OnStartActivity(const EventStack& eventStack,
        const void* relogSession) final;
```

### Parameters

*eventStack*\
The event stack for this activity start event. For more information on event stacks, see [Events](../event-table.md).

*relogSession*\
This parameter is unused.

### Return Value

An [AnalysisControl](analysis-control-enum-class.md) code that describes what should happen next.

## <a name="on-stop-activity"></a> OnStopActivity

This function is called when an activity stop event is being processed. The second version of this function can't be overridden. It's called by the C++ Build Insights SDK when an analyzer is part of a relogger group. All calls to version 2 are redirected to version 1.

### Version 1

```cpp
virtual AnalysisControl OnStopActivity(const EventStack& eventStack);
```

### Version 2

```cpp
AnalysisControl OnStopActivity(const EventStack& eventStack,
        const void* relogSession) final;
```

### Parameters

*eventStack*\
The event stack for this activity stop event. For more information on event stacks, see [Events](../event-table.md).

*relogSession*\
This parameter is unused.

### Return Value

An [AnalysisControl](analysis-control-enum-class.md) code that describes what should happen next.

::: moniker-end
