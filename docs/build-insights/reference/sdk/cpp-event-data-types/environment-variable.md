---
title: "EnvironmentVariable class"
description: "The C++ Build Insights SDK EnvironmentVariable class reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "EnvironmentVariable", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# EnvironmentVariable class

::: moniker range="<=vs-2015"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and above. To see the documentation for these versions, set the Visual Studio version selector control for this article to Visual Studio 2017 or Visual Studio 2019.

::: moniker-end
::: moniker range=">=vs-2017"

The `EnvironmentVariable` class is used with the [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md), and [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) functions. Use it to match an [ENVIRONMENT_VARIABLE](../event-table.md#environment-variable) event.

## Syntax

```cpp
class EnvironmentVariable : public SimpleEvent
{
public:
    EnvironmentVariable(const RawEvent& event);

    const wchar_t* Name() const;
    const wchar_t* Value() const;
};
```

## Members

Along with the inherited members from its [SimpleEvent](simple-event.md) base class, the `EnvironmentVariable` class contains the following members:

### Constructors

[EnvironmentVariable](#environment-variable)

### Functions

[Name](#name)
[Value](#value)

## <a name="environment-variable"></a> EnvironmentVariable

```cpp
EnvironmentVariable(const RawEvent& event);
```

### Parameters

*event*\
An [ENVIRONMENT_VARIABLE](../event-table.md#environment-variable) event.

## <a name="name"></a> Name

```cpp
const wchar_t Name() const;
```

### Return Value

The environment variable's name.

## <a name="value"></a> Value

```cpp
const wchar_t Value() const;
```

### Return Value

The environment variable's value.

::: moniker-end
