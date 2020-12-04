---
description: "Learn more about: make_signed Class"
title: "make_signed Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::make_signed"]
helpviewer_keywords: ["make_signed class", "make_signed"]
ms.assetid: 686247c0-247c-496b-9b1b-ba9dcd633621
---
# make_signed Class

Makes type or the smallest signed type greater than or equal in size to type.

## Syntax

```cpp
template <class T>
struct make_signed;

template <class T>
using make_signed_t = typename make_signed<T>::type;
```

### Parameters

*T*\
The type to modify.

## Remarks

An instance of the type modifier holds a modified-type that is *T* if `is_signed<T>` holds true. Otherwise it is the smallest unsigned type `UT` for which `sizeof (T) <= sizeof (UT)`.

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)
