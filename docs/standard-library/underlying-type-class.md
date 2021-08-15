---
description: "Learn more about: underlying_type Class"
title: "underlying_type Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::underlying_type"]
helpviewer_keywords: ["underlying_type"]
ms.assetid: 691ddce3-2677-4480-bd35-d933fab85d3e
---
# underlying_type Class

Produces the underlying integral type for an enumeration type.

## Syntax

```cpp
template <class T>
struct underlying_type;
```

### Parameters

*T*\
The type to modify.

## Remarks

The `type` member typedef of the class template names the underlying integral type of *T*, when *T* is an enumeration type, otherwise there is no member typedef `type`.

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)
