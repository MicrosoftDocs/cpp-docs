---
title: "MatchEventStack"
description: "The C++ Build Insights SDK MatchEventStack function reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "MatchEventStack", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# MatchEventStack

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `MatchEventStack` function is used to match an event stack against a specific event hierarchy. Matched hierarchies are forwarded to a handler for further processing. To learn more about events, event stacks, and hierarchies, see [event table](../event-table.md).

## Syntax

```cpp
template <
    typename          TEvent,
    typename...       TEvents,
    typename          TCallable,
    typename...       TExtraArgs>
bool MatchEventStack(
    const EventStack& eventStack,
    TCallable&&       callable,
    TExtraArgs&&...   extraArgs);
```

### Parameters

*TEvent*\
The type of the eldest parent to match in the event stack.

*TEvents*\
The remaining types you wish to match in the event stack.

*TCallable*\
A type that supports `operator()`. For more information on which arguments get passed to this operator, see the *callable* parameter description.

*TExtraArgs*\
The types of the extra arguments passed to `MatchEventStack`.

*eventStack*\
The event stack to match against the event type hierarchy described by *TEvent* and *TEvents*.

*callable*\
Upon successfully matching the event stack with the event type hierarchy described by *TEvent* and *TEvents*, `MatchEventStack` invokes *callable*. It passes to *callable* one r-value argument for each type in event hierarchy. The *extraArgs* parameter pack is perfect-forwarded in the remaining parameters of *callable*.

*extraArgs*\
The arguments that get perfect-forwarded to *callable* along with the matched event type.

### Return Value

A **`bool`** value that is **`true`** if matching was successful, or **`false`** otherwise.

## Remarks

The last event in *eventStack* is always matched against the last entry in the concatenated \[*TEvent*, *TEvents...*\] type list. All other *TEvent* and *TEvents* entries can match any position in *eventStack* except the last, provided they're in the same order.

Event types to use for the *TEvent* and *TEvents* parameters are selected from a list of *capture classes*. For a list of events and the capture classes you can use to match them, see [event table](../event-table.md).

## Example

```cpp
void MyClass::OnStartActivity(const EventStack& eventStack)
{
    // Let's assume eventStack contains:
    // [Compiler, BackEndPass, C2DLL, CodeGeneration, Thread, Function]

    bool b1 = MatchEventStack<Compiler, BackEndPass, C2DLL,
                CodeGeneration, Thread, Function>(
        eventStack, [](Compiler cl, BackEndPass bep, C2DLL c2,
            CodeGeneration cg, Thread t, Function f){ /* Do something ... */ });

    bool b2 = MatchEventStack<Compiler, Function>(
        eventStack, [](Compiler cl, Function f){ /* Do something... */ });

    bool b3 = MatchEventStack<Thread, Compiler, Function>(
        eventStack, [](Thread t, Compiler cl Function f){ /* Do something... */ });

    bool b4 = MatchEventStack<Compiler>(
        eventStack, [](Compiler cl){ /* Do something... */ });


    // b1: true because the list of types matches the eventStack exactly.
    // b2: true because Function is the last entry in both the type list
    //     and 'eventStack', and also because Compiler comes before
    //     Function in 'eventStack' and in the type list.
    // b3: false because, even though both Thread and Compiler come
    //     before Function in 'eventStack', they aren't listed in the
    //     right order in the type list.
    // b4: false because the last entry in the type list is Compiler,
    //     which doesn't match the last entry in 'eventStack' (Function).
}
```

::: moniker-end
