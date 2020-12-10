---
description: "Learn more about: &lt;scoped_allocator&gt; operators"
title: "&lt;scoped_allocator&gt; operators"
ms.date: "11/04/2016"
f1_keywords: ["scoped_allocator/std::operator!=", "scoped_allocator/std::operator=="]
ms.assetid: 4dfe0805-cc6e-479f-887f-a1c164f73837
---
# &lt;scoped_allocator&gt; operators

[operator!=](#op_neq)\
[operator==](#op_eq_eq)

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
