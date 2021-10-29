---
title: "CommandLine class"
description: "The C++ Build Insights SDK CommandLine class reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "CommandLine", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# CommandLine class

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `CommandLine` class is used with the [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md), and [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) functions. Use it to match a [COMMAND_LINE](../event-table.md#command-line) event.

## Syntax

```cpp
class CommandLine : public SimpleEvent
{
public:
    CommandLine(const RawEvent& event);

    const wchar_t* Value() const;
};
```

## Members

Along with the inherited members from its [SimpleEvent](simple-event.md) base class, the `CommandLine` class contains the following members:

### Constructors

[CommandLine](#command-line)

### Functions

[Value](#value)

## <a name="command-line"></a> CommandLine

```cpp
CommandLine(const RawEvent& event);
```

### Parameters

*event*\
A [COMMAND_LINE](../event-table.md#command-line) event.

## <a name="value"></a> Value

```cpp
const wchar_t Value() const;
```

### Return Value

A string containing a command line. The value includes arguments that were obtained from a response file and from environment variables such a CL, \_CL\_, Link, and \_LINK\_.

::: moniker-end
