---
title: "FrontEndFile class"
description: "The C++ Build Insights SDK FrontEndFile class reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "FrontEndFile", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# FrontEndFile class

::: moniker range="<=vs-2015"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and above. To see the documentation for these versions, set the Visual Studio version selector control for this article to Visual Studio 2017 or Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

The `FrontEndFile` class is used with the [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md), and [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) functions. Use it to match a [FRONT_END_FILE](../event-table.md#front-end-file) event.

## Syntax

```cpp
class FrontEndFile : public Activity
{
public:
    FrontEndFile(const RawEvent& event);

    const char* Path() const;
};
```

## Members

Along with the inherited members from its [Activity](activity.md) base class, the `FrontEndFile` class contains the following members:

### Constructors

[FrontEndFile](#front-end-file)

### Functions

[Path](#path)

## <a name="front-end-file"></a> FrontEndFile

```cpp
FrontEndFile(const RawEvent& event);
```

### Parameters

*event*\
A [FRONT_END_FILE](../event-table.md#front-end-file) event.

## <a name="path"></a> Path

```cpp
const char* Path() const;
```

### Return Value

The absolute path to the file, encoded in UTF-8.

::: moniker-end
