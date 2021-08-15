---
description: "Learn more about: Concurrency namespace operators (AMP)"
title: "Concurrency namespace operators (AMP)"
ms.date: "11/04/2016"
ms.assetid: 77f1ae17-1eb2-480d-8fe5-66d4c24bb91e
---
# Concurrency namespace operators (AMP)

:::row:::
   :::column span="":::
      [`operator==`](#operator_eq_eq)\
      [`operator!=`](#operator_neq)
   :::column-end:::
   :::column span="":::
      [`operator+`](#operator_add)\
      [`operator-`](#operator-)
   :::column-end:::
   :::column span="":::
      [`operator*`](#operator_star)\
      [`operator/`](#operator_div)
   :::column-end:::
   :::column span="":::
      [`operator%`](#operator_mod)
   :::column-end:::
:::row-end:::

## <a name="operator_eq_eq"></a> operator==

Determines whether the specified arguments are equal.

```cpp
template <
    int _Rank,
    template <int> class _Tuple_type
>
bool operator== (
    const _Tuple_type<_Rank>& _Lhs,
    const _Tuple_type<_Rank>& _Rhs) restrict(amp);
```

### Parameters

*_Rank*<br/>
The rank of the tuple arguments.

*_Lhs*<br/>
One of the tuples to compare.

*_Rhs*<br/>
One of the tuples to compare.

### Return Value

**`true`** if the tuples are equal; otherwise, **`false`**.

## <a name="operator_neq"></a> operator!=

Determines whether the specified arguments are not equal.

```cpp
template <
    int _Rank,
    template <int> class _Tuple_type
>
bool operator!= (
    const _Tuple_type<_Rank>& _Lhs,
    const _Tuple_type<_Rank>& _Rhs) restrict(amp);
```

### Parameters

*_Rank*<br/>
The rank of the tuple arguments.

*_Lhs*<br/>
One of the tuples to compare.

*_Rhs*<br/>
One of the tuples to compare.

### Return Value

**`true`** if the tuples are not equal; otherwise, **`false`**.

## <a name="operator_add"></a> operator+

Computes the component-wise sum of the specified arguments.

```cpp
template <
    int _Rank,
    template <int> class _Tuple_type
>
class _Tuple_type> _Tuple_type<_Rank>   operator+(
    const _Tuple_type<_Rank>& _Lhs,
    const _Tuple_type<_Rank>& _Rhs) restrict(amp,cpu);

template <
    int _Rank,
    template <int> class _Tuple_type
>
class _Tuple_type> _Tuple_type<_Rank>   operator+(
    const _Tuple_type<_Rank>& _Lhs,
    typename _Tuple_type<_Rank>::value_type _Rhs) restrict(amp,cpu);

template <
    int _Rank,
    template <int> class _Tuple_type
>
class _Tuple_type> _Tuple_type<_Rank>   operator+(
    typename _Tuple_type<_Rank>::value_type _Lhs,
    const _Tuple_type<_Rank>& _Rhs) restrict(amp,cpu);
```

### Parameters

*_Rank*<br/>
The rank of the tuple arguments.

*_Lhs*<br/>
One of the arguments to add.

*_Rhs*<br/>
One of the arguments to add.

### Return Value

The component-wise sum of the specified arguments.

## <a name="operator-"></a> operator-

Computes the component-wise difference between the specified arguments.

```cpp
template <
    int _Rank,
    template <int> class _Tuple_type
>
_Tuple_type<_Rank>   operator-(
    const _Tuple_type<_Rank>& _Lhs,
    const _Tuple_type<_Rank>& _Rhs) restrict(amp,cpu);

template <
    int _Rank,
    template <int> class _Tuple_type
>
_Tuple_type<_Rank>   operator-(
    const _Tuple_type<_Rank>& _Lhs,
    typename _Tuple_type<_Rank>::value_type _Rhs) restrict(amp,cpu);

template <
    int _Rank,
    template <int> class _Tuple_type
>
_Tuple_type<_Rank>   operator-(
    typename _Tuple_type<_Rank>::value_type _Lhs,
    const _Tuple_type<_Rank>& _Rhs) restrict(amp,cpu);
```

### Parameters

*_Rank*<br/>
The rank of the tuple arguments.

*_Lhs*<br/>
The argument to be subtracted from.

*_Rhs*<br/>
The argument to subtract.

### Return Value

The component-wise difference between the specified arguments.

## <a name="operator_star"></a> operator*

Computes the component-wise product of the specified arguments.

```cpp
template <
    int _Rank,
    template <int> class _Tuple_type
>
_Tuple_type<_Rank>   operator*(
    const _Tuple_type<_Rank>& _Lhs,
    typename _Tuple_type<_Rank>::value_type _Rhs) restrict(amp,cpu);

template <
    int _Rank,
    template <int> class _Tuple_type
>
_Tuple_type<_Rank>   operator*(
    typename _Tuple_type<_Rank>::value_type _Lhs,
    const _Tuple_type<_Rank>& _Rhs) restrict(amp, cpu);
```

### Parameters

*_Rank*<br/>
The rank of the tuple arguments.

*_Lhs*<br/>
One of the tuples to multiply.

*_Rhs*<br/>
One of the tuples to multiply.

### Return Value

The component-wise product of the specified arguments.

## <a name="operator_div"></a> operator/

Computes the component-wise quotient of the specified arguments.

```cpp
template <
    int _Rank,
    template <int> class _Tuple_type
>
_Tuple_type<_Rank>   operator/(
    const _Tuple_type<_Rank>& _Lhs,
    typename _Tuple_type<_Rank>::value_type _Rhs) restrict(amp,cpu);

template <
    int _Rank,
    template <int> class _Tuple_type
>
_Tuple_type<_Rank>   operator/(
    typename _Tuple_type<_Rank>::value_type _Lhs,
    const _Tuple_type<_Rank>& _Rhs) restrict(amp,cpu);
```

### Parameters

*_Rank*<br/>
The rank of the tuple arguments.

*_Lhs*<br/>
The tuple to be divided.

*_Rhs*<br/>
The tuple to divide by.

### Return Value

The component-wise quotient of the specified arguments.

## <a name="operator_mod"></a> operator%

Computes the modulus of the first specified argument by the second specified argument.

```cpp
template <
    int _Rank,
    template <int> class _Tuple_type
>
_Tuple_type<_Rank>   operator%(
    const _Tuple_type<_Rank>& _Lhs,
    typename _Tuple_type<_Rank>::value_type _Rhs) restrict(amp,cpu);

template <
    int _Rank,
    template <int> class _Tuple_type
>
_Tuple_type<_Rank>   operator%(
    typename _Tuple_type<_Rank>::value_type _Lhs,
    const _Tuple_type<_Rank>& _Rhs) restrict(amp,cpu);
```

### Parameters

*_Rank*<br/>
The rank of the tuple arguments.

*_Lhs*<br/>
The tuple from which the modulo is calculated.

*_Rhs*<br/>
The tuple to modulo by.

### Return Value

The result of the first specified argument modulus the second specified argument.

## See also

[Concurrency Namespace](concurrency-namespace-cpp-amp.md)
