---
description: "Learn more about: index Class"
title: "index Class"
ms.date: "03/27/2019"
f1_keywords: ["AMP/index", "AMP/Concurrency::index::index", "AMP/Concurrency::index::rank"]
helpviewer_keywords: ["index structure"]
ms.assetid: cbe79b08-0ba7-474c-9828-f1a71da39eb3
---
# index Class

Defines an *N*-dimensional index vector.

## Syntax

```cpp
template <int _Rank>
class index;
```

### Parameters

*_Rank*<br/>
The rank, or number of dimensions.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[index Constructor](#index_ctor)|Initializes a new instance of the `index` class.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[operator--](#operator--)|Decrements each element of the `index` object.|
|[operator%=](#operator_mod_eq)|Calculates the modulus (remainder) of each element in the `index` object when that element is divided by a number.|
|[operator*=](#operator_star_eq)|Multiplies each element of the `index` object by a number.|
|[operator/=](#operator_div_eq)|Divides each element of the `index` object by a number.|
|[index::operator\[\]](#operator_at)|Returns the element that's at the specified index.|
|[operator++](#operator_add_add)|Increments each element of the `index` object.|
|[operator+=](#operator_add_eq)|Adds the specified number to each element of the `index` object.|
|[operator=](#operator_eq)|Copies the contents of the specified `index` object into this one.|
|[operator-=](#operator_-_eq)|Subtracts the specified number from each element of the `index` object.|

### Public Constants

|Name|Description|
|----------|-----------------|
|[rank Constant](#rank)|Stores the rank of the `index` object.|

## Inheritance Hierarchy

`index`

## Remarks

The `index` structure represents a coordinate vector of *N* integers that specifies a unique position in an *N*-dimensional space. The values in the vector are ordered from most significant to least significant. You can retrieve the values of the components using [operator=](#operator_eq).

## Requirements

**Header:** amp.h

**Namespace:** Concurrency

## <a name="index_ctor"></a> index Constructor

Initializes a new instance of the index class.

```cpp
index() restrict(amp,cpu);

index(
   const index<_Rank>& _Other
) restrict(amp,cpu);

explicit index(
   int _I
) restrict(amp,cpu);

index(
   int _I0,
   int _I1
) restrict(amp,cpu);

index(
   int _I0,
   int _I1,
   int _I2
) restrict(amp,cpu);

explicit index(
   const int _Array[_Rank]
) restrict(amp,cpu);
```

### Parameters

*_Array*<br/>
A one-dimensional array with the rank values.

*_I*<br/>
The index location in a one-dimensional index.

*_I0*<br/>
The length of the most significant dimension.

*_I1*<br/>
The length of the next-to-most-significant dimension.

*_I2*<br/>
The length of the least significant dimension.

*_Other*<br/>
An index object on which the new index object is based.

## <a name="operator--"></a> operator--

Decrements each element of the index object.

```cpp
index<_Rank>& operator--() restrict(amp,cpu);

index operator--(
   int
) restrict(amp,cpu);
```

### Return values

For the prefix operator, the index object (*this). For the suffix operator, a new index object.

## <a name="operator_mod_eq"></a> operator%=

Calculates the modulus (remainder) of each element in the index object when that element is divided by the specified number.

```cpp
index<_Rank>& operator%=(
   int _Rhs
) restrict(cpu, amp);
```

### Parameters

*_Rhs*<br/>
The number to divide by to find the modulus.

## Return Value

The index object.

## <a name="operator_star_eq"></a> operator*=

Multiplies each element in the index object by the specified number.

```cpp
index<_Rank>& operator*=(
   int _Rhs
) restrict(amp,cpu);
```

### Parameters

*_Rhs*<br/>
The number to multiply.

## <a name="operator_div_eq"></a> operator/=

Divides each element in the index object by the specified number.

```cpp
index<_Rank>& operator/=(
   int _Rhs
) restrict(amp,cpu);
```

### Parameters

*_Rhs*<br/>
The number to divide by.

## <a name="operator_at"></a> operator\[\]

Returns the component of the index at the specified location.

```cpp
int operator[] (
   unsigned _Index
) const restrict(amp,cpu);

int& operator[] (
   unsigned _Index
) restrict(amp,cpu);
```

### Parameters

*_Index*<br/>
An integer from 0 through the rank minus 1.

### Return Value

The element that's at the specified index.

### Remarks

This following example displays the component values of the index.

```cpp
// Prints 1 2 3.
concurrency::index<3> idx(1, 2, 3);
std::cout << idx[0] << "\n";
std::cout << idx[1] << "\n";
std::cout << idx[2] << "\n";
```

## <a name="operator_add_add"></a> operator++

Increments each element of the index object.

```cpp
index<_Rank>& operator++() restrict(amp,cpu);

index<_Rank> operator++(
   int
) restrict(amp,cpu);
```

### Return Value

For the prefix operator, the index object (*this). For the suffix operator, a new index object.

## <a name="operator_add_eq"></a> operator+=

Adds the specified number to each element of the index object.

```cpp
index<_Rank>& operator+=(
   const index<_Rank>& _Rhs
) restrict(amp,cpu);

index<_Rank>& operator+=(
   int _Rhs
) restrict(amp,cpu);
```

### Parameters

*_Rhs*<br/>
The number to add.

### Return Value

The index object.

## <a name="operator_eq"></a> operator=

Copies the contents of the specified index object into this one.

```cpp
index<_Rank>& operator=(
   const index<_Rank>& _Other
) restrict(amp,cpu);
```

### Parameters

*_Other*<br/>
The index object to copy from.

### Return Value

A reference to this index object.

## <a name="operator_-_eq"></a> operator-=

Subtracts the specified number from each element of the index object.

```cpp
index<_Rank>& operator-=(
   const index<_Rank>& _Rhs
) restrict(amp,cpu);

index<_Rank>& operator-=(
   int _Rhs
) restrict(amp,cpu);
```

### Parameters

*_Rhs*<br/>
The number to subtract.

### Return Value

The index object.

## <a name="rank"></a> Rank

Gets the rank of the index object.

```cpp
static const int rank = _Rank;
```

## See also

[Concurrency Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)
