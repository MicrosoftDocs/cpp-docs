---
title: "Function class"
description: "The C++ Build Insights SDK Function class reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "Function", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# Function class

::: moniker range="<=vs-2015"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and above. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or Visual Studio 2019. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=vs-2017"

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

Along with the inherited members from its [Activity](activity.md) base class, the `Function` class contains the following members:

### Constructors

[Function](#function)

### Functions

[Name](#name)

## <a name="function"></a> Function

```cpp
Function(const RawEvent& event);
```

### Parameters

*event*\
A [FUNCTION](../event-table.md#function) event.

## <a name="name"></a> Name

```cpp
const char* Name() const;
```

### Return Value

The name of the function, encoded in UTF-8.

::: moniker-end
