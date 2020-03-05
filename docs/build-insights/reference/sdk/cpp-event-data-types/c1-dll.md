---
title: "C1DLL class"
description: "The C++ Build Insights SDK C1DLL class reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "C1DLL", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# C1DLL class

::: moniker range="<=vs-2015"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and above. To see the documentation for these versions, set the Visual Studio version selector control for this article to Visual Studio 2017 or Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

The `C1DLL` class is used with the [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md), and [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) functions. Use it to match a [C1_DLL](../event-table.md#c1-dll) event.

## Syntax

```cpp
class C1DLL : public Activity
{
public:
    C1DLL(const RawEvent& event);
};
```

## Members

Along with the inherited members from its [Activity](activity.md) base class, the `C1DLL` class contains the following members:

### Constructors

[C1DLL](#c1-dll)

## <a name="c1-dll"></a> C1DLL

```cpp
C1DLL(const RawEvent& event);
```

### Parameters

*event*\
A [C1_DLL](../event-table.md#c1-dll) event.

::: moniker-end
