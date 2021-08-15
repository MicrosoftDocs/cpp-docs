---
description: "Learn more about: &lt;system_error&gt; operators"
title: "&lt;system_error&gt; operators"
ms.date: "11/04/2016"
f1_keywords: ["system_error/std::operator!=", "system_error/std::operator=="]
ms.assetid: c14edefb-bd8a-4e90-88d3-c59c98e6f73c
---
# &lt;system_error&gt; operators

## <a name="op_eq_eq"></a> operator==

Tests if the object on the left side of the operator is equal to the object on the right side.

```cpp
bool operator==(const error_code& left,
    const error_condition& right);

bool operator==(const error_condition& left,
    const error_code& right);

bool operator==(const error_condition& left,
    const error_condition& right);
```

### Parameters

*left*\
The object to be tested for equality.

*right*\
The object to be tested for equality.

### Return Value

**`true`** if the objects are equal; **`false`** if objects are not equal.

### Remarks

This function returns `left.category() == right.category() && left.value() == right.value()`.

## <a name="op_neq"></a> operator!=

Tests if the object on the left side of the operator is not equal to the object on the right side.

```cpp
bool operator!=(const error_code& left, const error_condition& right);
bool operator!=(const error_condition& left, const error_code& right);
bool operator!=(const error_code& left, const error_code& right);
bool operator!=(const error_condition& left, const error_condition& right);
```

### Parameters

*left*\
The object to be tested for inequality.

*right*\
The object to be tested for inequality.

### Return Value

**`true`** if the object passed in *left* is not equal to the object passed in *right*; otherwise **`false`**.

### Remarks

This function returns `!(left == right)`.

## <a name="op_lt"></a> operator&lt;

Tests if an object is less than the object passed in for comparison.

```cpp
template <class _Enum>
inline bool operator<(
    _Enum left,
    typename enable_if<is_error_code_enum<_Enum>::value,
    const error_code&>::type right);

template <class _Enum>
inline bool operator<(
    typename enable_if<is_error_code_enum<_Enum>::value,
    const error_code&>::type left, _Enum right);

template <class _Enum>
inline bool operator<(
    _Enum left,
    typename enable_if<is_error_condition_enum<_Enum>::value,
    const error_condition&>::type right);

template <class _Enum>
inline bool operator<(
    typename enable_if<is_error_condition_enum<_Enum>::value,
    const error_condition&>::type left, _Enum right);
```

### Parameters

*left*\
The object to be compared.

*right*\
The object to be compared.

### Return Value

**`true`** if the object passed in *left* is less than the object passed in *right*; Otherwise, **`false`**.

### Remarks

This function tests the error order.

## <a name="op_ostream"></a> operator&lt;&lt;

```cpp
template <class charT, class traits>
    basic_ostream<charT, traits>& operator<<(basic_ostream<charT, traits>& os, const error_code& ec);
```
