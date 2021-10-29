---
title: "FileInput class"
description: "The C++ Build Insights SDK FileInput class reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "FileInput", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# FileInput class

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `FileInput` class is used with the [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md), and [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) functions. Use it to match a [FILE_INPUT](../event-table.md#file-input) event.

## Syntax

```cpp
class FileInput : public SimpleEvent
{
public:
    enum class Type
    {
        OTHER               = FILE_TYPE_CODE_OTHER,
        OBJ                 = FILE_TYPE_CODE_OBJ,
        EXECUTABLE_IMAGE    = FILE_TYPE_CODE_EXECUTABLE_IMAGE,
        LIB                 = FILE_TYPE_CODE_LIB,
        IMP_LIB             = FILE_TYPE_CODE_IMP_LIB,
        EXP                 = FILE_TYPE_CODE_EXP
    };

    FileInput(const RawEvent& event);

    const wchar_t* Path() const;
    Type           Type() const;
};
```

## Members

Along with the inherited members from its [SimpleEvent](simple-event.md) base class, the `FileInput` class contains the following members:

### Constructors

[FileInput](#file-input)

### Functions

[Path](#path)
[Type](#type)

## <a name="file-input"></a> FileInput

```cpp
FileInput(const RawEvent& event);
```

### Parameters

*event*\
A [FILE_INPUT](../event-table.md#file-input) event.

## <a name="path"></a> Path

```cpp
const wchar_t Path() const;
```

### Return Value

The absolute path to the input file.

## <a name="type"></a> Type

```cpp
Type Type() const;
```

### Return Value

A code describing the type of input file.

::: moniker-end
