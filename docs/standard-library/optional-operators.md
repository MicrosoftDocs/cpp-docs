---
description: "Learn more about: &lt;optional&gt; operators"
title: "&lt;optional&gt; operators"
ms.date: "11/04/2016"
f1_keywords: ["optional/std::operator!=", "optional/std::operator==", "optional/std::operatoroperator&gt;", "optional/std::operatoroperator&gt=;", "optional/std::operatoroperator&lt;", "optional/std::operatoroperator&lt;="]
ms.assetid: 57492e09-3836-4dbc-9ae5-78ecf506c190
helpviewer_keywords: ["std::operator!= (optional)", "std::operator== (optional)", "std::operatoroperator&gt; (optional)", "std::operatoroperator&gt=; (optional)", "std::operatoroperator&lt; (optional)", "std::operatoroperator&lt;= (optional)"]
---
# &lt;optional&gt; operators

## <a name="op_eq_eq"></a> operator==

Tests if the `optional` object on the left side of the operator is equal to the `optional` object on the right side.

```cpp
template <class T, class U> constexpr bool operator==(const optional<T>& left, const optional<U>& right);
template <class T> constexpr bool operator==(const optional<T>& left, nullopt_t right) noexcept;
template <class T> constexpr bool operator==(nullopt_t left, const optional<T>& right) noexcept;
template <class T, class U> constexpr bool operator==(const optional<T>&, const U&);
template <class T, class U> constexpr bool operator==(const U&, const optional<T>&);
```

### Parameters

*left*\
An object of type `optional`, `nullopt_t`, or `T`.

*right*\
An object of type `optional`, `nullopt_t`, or `T`.

## <a name="op_neq"></a> operator!=

Tests if the `optional` object on the left side of the operator is not equal to the `optional` object on the right side.

```cpp
template <class T, class U> constexpr bool operator!=(const optional<T>&, const optional<U>&);
template <class T> constexpr bool operator!=(const optional<T>&, nullopt_t) noexcept;
template <class T> constexpr bool operator!=(nullopt_t, const optional<T>&) noexcept;
template <class T, class U> constexpr bool operator!=(const optional<T>&, const U&);
template <class T, class U> constexpr bool operator!=(const U&, const optional<T>&);
```

### Parameters

*left*\
An object of type `optional`, `nullopt_t`, or `T`.

*right*\
An object of type `optional`, `nullopt_t`, or `T`.

### Remarks

This template function returns `!(left == right)`.

## <a name="op_lt"></a> operator&lt;

Tests if the `optional` object on the left side of the operator is less than the `optional` object on the right side.

```cpp
template <class T, class U> constexpr bool operator<(const optional<T>&, const optional<U>&);
template <class T> constexpr bool operator<(const optional<T>&, nullopt_t) noexcept;
template <class T> constexpr bool operator<(nullopt_t, const optional<T>&) noexcept;
template <class T, class U> constexpr bool operator<(const optional<T>&, const U&);
template <class T, class U> constexpr bool operator<(const U&, const optional<T>&);
```

### Parameters

*left*\
An object of type `optional`, `nullopt_t`, or `T`.

*right*\
An object of type `optional`, `nullopt_t`, or `T`.

### Return Value

**`true`** if the list on the left side of the operator is less than but not equal to the list on the right side of the operator; otherwise **`false`**.

## <a name="op_lt_eq"></a> operator&lt;=

Tests if the `optional` object on the left side of the operator is less than or equal to the `optional` object on the right side.

```cpp
template <class T, class U> constexpr bool operator<=(const optional<T>&, const optional<U>&);
template <class T> constexpr bool operator<=(const optional<T>&, nullopt_t) noexcept;
template <class T> constexpr bool operator<=(nullopt_t, const optional<T>&) noexcept;
template <class T, class U> constexpr bool operator<=(const optional<T>&, const U&);
template <class T, class U> constexpr bool operator<=(const U&, const optional<T>&);
```

### Parameters

*left*\
An object of type `optional`, `nullopt_t`, or `T`.

*right*\
An object of type `optional`, `nullopt_t`, or `T`.

### Return Value

**`true`** if the list on the left side of the operator is less than or equal to the list on the right side of the operator; otherwise **`false`**.

### Remarks

This template function returns `!(right < left)`.

## <a name="op_gt"></a> operator&gt;

Tests if the `optional` object on the left side of the operator is greater than the `optional` object on the right side.

```cpp
template <class T, class U> constexpr bool operator>(const optional<T>&, const optional<U>&);
template <class T> constexpr bool operator>(const optional<T>&, nullopt_t) noexcept;
template <class T> constexpr bool operator>(nullopt_t, const optional<T>&) noexcept;
template <class T, class U> constexpr bool operator>(const optional<T>&, const U&);
template <class T, class U> constexpr bool operator>(const U&, const optional<T>&);
```

### Parameters

*left*\
An object of type `optional`, `nullopt_t`, or `T`.

*right*\
An object of type `optional`, `nullopt_t`, or `T`.

### Return Value

**`true`** if the list on the left side of the operator is greater than the list on the right side of the operator; otherwise **`false`**.

### Remarks

This template function returns `right < left`.

## <a name="op_gt_eq"></a> operator&gt;=

Tests if the `optional` object on the left side of the operator is greater than or equal to the `optional` object on the right side.

```cpp
template <class T, class U> constexpr bool operator>=(const optional<T>&, const optional<U>&);
template <class T> constexpr bool operator>=(const optional<T>&, nullopt_t) noexcept;
template <class T> constexpr bool operator>=(nullopt_t, const optional<T>&) noexcept;
template <class T, class U> constexpr bool operator>=(const optional<T>&, const U&);
template <class T, class U> constexpr bool operator>=(const U&, const optional<T>&);
```

### Parameters

*left*\
An object of type `optional`, `nullopt_t`, or `T`.

*right*\
An object of type `optional`, `nullopt_t`, or `T`.

### Return Value

**`true`** if the `optional` on the left side of the operator is greater than or equal to the `optional` on the right side of the operator; otherwise **`false`**.

### Remarks

The template function returns `!(left < right)`.
