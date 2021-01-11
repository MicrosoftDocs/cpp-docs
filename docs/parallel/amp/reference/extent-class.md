---
description: "Learn more about: extent Class (C++ AMP)"
title: "extent Class (C++ AMP)"
ms.date: "03/27/2019"
f1_keywords: ["extent", "AMP/extent", "AMP/Concurrency::extent::extent", "AMP/Concurrency::extent::contains", "AMP/Concurrency::extent::size", "AMP/Concurrency::extent::tile", "AMP/Concurrency::extent::rank Constant"]
helpviewer_keywords: ["extent structure"]
ms.assetid: edb5de3d-3935-4dbb-8365-4cc6c4fb0269
---
# extent Class (C++ AMP)

Represents a vector of *N* integer values that specify the bounds of an *N*-dimensional space that has an origin of 0. The values in the vector are ordered from most significant to least significant.

## Syntax

```cpp
template <int _Rank>
class extent;
```

### Parameters

*_Rank*<br/>
The rank of the `extent` object.

## Requirements

**Header:** amp.h

**Namespace:** Concurrency

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[extent Constructor](#ctor)|Initializes a new instance of the `extent` class.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[contains](#contains)|Verifies that the specified `extent` object has the specified rank.|
|[size](#size)|Returns the total linear size of the extent (in units of elements).|
|[tile](#tile)|Produces a `tiled_extent` object with the tile extents given by specified dimensions.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[operator-](#operator_min)|Returns a new `extent` object that's created by subtracting the `index` elements from the corresponding `extent` elements.|
|[operator--](#operator_min_min)|Decrements each element of the `extent` object.|
|[operator%=](#operator_mod_eq)|Calculates the modulus (remainder) of each element in the `extent` object when that element is divided by a number.|
|[operator*=](#operator_star_eq)|Multiplies each element of the `extent` object by a number.|
|[operator/=](#operator_min_eq)|Divides each element of the `extent` object by a number.|
|[extent::operator\[\]](#operator_at)|Returns the element that's at the specified index.|
|[operator+](#operator_add)|Returns a new `extent` object that's created by adding the corresponding `index` and `extent` elements.|
|[operator++](#operator_add_add)|Increments each element of the `extent` object.|
|[operator+=](#operator_add_eq)|Adds the specified number to each element of the `extent` object.|
|[operator=](#operator_eq)|Copies the contents of another `extent` object into this one.|
|[operator-=](#operator_min_eq)|Subtracts the specified number from each element of the `extent` object.|

### Public Constants

|Name|Description|
|----------|-----------------|
|[rank Constant](#rank_constant)|Gets the rank of the `extent` object.|

## Inheritance Hierarchy

`extent`

## <a name="contains"></a> contains

Indicates whether the specified [index](index-class.md) value is contained within the `extent' object.

### Syntax

```cpp
bool contains(const index<rank>& _Index) const restrict(amp,cpu);
```

### Parameters

*_Index*<br/>
The `index` value to test.

### Return Value

**`true`** if the specified *index* value is contained in the `extent` object; otherwise, **`false`**.

## <a name="ctor"></a> extent

Initializes a new instance of the `extent' class.

### Syntax

```cpp
extent() restrict(amp,cpu);
extent(const extent<_Rank>& _Other) restrict(amp,cpu);
explicit extent(int _I) restrict(amp,cpu);
extent(int _I0,  int _I1) restrict(amp,cpu);
extent(int _I0,  int _I1, int _I2) restrict(amp,cpu);
explicit extent(const int _Array[_Rank])restrict(amp,cpu);
```

### Parameters

*_Array*<br/>
An array of `_Rank` integers that is used to create the new `extent` object.

*_I*<br/>
The length of the extent.

*_I0*<br/>
The length of the most significant dimension.

*_I1*<br/>
The length of the next-to-most-significant dimension.

*_I2*<br/>
The length of the least significant dimension.

*_Other*<br/>
An `extent` object on which the new `extent` object is based.

## Remarks

The default constructor initializes an `extent` object that has a rank of three.

If an array is used to construct an `extent` object, the length of the array must match the rank of the `extent` object.

## <a name="operator_mod_eq"></a> operator%=

Calculates the modulus (remainder) of each element in the `extent' when that element is divided by a number.

### Syntax

```cpp
extent<_Rank>& operator%=(int _Rhs) restrict(cpu, direct3d);
```

### Parameters

*_Rhs*<br/>
The number to find the modulus of.

### Return Value

The `extent` object.

## <a name="operator_star_eq"></a> operator*=

Multiplies each element in the `extent' object by the specified number.

### Syntax

```cpp
extent<_Rank>& operator*=(int _Rhs) restrict(amp,cpu);
```

### Parameters

*_Rhs*<br/>
The number to multiply.

### Return Value

The `extent` object.

## <a name="operator_add"></a> operator+

Returns a new `extent` object created by adding the corresponding `index` and `extent` elements.

### Syntax

```cpp
extent<_Rank> operator+(const index<_Rank>& _Rhs) restrict(amp,cpu);
```

### Parameters

*_Rhs*<br/>
The `index` object that contains the elements to add.

### Return Value

The new `extent` object.

## <a name="operator_add_add"></a> operator++

Increments each element of the `extent' object.

### Syntax

```cpp
extent<_Rank>& operator++() restrict(amp,cpu);
extent<_Rank> operator++(int)restrict(amp,cpu);
```

### Return Value

For the prefix operator, the `extent` object (**`*this`**). For the suffix operator, a new `extent` object.

## <a name="operator_add_eq"></a> operator+=

Adds the specified number to each element of the `extent' object.

### Syntax

```cpp
extent<_Rank>& operator+=(const extent<_Rank>& _Rhs) restrict(amp,cpu);
extent<_Rank>& operator+=(const index<_Rank>& _Rhs) restrict(amp,cpu);
extent<_Rank>& operator+=(int _Rhs) restrict(amp,cpu);
```

### Parameters

*_Rhs*<br/>
The number, index, or extent to add.

### Return Value

The resulting `extent` object.

## <a name="operator_min"></a> operator-

Creates a new `extent` object by subtracting each element in the specified `index` object from the corresponding element in this `extent` object.

### Syntax

```cpp
extent<_Rank> operator-(const index<_Rank>& _Rhs) restrict(amp,cpu);
```

### Parameters

*_Rhs*<br/>
The `index` object that contains the elements to subtract.

### Return Value

The new `extent` object.

## <a name="operator_min_min"></a> operator--

Decrements each element in the `extent' object.

### Syntax

```cpp
extent<_Rank>& operator--() restrict(amp,cpu);
extent<_Rank> operator--(int)restrict(amp,cpu);
```

### Return Value

For the prefix operator, the `extent` object (**`*this`**). For the suffix operator, a new `extent` object.

## <a name="operator_div_eq"></a> operator/=

Divides each element in the `extent' object by the specified number.

### Syntax

```cpp
extent<_Rank>& operator/=(int _Rhs) restrict(amp,cpu);
```

### Parameters

*_Rhs*<br/>
The number to divide by.

### Return Value

The `extent` object.

## <a name="operator_min_eq"></a> operator-=

Subtracts the specified number from each element of the `extent' object.

### Syntax

```cpp
extent<_Rank>& operator-=(const extent<_Rank>& _Rhs) restrict(amp,cpu);
extent<_Rank>& operator-=(const index<_Rank>& _Rhs) restrict(amp,cpu);
extent<_Rank>& operator-=(int _Rhs) restrict(amp,cpu);
```

### Parameters

*_Rhs*<br/>
The number to subtract.

### Return Value

The resulting `extent` object.

## <a name="operator_eq"></a> operator=

Copies the contents of another `extent' object into this one.

### Syntax

```cpp
extent<_Rank>& operator=(const extent<_Rank>& _Other) restrict(amp,cpu);
```

### Parameters

*_Other*<br/>
The `extent` object to copy from.

### Return Value

A reference to this `extent` object.

## <a name="operator_at"></a> extent::operator \[\]

Returns the element that's at the specified index.

### Syntax

```cpp
int operator[](unsigned int _Index) const restrict(amp,cpu);
int& operator[](unsigned int _Index) restrict(amp,cpu);
```

### Parameters

*_Index*<br/>
An integer from 0 through the rank minus 1.

### Return Value

The element that's at the specified index.

## <a name="rank_constant"></a> rank

Stores the rank of the `extent' object.

### Syntax

```cpp
static const int rank = _Rank;
```

## <a name="size"></a> size

Returns the total linear size of the `extent` object (in units of elements).

### Syntax

```cpp
unsigned int size() const restrict(amp,cpu);
```

## <a name="tile"></a> tile

Produces a tiled_extent object with the specified tile dimensions.

```cpp
template <int _Dim0>
tiled_extent<_Dim0> tile() const ;

template <int _Dim0, int _Dim1>
tiled_extent<_Dim0, _Dim1> tile() const ;

template <int _Dim0, int _Dim1, int _Dim2>
tiled_extent<_Dim0, _Dim1, _Dim2> tile() const ;
```

### Parameters

*_Dim0*<br/>
The most significant component of the tiled extent.
*_Dim1*<br/>
The next-to-most-significant component of the tiled extent.
*_Dim2*<br/>
The least significant component of the tiled extent.

## See also

[Concurrency Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)
