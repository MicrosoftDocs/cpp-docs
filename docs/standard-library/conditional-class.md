---
description: "Learn more about: conditional Class"
title: "conditional Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::conditional"]
helpviewer_keywords: ["conditional class", "conditional"]
ms.assetid: ece9f539-fb28-4e26-a79f-3264bc984493
---
# conditional Class

Selects one of two types, depending on the specified condition.

## Syntax

```cpp
template <bool B, class T1, class T2>
struct conditional;

template <bool _Test, class _T1, class _T2>
using conditional_t = typename conditional<_Test, _T1, _T2>::type;
```

### Parameters

*B*\
The value that determines the selected type.

*T1*\
The type result when B is true.

*T2*\
The type result when B is false.

## Remarks

The template member typedef `conditional<B, T1, T2>::type` evaluates to *T1* when *B* evaluates to **`true`**, and evaluates to *T2* when *B* evaluates to **`false`**.

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)
