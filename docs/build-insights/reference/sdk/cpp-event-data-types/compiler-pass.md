---
title: "CompilerPass class"
description: "The C++ Build Insights SDK CompilerPass class reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "CompilerPass", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# CompilerPass class

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `CompilerPass` class is used with the [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md), and [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) functions. Use it to match a [BACK_END_PASS](../event-table.md#back-end-pass) or [FRONT_END_PASS](../event-table.md#front-end-pass) event.

## Syntax

```cpp
class CompilerPass : public Activity
{
public:
    enum class PassCode
    {
        FRONT_END,
        BACK_END
    };

    CompilerPass(const RawEvent& event);

    PassCode       PassCode() const;
    const wchar_t* InputSourcePath() const;
    const wchar_t* OutputObjectPath() const;
};
```

## Members

Along with the inherited members from its [Activity](activity.md) base class, the `CompilerPass` class contains the following members:

### Constructors

[CompilerPass](#compiler-pass)

### Enums

#### PassCode

|Value|Description|
|-|-|
|FRONT_END|The front-end pass.|
|BACK_END|The back-end pass.|

### Functions

[InputSourcePath](#input-source-path)\
[OutputObjectPath](#output-object-path)\
[PassCode](#pass-code)\

## <a name="compiler-pass"></a> CompilerPass

```cpp
CompilerPass(const RawEvent& event);
```

### Parameters

*event*\
A [BACK_END_PASS](../event-table.md#back-end-pass) or [FRONT_END_PASS](../event-table.md#front-end-pass) event.

## <a name="input-source-path"></a> InputSourcePath

```cpp
const wchar_t* InputSourcePath() const;
```

### Return Value

The absolute path to the input source file processed by this compiler pass.

## <a name="output-object-path"></a> OutputObjectPath

```cpp
const wchar_t* OutputObjectPath() const;
```

### Return Value

The absolute path to the output object file produced by this compiler pass.

## <a name="pass-code"></a> PassCode

```cpp
PassCode PassCode() const;
```

### Return Value

A code indicating which compiler pass is represented by this CompilerPass object.

::: moniker-end
