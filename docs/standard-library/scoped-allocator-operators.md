---
title: "<scoped_allocator> operators"
description: "Learn more about: <scoped_allocator> operators"
ms.date: 11/04/2016
f1_keywords: ["scoped_allocator/std::operator!=", "scoped_allocator/std::operator=="]
---
# `<scoped_allocator>` operators

## <a name="op_neq"></a> operator!=

Tests two `scoped_allocator_adaptor` objects for inequality.

```cpp
template <class Outer, class... Inner>
bool operator!=(
    const scoped_allocator_adaptor<Outer, Inner...>& left,
    const scoped_allocator_adaptor<Outer, Inner...>& right) noexcept;
```

### Parameters

*left*\
The left `scoped_allocator_adaptor` object.

*right*\
The right `scoped_allocator_adaptor` object.

### Return Value

`!(left == right)`

## <a name="op_eq_eq"></a> operator==

Tests two `scoped_allocator_adaptor` objects for equality.

```cpp
template <class Outer, class... Inner>
bool operator==(
    const scoped_allocator_adaptor<Outer, Inner...>& left,
    const scoped_allocator_adaptor<Outer, Inner...>& right) noexcept;
```

### Parameters

*left*\
The left `scoped_allocator_adaptor` object.

*right*\
The right `scoped_allocator_adaptor` object.

### Return Value

`left.outer_allocator() == right.outer_allocator() && left.inner_allocator() == right.inner_allocator()`

## See also

[<scoped_allocator>](../standard-library/scoped-allocator.md)
