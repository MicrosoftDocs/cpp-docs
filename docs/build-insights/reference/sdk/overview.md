---
title: "C++ Build Insights SDK"
description: "An overview of the Visual Studio C++ Build Insights SDK."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "Analyzing", "Relogging", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# C++ Build Insights SDK

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The C++ Build Insights SDK is a collection of APIs that allow you to create personalized tools on top of the C++ Build Insights platform. This page provides a high-level overview to help you get started.

## Obtaining the SDK

You can download the C++ Build Insights SDK as a NuGet package by following these steps:

1. From Visual Studio 2017 and above, create a new C++ project.
1. In the **Solution Explorer** pane, right-click on your project.
1. Select **Manage NuGet Packages** from the context menu.
1. At the top right, select the **nuget.org** package source.
1. Search for the latest version of the Microsoft.Cpp.BuildInsights package.
1. Choose **Install**.
1. Accept the license.

Read on for information about the general concepts surrounding the SDK. You can also access the official [C++ Build Insights samples GitHub repository](https://github.com/microsoft/cpp-build-insights-samples) to see examples of real C++ applications that use the SDK.

## Collecting a trace

Using the C++ Build Insights SDK to analyze events coming out of the MSVC toolchain requires that you first collect a trace. The SDK makes use of Event Tracing for Windows (ETW) as the underlying tracing technology. Collecting a trace can be done in two ways:

### Method 1: using vcperf in Visual Studio 2019 and above

1. Open an elevated x64 Native Tools Command Prompt for VS 2019.
1. Run the following command: `vcperf /start MySessionName`
1. Build your project.
1. Run the following command: `vcperf /stopnoanalyze MySessionName outputTraceFile.etl`

   > [!IMPORTANT]
   > Use the `/stopnoanalyze` command when stopping your trace with vcperf. You can't use the C++ Build Insights SDK to analyze traces stopped by the regular `/stop` command.

### Method 2: programmatically

Use any of these C++ Build Insights SDK trace collection functions to start and stop traces programmatically. **The program that executes these function calls must have administrative privileges.** Only the start and stop tracing functions require administrative privileges. All other functions in the C++ Build Insights SDK can be executed without them.

### SDK functions related to trace collection

| Functionality | C++ API | C API |
|--|--|--|
| Starting a trace | [StartTracingSession](functions/start-tracing-session.md) | [StartTracingSessionA](functions/start-tracing-session-a.md)<br />[StartTracingSessionW](functions/start-tracing-session-w.md) |
| Stopping a trace | [StopTracingSession](functions/stop-tracing-session.md) | [StopTracingSessionA](functions/stop-tracing-session-a.md)<br />[StopTracingSessionW](functions/stop-tracing-session-w.md) |
| Stopping a trace and<br />immediately analyzing the result | [StopAndAnalyzeTracingSession](functions/stop-and-analyze-tracing-session.md) | [StopAndAnalyzeTracingSessionA](functions/stop-and-analyze-tracing-session-a.md)<br />[StopAndAnalyzeTracingSession](functions/stop-and-analyze-tracing-session-w.md) |
| Stopping a trace and<br />immediately relogging the result | [StopAndRelogTracingSession](functions/stop-and-relog-tracing-session.md) | [StopAndRelogTracingSessionA](functions/stop-and-relog-tracing-session-a.md)<br />[StopAndRelogTracingSessionW](functions/stop-and-relog-tracing-session-w.md) |

The sections that follow show you how to configure an analysis or a relogging session. It's required for the combined functionality functions, such as [StopAndAnalyzeTracingSession](functions/stop-and-analyze-tracing-session.md).

## Consuming a trace

Once you have an ETW trace, use the C++ Build Insights SDK to unpack it. The SDK gives you the events in a format that allows you to develop your tools quickly. We don't recommend you consume the raw ETW trace without using the SDK. The event format used by MSVC is undocumented, optimized to scale to huge builds, and hard to make sense of. Additionally, the C++ Build Insights SDK API is stable, while the raw ETW trace format is subject to change without notice.

### SDK types and functions related to trace consumption

| Functionality | C++ API | C API | Notes |
|--|--|--|--|
| Setting up event callbacks | [IAnalyzer](other-types/ianalyzer-class.md)<br />[IRelogger](other-types/irelogger-class.md) | [ANALYSIS_CALLBACKS](other-types/analysis-callbacks-struct.md)<br />[RELOG_CALLBACKS](other-types/relog-callbacks-struct.md) | The C++ Build Insights SDK provides events through callback functions. In C++, implement the callback functions by creating an analyzer or relogger class that inherits the IAnalyzer or IRelogger interface. In C, implement the callbacks in global functions and provide pointers to them in the ANALYSIS_CALLBACKS or RELOG_CALLBACKS structure. |
| Building groups | [MakeStaticAnalyzerGroup](functions/make-static-analyzer-group.md)<br />[MakeStaticReloggerGroup](functions/make-static-relogger-group.md)<br />[MakeDynamicAnalyzerGroup](functions/make-dynamic-analyzer-group.md)<br />[MakeDynamicReloggerGroup](functions/make-dynamic-relogger-group.md) |  | The C++ API provides helper functions and types to group multiple analyzer and relogger objects together. Groups are a neat way to divide a complex analysis into simpler steps. [vcperf](https://github.com/microsoft/vcperf) is organized in this way. |
| Analyzing or relogging | [Analyze](functions/analyze.md)<br />[Relog](functions/relog.md) | [AnalyzeA](functions/analyze-a.md)<br />[AnalyzeW](functions/analyze-w.md)<br />[RelogA](functions/relog-a.md)<br />[RelogW](functions/relog-w.md) |  |

### Analyzing and relogging

Consuming a trace is done through either an analysis session or a relogging session.

Using a regular analysis is appropriate for most scenarios. This method gives you the flexibility to choose your output format: `printf` text, xml, JSON, database, REST calls, and so on.

Relogging is for special-purpose analyses that need to produce an ETW output file. Using relogging, you can translate the C++ Build Insights events into your own ETW event format. An appropriate use of relogging would be to hook C++ Build Insights data to your existing ETW tools and infrastructure. For example, [vcperf](https://github.com/microsoft/vcperf) makes use of the relogging interfaces. That's because it must produce data the Windows Performance Analyzer, an ETW tool, can understand. Some prior knowledge of how ETW works is required if you plan on using the relogging interfaces.

### Creating analyzer groups

It's important to know how to create groups. Here's an example that shows how to create an analyzer group that prints *Hello, world!* for every activity start event it receives.

```cpp
using namespace Microsoft::Cpp::BuildInsights;

class Hello : public IAnalyzer
{
public:
    AnalysisControl OnStartActivity(
        const EventStack& eventStack) override
    {
        std::cout << "Hello, " << std::endl;
        return AnalysisControl::CONTINUE;
    }
};

class World : public IAnalyzer
{
public:
    AnalysisControl OnStartActivity(
        const EventStack& eventStack) override
    {
        std::cout << "world!" << std::endl;
        return AnalysisControl::CONTINUE;
    }
};

int main()
{
    Hello hello;
    World world;

    // Let's make Hello the first analyzer in the group
    // so that it receives events and prints "Hello, "
    // first.
    auto group = MakeStaticAnalyzerGroup(&hello, &world);

    unsigned numberOfAnalysisPasses = 1;

    // Calling this function initiates the analysis and
    // forwards all events from "inputTrace.etl" to my analyzer
    // group.
    Analyze("inputTrace.etl", numberOfAnalysisPasses, group);

    return 0;
}
```

## Using events

### SDK types and functions related to events

| Functionality | C++ API | C API | Notes |
|--|--|--|--|
| Matching and filtering events | [MatchEventStackInMemberFunction](functions/match-event-stack-in-member-function.md)<br />[MatchEventStack](functions/match-event-stack.md)<br />[MatchEventInMemberFunction](functions/match-event-in-member-function.md)<br />[MatchEvent](functions/match-event.md) |  | The C++ API offers functions that make it easy to extract the events you care about from your traces. With the C API, this filtering must be done by hand. |
| Event data types | [Activity](cpp-event-data-types/activity.md)<br />[BackEndPass](cpp-event-data-types/back-end-pass.md)<br />[BottomUp](cpp-event-data-types/bottom-up.md)<br />[C1DLL](cpp-event-data-types/c1-dll.md)<br />[C2DLL](cpp-event-data-types/c2-dll.md)<br />[CodeGeneration](cpp-event-data-types/code-generation.md)<br />[CommandLine](cpp-event-data-types/command-line.md)<br />[Compiler](cpp-event-data-types/compiler.md)<br />[CompilerPass](cpp-event-data-types/compiler-pass.md)<br />[EnvironmentVariable](cpp-event-data-types/environment-variable.md)<br />[Event](cpp-event-data-types/event.md)<br />[EventGroup](cpp-event-data-types/event-group.md)<br />[EventStack](cpp-event-data-types/event-stack.md)<br />[ExecutableImageOutput](cpp-event-data-types/executable-image-output.md)<br />[ExpOutput](cpp-event-data-types/exp-output.md)<br />[FileInput](cpp-event-data-types/file-input.md)<br />[FileOutput](cpp-event-data-types/file-output.md)<br />[ForceInlinee](cpp-event-data-types/force-inlinee.md)<br />[FrontEndFile](cpp-event-data-types/front-end-file.md)<br />[FrontEndFileGroup](cpp-event-data-types/front-end-file-group.md)<br />[FrontEndPass](cpp-event-data-types/front-end-pass.md)<br />[Function](cpp-event-data-types/function.md)<br />[HeaderUnit](cpp-event-data-types/header-unit.md)<br />[ImpLibOutput](cpp-event-data-types/imp-lib-output.md)<br />[Invocation](cpp-event-data-types/invocation.md)<br />[InvocationGroup](cpp-event-data-types/invocation-group.md)<br />[LibOutput](cpp-event-data-types/lib-output.md)<br />[Linker](cpp-event-data-types/linker.md)<br />[LinkerGroup](cpp-event-data-types/linker-group.md)<br />[LinkerPass](cpp-event-data-types/linker-pass.md)<br />[LTCG](cpp-event-data-types/ltcg.md)<br />[Module](cpp-event-data-types/module.md)<br />[ObjOutput](cpp-event-data-types/obj-output.md)<br />[OptICF](cpp-event-data-types/opt-icf.md)<br />[OptLBR](cpp-event-data-types/opt-lbr.md)<br />[OptRef](cpp-event-data-types/opt-ref.md)<br />[Pass1](cpp-event-data-types/pass1.md)<br />[Pass2](cpp-event-data-types/pass2.md)<br />[PrecompiledHeader](cpp-event-data-types/precompiled-header.md)<br />[PreLTCGOptRef](cpp-event-data-types/pre-ltcg-opt-ref.md)<br />[SimpleEvent](cpp-event-data-types/simple-event.md)<br />[SymbolName](cpp-event-data-types/symbol-name.md)<br />[TemplateInstantiation](cpp-event-data-types/template-instantiation.md)<br />[TemplateInstantiationGroup](cpp-event-data-types/template-instantiation-group.md)<br />[Thread](cpp-event-data-types/thread.md)<br />[TopDown](cpp-event-data-types/top-down.md)<br />[TraceInfo](cpp-event-data-types/trace-info.md)<br />[TranslationUnitType](cpp-event-data-types/translation-unit-type.md)<br />[WholeProgramAnalysis](cpp-event-data-types/whole-program-analysis.md) | [CL_PASS_DATA](c-event-data-types/cl-pass-data-struct.md)<br />[EVENT_COLLECTION_DATA](c-event-data-types/event-collection-data-struct.md)<br />[EVENT_DATA](c-event-data-types/event-data-struct.md)<br />[EVENT_ID](c-event-data-types/event-id-enum.md)<br />[FILE_DATA](c-event-data-types/file-data-struct.md)<br />[FILE_TYPE_CODE](c-event-data-types/file-type-code-enum.md)<br />[FRONT_END_FILE_DATA](c-event-data-types/front-end-file-data-struct.md)<br />[FUNCTION_DATA](c-event-data-types/function-data-struct.md)<br />[FUNCTION_FORCE_INLINEE_DATA](c-event-data-types/function-force-inlinee-data-struct.md)<br />[INVOCATION_DATA](c-event-data-types/invocation-data-struct.md)<br />[INVOCATION_VERSION_DATA](c-event-data-types/invocation-version-data-struct.md)<br />[MSVC_TOOL_CODE](c-event-data-types/msvc-tool-code-enum.md)<br />[NAME_VALUE_PAIR_DATA](c-event-data-types/name-value-pair-data-struct.md)<br />[SYMBOL_NAME_DATA](c-event-data-types/symbol-name-data-struct.md)<br />[TEMPLATE_INSTANTIATION_DATA](c-event-data-types/template-instantiation-data-struct.md)<br />[TEMPLATE_INSTANTIATION_KIND_CODE](c-event-data-types/template-instantiation-kind-code-enum.md)<br />[TRACE_INFO_DATA](c-event-data-types/trace-info-data-struct.md)<br />[TRANSLATION_UNIT_PASS_CODE](c-event-data-types/translation-unit-pass-code-enum.md)<br />[TRANSLATION_UNIT_TYPE](c-event-data-types/translation-unit-type.md)<br />[TRANSLATION_UNIT_TYPE_DATA](c-event-data-types/translation-unit-type-data.md) |  |

### Activities and simple events

Events come in two categories: *activities* and *simple events*. Activities are ongoing processes in time that have a beginning and an end. Simple events are punctual occurrences and don't have a duration. When analyzing MSVC traces with the C++ Build Insights SDK, you'll receive separate events when an activity starts and stops. You'll receive only one event when a simple event occurs.

### Parent-child relationships

Activities and simple events are related to each other via parent-child relationships. The parent of an activity or simple event is the encompassing activity in which they occur. For example, when compiling a source file the compiler has to parse the file, then generate the code. The parsing and code generation activities are both children of the compiler activity.

Simple events don't have a duration, so nothing else can happen inside them. As such, they never have any children.

The parent-child relationships of each activity and simple event are indicated in the [event table](event-table.md). Knowing these relationships is important when consuming C++ Build Insights events. You'll often have to rely on them to understand the full context of an event.

### Properties

All events have the following properties:

| Property | Description |
|--|--|
| Type identifier | A number that uniquely identifies the event type. |
| Instance identifier | A number that uniquely identifies the event within the trace. If two events of the same type occur in a trace, both get a unique instance identifier. |
| Start time | The time when an activity started, or the time when a simple event occurred. |
| Process identifier | A number that identifies the process in which the event occurred. |
| Thread identifier | A number that identifies the thread in which the event occurred. |
| Processor index | A zero-based index indicating which logical processor the event was emitted by. |
| Event name | A string that describes the event type. |

All activities other than simple events also have these properties:

| Property | Description |
|--|--|
| Stop time | The time when the activity stopped. |
| Exclusive duration | The time spent in an activity, excluding the time spent in its child activities. |
| CPU time | The time that the CPU spent executing code in the thread attached to the activity. It doesn't include time when the thread attached to the activity was sleeping. |
| Exclusive CPU time | Same as CPU time, but excluding the CPU time spent by child activities. |
| Wall-clock time responsibility | The activity's contribution to overall wall-clock time. Wall-clock time responsibility takes into account parallelism between activities. For example, let's assume two unrelated activities run in parallel. Both have a duration of 10 seconds, and exactly the same start and stop time. In this case, Build Insights assigns both a wall-clock time responsibility of 5 seconds. In contrast, if these activities run one after the other with no overlap, they're both assigned a wall-clock time responsibility of 10 seconds. |
| Exclusive wall-clock time responsibility | Same as wall-clock time responsibility, but excludes the wall-clock time responsibility of child activities. |

Some events have their own properties beyond the ones mentioned. In this case, these additional properties are listed in the [event table](event-table.md).

### Consuming events provided by the C++ Build Insights SDK

#### The event stack

Whenever the C++ Build Insights SDK gives you an event, it comes in the form of a stack. The last entry in the stack is the current event, and entries before it are its parent hierarchy. For example, [LTCG](event-table.md#ltcg) start and stop events occur during pass 1 of the linker. In this case, the stack you'd receive contains: \[[LINKER](event-table.md#linker), [PASS1](event-table.md#pass1), LTCG\]. The parent hierarchy is convenient because you can trace back an event to its root. If the LTCG activity mentioned above is slow, you can immediately learn which linker invocation was involved.

#### Matching events and event stacks

The C++ Build Insights SDK gives you every event in a trace, but most of the time you only care about a subset of them. In some cases, you may only care about a subset of *event stacks*. The SDK provides facilities to help you quickly extract the events or event stack you need, and reject the ones you don't. It's done through these matching functions:

| Function | Description |
|--|--|
| [MatchEvent](functions/match-event.md) | Keep an event if it matches one of the specified types. Forward matched events to a lambda or other callable type. The event's parent hierarchy isn't considered by this function. |
| [MatchEventInMemberFunction](functions/match-event-in-member-function.md) | Keep an event if it matches the type specified in a member function's parameter. Forward matched events to the member function. The event's parent hierarchy isn't considered by this function. |
| [MatchEventStack](functions/match-event-stack.md) | Keep an event if both the event and its parent hierarchy match the types specified. Forward the event and the matched parent hierarchy events to a lambda or other callable type. |
| [MatchEventStackInMemberFunction](functions/match-event-stack-in-member-function.md) | Keep an event if both the event and its parent hierarchy match the types specified in a member function's parameter list. Forward the event and the matched parent hierarchy events to the member function. |

The event stack matching functions like `MatchEventStack` allow gaps when describing the parent hierarchy to match. For example, you can say you're interested in the \[[LINKER](event-table.md#linker), [LTCG](event-table.md#ltcg)\] stack. It would also match the \[LINKER, [PASS1](event-table.md#pass1), LTCG\] stack. The last type specified must be the event type to match, and isn't part of the parent hierarchy.

#### Capture classes

Using the `Match*` functions requires that you specify the types you want to match. These types are selected from a list of *capture classes*. Capture classes come in several categories, described below.

| Category | Description |
|--|--|
| Exact | These capture classes are used to match a specific event type and none other. An example is the [Compiler](cpp-event-data-types/compiler.md) class, which matches the [COMPILER](event-table.md#compiler) event. |
| Wildcard | These capture classes can be used to match any event from the list of events they support. For example, the [Activity](cpp-event-data-types/activity.md) wildcard matches any activity event. Another example is the [CompilerPass](cpp-event-data-types/compiler-pass.md) wildcard, which can match either the [FRONT_END_PASS](event-table.md#front-end-pass) or the [BACK_END_PASS](event-table.md#back-end-pass) event. |
| Group | The names of group capture classes end in *Group*. They're used to match multiple events of the same type in a row, ignoring gaps. They only make sense when matching recursive events, because you don't know how many exist in the event stack. For example, the [FRONT_END_FILE](event-table.md#front-end-file) activity happens every time the compiler parses a file. This activity is recursive because the compiler may find an include directive while it's parsing the file. The [FrontEndFile](cpp-event-data-types/front-end-file.md) class matches only one FRONT_END_FILE event in the stack. Use the [FrontEndFileGroup](cpp-event-data-types/front-end-file-group.md) class to match the entire include hierarchy. |
| Wildcard group | A wildcard group combines the properties of wildcards and groups. The only class of this category is [InvocationGroup](cpp-event-data-types/invocation-group.md), which match and capture all [LINKER](event-table.md#linker) and [COMPILER](event-table.md#compiler) events in a single event stack. |

Refer to the [event table](event-table.md) to learn which capture classes can be used to match each event.

#### After matching: using captured events

Once a match completes successfully, the `Match*` functions construct the capture class objects and forward them to the specified function. Use these capture class objects to access the events' properties.

#### Example

```cpp
AnalysisControl MyAnalyzer::OnStartActivity(const EventStack& eventStack)
{
    // The event types to match are specified in the PrintIncludes function
    // signature.  
    MatchEventStackInMemberFunction(eventStack, this, &MyAnalyzer::PrintIncludes);
}

// We want to capture event stacks where:
// 1. The current event is a FrontEndFile activity.
// 2. The current FrontEndFile activity has at least one parent FrontEndFile activity
//    and possibly many.
void PrintIncludes(FrontEndFileGroup parentIncludes, FrontEndFile currentFile)
{
    // Once we reach this point, the event stack we are interested in has been matched.
    // The current FrontEndFile activity has been captured into 'currentFile', and
    // its entire inclusion hierarchy has been captured in 'parentIncludes'.

    cout << "The current file being parsed is: " << currentFile.Path() << endl;
    cout << "This file was reached through the following inclusions:" << endl;

    for (auto& f : parentIncludes)
    {
        cout << f.Path() << endl;
    }
}
```

::: moniker-end
