---
title: "C++ Build Insights SDK Function class"
description: "The C++ Build Insights SDK Function class reference. Use the Function class to match a FUNCTION event."
ms.date: "04/27/2022"
ms.topic: language-reference
ms.custom: kr2b-contr-experiment
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "Function", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# Function class

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `Function` class is used with the [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md), and [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) functions. Use it to match a [FUNCTION](../event-table.md#function) event.

## Syntax

```cpp
class Function : public Activity
{
public:
    Function(const RawEvent& event);

    const char* Name() const;
};
```

## Members

Along with the inherited members from the [Activity](activity.md) base class, the `Function` class contains the following members:

### Constructors

[Function](#function)

### Functions

[Name](#name)

## Function

```cpp
Function(const RawEvent& event);
```

### Parameters

*event*\
A [FUNCTION](../event-table.md#function) event.

## Name

```cpp
const char* Name() const;
```

### Return Value

The name of the function, encoded in UTF-8.

::: moniker-end
