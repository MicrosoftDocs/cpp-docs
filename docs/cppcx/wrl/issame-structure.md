---
description: "Learn more about: IsSame Structure"
title: "IsSame Structure"
ms.date: "10/03/2018"
ms.topic: "reference"
f1_keywords: ["internal/Microsoft::WRL::Details::IsSame", "internal/Microsoft::WRL::Details::IsSame::value"]
helpviewer_keywords: ["Microsoft::WRL::Details::IsSame structure", "Microsoft::WRL::Details::IsSame::value constant"]
ms.assetid: 1eddbc3f-3cc5-434f-8495-e4477e1f868e
---
# IsSame Structure

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
template <typename T1, typename T2>
struct IsSame;

template <typename T1>
struct IsSame<T1, T1>;
```

### Parameters

*T1*<br/>
A type.

*T2*<br/>
Another type.

## Remarks

Tests whether one specified type is the same as another specified type.

## Members

### Public Constants

Name                    | Description
----------------------- | --------------------------------------------------
[IsSame::value](#value) | Indicates whether one type is the same as another.

## Inheritance Hierarchy

`IsSame`

## Requirements

**Header:** internal.h

**Namespace:** Microsoft::WRL::Details

## <a name="value"></a> IsSame::value

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
template <typename T1, typename T2>
struct IsSame
{
    static const bool value = false;
};

template <typename T1>
struct IsSame<T1, T1>
{
    static const bool value = true;
};
```

### Remarks

Indicates whether one type is the same as another.

`value` is **`true`** if the template parameters are the same, and **`false`** if the template parameters are different.
