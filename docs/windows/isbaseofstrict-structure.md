---
title: "IsBaseOfStrict Structure | Microsoft Docs"
ms.custom: ""
ms.date: "09/21/2018"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["internal/Microsoft::WRL::Details::IsBaseOfStrict", "internal/Microsoft::WRL::Details::IsBaseOfStrict::value"]
dev_langs: ["C++"]
helpviewer_keywords: ["Microsoft::WRL::Details::IsBaseOfStrict structure", "Microsoft::WRL::Details::IsBaseOfStrict::value constant"]
ms.assetid: 6fed7366-c8d4-4991-b4fb-43ed93f8e1bf
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# IsBaseOfStrict Structure

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
template <
   typename Base,
   typename Derived
>

struct IsBaseOfStrict;
template <
   typename Base
>
struct IsBaseOfStrict<Base, Base>;
```

### Parameters

*Base*<br/>
The base type.

*Derived*<br/>
The derived type.

## Remarks

Tests whether one type is the base of another.

The first template tests whether a type is derived from a base type, which might yield `true` or `false`. The second template tests whether a type is derived from itself, which always yields `false`.

## Members

### Public Constants

Name                            | Description
------------------------------- | --------------------------------------------------
[IsBaseOfStrict::value](#value) | Indicates whether one type is the base of another.

## Inheritance Hierarchy

`IsBaseOfStrict`

## Requirements

**Header:** internal.h

**Namespace:** Microsoft::WRL::Details

## <a name="value"></a>IsBaseOfStrict::value

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
static const bool value = __is_base_of(Base, Derived);
```

### Remarks

Indicates whether one type is the base of another.

`value` is `true` if type `Base` is a base class of the type `Derived`, otherwise it is `false`.
