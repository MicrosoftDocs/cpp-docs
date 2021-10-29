---
title: "C2DLL class"
description: "The C++ Build Insights SDK C2DLL class reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "C2DLL", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# C2DLL class

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `C2DLL` class is used with the [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md), and [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) functions. Use it to match a [C2_DLL](../event-table.md#c2-dll) event.

## Syntax

```cpp
class C2DLL : public Activity
{
public:
    C2DLL(const RawEvent& event);
};
```

## Members

Along with the inherited members from its [Activity](activity.md) base class, the `C2DLL` class contains the following members:

### Constructors

[C2DLL](#c2-dll)

## <a name="c2-dll"></a> C2DLL

```cpp
C2DLL(const RawEvent& event);
```

### Parameters

*event*\
A [C2_DLL](../event-table.md#c2-dll) event.

::: moniker-end
