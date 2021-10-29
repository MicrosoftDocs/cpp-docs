---
title: "ForceInlinee class"
description: "The C++ Build Insights SDK ForceInlinee class reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "ForceInlinee", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# ForceInlinee class

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `ForceInlinee` class is used with the [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md), and [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) functions. Use it to match a [FORCE_INLINEE](../event-table.md#force-inlinee) event.

## Syntax

```cpp
class ForceInlinee : public SimpleEvent
{
public:
    ForceInlinee(const RawEvent& event);

    const char*             Name() const;
    const unsigned short&   Size() const;
};
```

## Members

Along with the inherited members from its [SimpleEvent](simple-event.md) base class, the `ForceInlinee` class contains the following members:

### Constructors

[ForceInlinee](#force-inlinee)

### Functions

[Name](#name)
[Size](#size)

## <a name="force-inlinee"></a> ForceInlinee

```cpp
ForceInlinee(const RawEvent& event);
```

### Parameters

*event*\
A [FORCE_INLINEE](../event-table.md#force-inlinee) event.

## <a name="name"></a> Name

```cpp
const char* Name() const;
```

### Return Value

The name of the force-inlined function, encoded in UTF-8.

## <a name="size"></a> Size

```cpp
const unsigned short& Size() const;
```

### Return Value

The size of the force-inlined function, as an intermediate instruction count.

::: moniker-end
