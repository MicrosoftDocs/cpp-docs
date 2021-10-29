---
title: "MatchEvent"
description: "The C++ Build Insights SDK MatchEvent function reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "MatchEvent", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# MatchEvent

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `MatchEvent` function is used to match an event against a list of event types. If the event matches a type in the list, it's forwarded to a handler for further processing.

## Syntax

```cpp
template <
    typename        TEvent,
    typename...     TEvents,
    typename        TCallable,
    typename...     TExtraArgs>
bool MatchEvent(
    const RawEvent& event,
    TCallable&&     callable,
    TExtraArgs&&... extraArgs);
```

### Parameters

*TEvent*\
The first event type that you wish to match.

*TEvents*\
The remaining event types that you wish to match.

*TCallable*\
A type that supports `operator()`. For more information on which arguments get passed to this operator, see the *callable* parameter description.

*TExtraArgs*\
The types of the extra arguments that were passed to `MatchEvent`.

*event*\
The event to match against the event types described by *TEvent* and *TEvents*.

*callable*\
`MatchEvent` invokes *callable* after successfully matching the event with any of the event types described by *TEvent* and *TEvents*. The first argument passed to *callable* is an r-value of the matched event type. The *extraArgs* parameter pack is perfect-forwarded in the remaining parameters of *callable*.  

*extraArgs*\
The arguments that get perfect-forwarded to *callable* along with the matched event type.

### Return Value

A **`bool`** value that's **`true`** if matching was successful, or **`false`** otherwise.

## Remarks

Event types to use for the *TEvent* and *TEvents* parameters are selected from a list of *capture classes*. For a list of events and the capture classes you can use to match them, see [event table](../event-table.md).

## Example

```cpp
void MyClass::OnStartActivity(const EventStack& eventStack)
{
    // Let's assume eventStack contains:
    // [Compiler, BackEndPass, C2DLL, CodeGeneration, Thread, Function]

    auto& functionEvent = eventStack.Back(); // The Function event

    bool b1 = MatchEvent<Function, Thread>(
        functionEvent, [](auto matchedEvent){ /* Do something... */});

    bool b2 = MatchEvent<CodeGeneration, Thread>(
        functionEvent, [](auto matchedEvent){ /* Do something... */});


    // b1: true because the list of types contains Function, which is
    //     the type of the event we are trying to match.
    // b2: false because the list of types doesn't contain Function.
}
```

::: moniker-end
