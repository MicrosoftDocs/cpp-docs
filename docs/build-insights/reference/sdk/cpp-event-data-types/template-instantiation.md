---
title: "TemplateInstantiation class"
description: "The C++ Build Insights SDK TemplateInstantiation class reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "TemplateInstantiation", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# TemplateInstantiation class

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `TemplateInstantiation` class is used with the [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md), and [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) functions. Use it to match a [TEMPLATE_INSTANTIATION](../event-table.md#template-instantiation) event.

## Syntax

```cpp
class TemplateInstantiation : public Activity
{
public:
    enum class Kind
    {
        CLASS       = TEMPLATE_INSTANTIATION_KIND_CODE_CLASS,
        FUNCTION    = TEMPLATE_INSTANTIATION_KIND_CODE_FUNCTION,
        VARIABLE    = TEMPLATE_INSTANTIATION_KIND_CODE_VARIABLE,
        CONCEPT     = TEMPLATE_INSTANTIATION_KIND_CODE_CONCEPT
    };

    TemplateInstantiation(const RawEvent& event);

    const unsigned long long& SpecializationSymbolKey() const;
    const unsigned long long& PrimaryTemplateSymbolKey() const;

    Kind Kind() const;
};
```

## Members

Along with the inherited members from its [Activity](activity.md) base class, the `TemplateInstantiation` class contains the following members:

### Constructors

[TemplateInstantiation](#template-instantiation)

### Functions

[Kind](#kind)
[PrimaryTemplateSymbolKey](#primary-template-symbol-key)
[SpecializationSymbolKey](#specialization-symbol-key)

## <a name="kind"></a> Kind

```cpp
Kind Kind() const;
```

### Return Value

A code describing the type of template instantiation that was done.

## <a name="primary-template-symbol-key"></a> PrimaryTemplateSymbolKey

```cpp
const unsigned long long& PrimaryTemplateSymbolKey() const;
```

### Return Value

A numerical identifier for the template type that was specialized. This identifier is unique within a compiler front-end pass.

## <a name="specialization-symbol-key"></a> SpecializationSymbolKey

```cpp
const unsigned long long& SpecializationSymbolKey() const;
```

### Return Value

A numerical identifier for the specialization's type. This identifier is unique within a compiler front-end pass.

## <a name="template-instantiation"></a> TemplateInstantiation

```cpp
TemplateInstantiation(const RawEvent& event);
```

### Parameters

*event*\
A [TEMPLATE_INSTANTIATION](../event-table.md#template-instantiation) event.

::: moniker-end
