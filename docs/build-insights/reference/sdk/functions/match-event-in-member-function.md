---
title: "MatchEventInMemberFunction"
description: "The C++ Build Insights SDK MatchEventInMemberFunction function reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "MatchEventInMemberFunction", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# MatchEventInMemberFunction

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `MatchEventInMemberFunction` function is used to match an event against the type described by the first parameter of a member function. The matched event is forwarded to the member function for further processing.

## Syntax

```cpp
template <
    typename     TInterface,
    typename     TReturn,
    typename     TEvent,
    typename...  TExtraParams,
    typename...  TExtraArgs>
bool MatchEventInMemberFunction(
    const RawEvent&          event,
    TInterface*              objectPtr,
    TReturn (TInterface::*   memberFunc)(TEvent, TExtraParams...),
    TExtraArgs&&...          extraArgs);
```

### Parameters

*TInterface*\
The type that contains the member function.

*TReturn*\
The return type of the member function.

*TEvent*\
The type of the event to match.

*TExtraParams*\
The types of the extra parameters accepted by the member function along with the event type to match.

*TExtraArgs*\
The types of the extra arguments that were passed to `MatchEventInMemberFunction`.

*event*\
The event to match against the event type described by *TEvent*.

*objectPtr*\
A pointer to an object on which *memberFunc* gets called.

*memberFunc*\
The member function that describes the event type to match.

*extraArgs*\
The arguments that get perfect-forwarded to *memberFunc* along with the event type parameter.

### Return Value

A **`bool`** value that is **`true`** if matching was successful, or **`false`** otherwise.

## Remarks

The event type to use for the *TEvent* parameter can be selected from a list of *capture classes*. For a list of events and the capture classes you can use to match them, see [event table](../event-table.md).

## Example

```cpp
void MyClass::Foo1(Function f) {}

void MyClass::Foo2(Compiler cl) {}

void MyClass::OnStartActivity(const EventStack& eventStack)
{
    // Let's assume eventStack contains:
    // [Compiler, BackEndPass, C2DLL, CodeGeneration, Thread, Function]

    auto& functionEvent = eventStack.Back(); // The Function event

    bool b1 = MatchEventInMemberFunction(
        functionEvent, this, &MyClass::Foo1);

    bool b2 = MatchEventInMemberFunction(
        functionEvent, this, &MyClass::Foo2);

    // b1: true because the first parameter of Foo1 is Function.
    // b2: false because the first parameter of Foo2 isn't Function.
}
```

::: moniker-end
