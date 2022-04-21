---
title: "MatchEventStackInMemberFunction"
description: "The C++ Build Insights SDK MatchEventStackInMemberFunction function reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "MatchEventStackInMemberFunction", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# MatchEventStackInMemberFunction

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `MatchEventStackInMemberFunction` function is used to match an event stack against a specific event hierarchy, described by the parameter list of a member function. Matched hierarchies are forwarded to the member function for further processing. To learn more about events, event stacks, and hierarchies, see [event table](../event-table.md).

## Syntax

```cpp
template <
    typename     TInterface,
    typename     TReturn,
    typename     T1,
    typename...  TExtraParams,
    typename...  TExtraArgs>
bool MatchEventStackInMemberFunction(
    const EventStack&         eventStack,
    TInterface*               objectPtr,
    TReturn (TInterface::*    memberFunc)(T1, TExtraParams...),
    TExtraArgs&&...           extraArgs);

template <
    typename     TInterface,
    typename     TReturn,
    typename     T1,
    typename     T2,
    typename...  TExtraParams,
    typename...  TExtraArgs>
bool MatchEventStackInMemberFunction(
    const EventStack&         eventStack,
    TInterface*               objectPtr,
    TReturn (TInterface::*    memberFunc)(T1, T2, TExtraParams...),
    TExtraArgs&&...           extraArgs);

// Etc...

template <
    typename     TInterface,
    typename     TReturn,
    typename     T1,
    typename     T2,
    typename     T3,
    typename     T4,
    typename     T5,
    typename     T6,
    typename     T7,
    typename     T8,
    typename     T9,
    typename     T10,
    typename...  TExtraParams,
    typename...  TExtraArgs>
bool MatchEventStackInMemberFunction(
    const EventStack&         eventStack,
    TInterface*               objectPtr,
    TReturn (TInterface::*    memberFunc)(T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, TExtraParams...),
    TExtraArgs&&...           extraArgs);
```

### Parameters

*TInterface*\
The type that contains the member function.

*TReturn*\
The return type of the member function.

*T1*, ..., *T10*\
The types describing the event hierarchy to match.

*TExtraParams*\
The types of the extra parameters accepted by the member function, and the event hierarchy types.

*TExtraArgs*\
The types of the extra arguments that were passed to `MatchEventStackInMemberFunction`.

*eventStack*\
The event stack to match against the event type hierarchy described by *T1* through *T10*.

*objectPtr*\
A pointer to an object on which *memberFunc* is called.

*memberFunc*\
The member function that describes the event type hierarchy to match.

*extraArgs*\
The arguments that get perfect-forwarded to *memberFunc* along with the event type hierarchy parameters.

### Return Value

A **`bool`** value that is **`true`** if matching was successful, or **`false`** otherwise.

## Remarks

The last event in *eventStack* is always matched against the last entry in the event type hierarchy to match. All other types in the event type hierarchy can match any position in *eventStack* except the last, provided they're in the same order.

Event types to use for the *T1* through *T10* parameters are selected from a list of *capture classes*. For a list of events and the capture classes you can use to match them, see [event table](../event-table.md).

## Example

```cpp
void MyClass::Foo1(Compiler cl, BackEndPass bep, C2DLL c2,
    CodeGeneration cg, Thread t, Function f) { }

void MyClass::Foo2(Compiler cl, Function f) { }

void MyClass::Foo3(Thread t, Compiler cl, Function f) { }

void MyClass::Foo4(Compiler cl) { }

void MyClass::OnStartActivity(const EventStack& eventStack)
{
    // Let's assume eventStack contains:
    // [Compiler, BackEndPass, C2DLL, CodeGeneration, Thread, Function]

    bool b1 = MatchEventStackInMemberFunction(
        eventStack, this, &MyClass::Foo1);

    bool b2 = MatchEventStackInMemberFunction(
        eventStack, this, &MyClass::Foo2);

    bool b3 = MatchEventStackInMemberFunction(
        eventStack, this, &MyClass::Foo3);

    bool b4 = MatchEventStackInMemberFunction(
        eventStack, this, &MyClass::Foo4);

    // b1: true because the parameter types of Foo1 match the eventStack
    //     exactly.
    // b2: true because Function is the last entry in both the member
    //     function parameter list and 'eventStack', and also because
    //     Compiler comes before Function in 'eventStack' and in the
    //     parameter type list.
    // b3: false because, even though both Thread and Compiler come
    //     before Function in 'eventStack', the member function parameter
    //     list doesn't list them in the right order.
    // b4: false because the last entry in the member function parameter
    //     list is Compiler, which doesn't match the last entry in 'eventStack'
    //     (Function).
}
```

::: moniker-end
