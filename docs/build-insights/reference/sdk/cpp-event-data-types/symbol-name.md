---
title: "SymbolName class"
description: "The C++ Build Insights SDK SymbolName class reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "SymbolName", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# SymbolName class

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `SymbolName` class is used with the [MatchEvent](../functions/match-event.md), [MatchEventInMemberFunction](../functions/match-event-in-member-function.md), [MatchEventStack](../functions/match-event-stack.md), and [MatchEventStackInMemberFunction](../functions/match-event-stack-in-member-function.md) functions. Use it to match a [SYMBOL_NAME](../event-table.md#symbol-name) event.

## Syntax

```cpp
class SymbolName : public SimpleEvent
{
public:
    SymbolName(const RawEvent& event);

    const unsigned long long&  Key() const;
    const char*                Name() const;
};
```

## Members

Along with the inherited members from its [SimpleEvent](simple-event.md) base class, the `SymbolName` class contains the following members:

### Constructors

[SymbolName](#symbol-name)

### Functions

[Key](#key)
[Name](#name)

## <a name="key"></a> Key

```cpp
const unsigned long long& Key() const;
```

### Return Value

A numerical identifier for the type represented by this symbol. This identifier is unique within a compiler front-end pass.

## <a name="name"></a> Name

```cpp
const char* Name() const;
```

### Return Value

The name of the type represented by the symbol, encoded in UTF-8.

## <a name="symbol-name"></a> SymbolName

```cpp
SymbolName(const RawEvent& event);
```

### Parameters

*event*\
A [SYMBOL_NAME](../event-table.md#symbol-name) event.

::: moniker-end
