---
description: "Learn more about: DontUseNewUseMake Class"
title: "DontUseNewUseMake Class"
ms.date: "09/21/2018"
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::Details::DontUseNewUseMake", "implements/Microsoft::WRL::Details::DontUseNewUseMake::operator new"]
helpviewer_keywords: ["Microsoft::WRL::Details::DontUseNewUseMake class", "Microsoft::WRL::Details::DontUseNewUseMake::operator new operator"]
ms.assetid: 8b38d07b-fc14-4cea-afb9-4c1a7dde0093
---
# DontUseNewUseMake Class

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
class DontUseNewUseMake;
```

## Remarks

Prevents using operator `new` in `RuntimeClass`. Consequently, you must use the [Make function](make-function.md) instead.

## Members

### Public Operators

Name                                             | Description
------------------------------------------------ | ---------------------------------------------------------------------------
[DontUseNewUseMake::operator new](#operator-new) | Overloads operator `new` and prevents it from being used in `RuntimeClass`.

## Inheritance Hierarchy

`DontUseNewUseMake`

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL::Details

## <a name="operator-new"></a> DontUseNewUseMake::operator new

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
void* operator new(
   size_t,
   _In_ void* placement
);
```

### Parameters

*__unnamed0*<br/>
An unnamed parameter that specifies the number of bytes of memory to allocate.

*placement*<br/>
The type to be allocated.

### Return Value

Provides a way to pass additional arguments if you overload operator `new`.

### Remarks

Overloads operator `new` and prevents it from being used in `RuntimeClass`.
