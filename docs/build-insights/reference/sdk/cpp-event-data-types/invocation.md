---
title: "Invocation class"
description: "The C++ Build Insights SDK Invocation class reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "Invocation", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# Invocation class

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `Invocation` class is used with the [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md), and [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) functions. Use it to match a [COMPILER](../event-table.md#compiler) or [LINKER](../event-table.md#linker) event.

## Syntax

```cpp
class Invocation : public Activity
{
    const INVOCATION_DATA* data_;

public:
    enum class Type
    {
        CL      = MSVC_TOOL_CODE_CL,
        LINK    = MSVC_TOOL_CODE_LINK
    };

    Invocation(const RawEvent& event);

    Type             Type() const;
    const char*      ToolVersionString() const;
    const wchar_t*   WorkingDirectory() const;
    const wchar_t*   ToolPath() const;

    const INVOCATION_VERSION_DATA& ToolVersion() const;
};
```

## Members

Along with the inherited members from its [Activity](activity.md) base class, the `Invocation` class contains the following members:

### Constructors

[Invocation](#invocation)

### Functions

[ToolPath](#tool-path)
[ToolVersion](#tool-version)
[ToolVersionString](#tool-version-string)
[Type](#type)
[WorkingDirectory](#working-directory)

## <a name="invocation"></a> Invocation

```cpp
Invocation(const RawEvent& event);
```

### Parameters

*event*\
A [COMPILER](../event-table.md#compiler) or [LINKER](../event-table.md#linker) event.

## <a name="tool-path"></a> ToolPath

```cpp
const wchar_t* ToolPath() const;
```

### Return Value

The absolute path to the tool that was invoked.

## <a name="tool-version"></a> ToolVersion

```cpp
const INVOCATION_VERSION_DATA& ToolVersion() const;
```

### Return Value

The version of the tool that was invoked, as an [INVOCATION_VERSION_DATA](../c-event-data-types/invocation-version-data-struct.md) reference.

## <a name="tool-version-string"></a> ToolVersionString

```cpp
const char* ToolVersionString() const;
```

### Return Value

The version of the tool that was invoked, as an ANSI string.

## <a name="type"></a> Type

```cpp
Type Type() const;
```

### Return Value

A code indicating the tool that was invoked.

## <a name="working-directory"></a> WorkingDirectory

```cpp
const wchar_t* WorkingDirectory() const;
```

### Return Value

The absolute path to the directory in which the tool was invoked.

::: moniker-end
