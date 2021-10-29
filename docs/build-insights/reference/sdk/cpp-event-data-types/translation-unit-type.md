---
title: "TranslationUnitType class"
description: "The C++ Build Insights SDK TranslationUnitType class reference."
ms.date: "06/08/2021"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "TranslationUnitType", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# TranslationUnitType class

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `TranslationUnitType` class is used with the [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md), and [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) functions. Use it to match a [TRANSLATION_UNIT_TYPE](../event-table.md#translation-unit-type) event.

## Syntax

```cpp
class TranslationUnitType : public SimpleEvent
{
public:
    enum class Type
    {
        MODULE              = TRANSLATION_UNIT_TYPE_MODULE,
        HEADER_UNIT         = TRANSLATION_UNIT_TYPE_HEADER_UNIT,
        PCH                 = TRANSLATION_UNIT_TYPE_PRECOMPILED_HEADER
    };

    TranslationUnitType(const RawEvent& event);

    Type Type() const;
};
```

## Members

Along with the inherited members from its [SimpleEvent](simple-event.md) base class, the `TranslationUnitType` class contains the following members:

### Constructors

[TranslationUnitType](#translation-unit-type)

### Functions

[Type](#type)

## <a name="type"></a> Type

```cpp
Type Type() const;
```

### Return Value

The type of the translation unit: either MODULE, HEADER_UNIT, or PCH.

## <a name="translation-unit-type"></a> TranslationUnitType

```cpp
TranslationUnitType(const RawEvent& event);
```

### Parameters

*event*\
A [TRANSLATION_UNIT_TYPE](../event-table.md#translation-unit-type) event.

::: moniker-end
