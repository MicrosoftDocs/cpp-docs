---
description: "Learn more about: tiled_extent Class"
title: "tiled_extent Class"
ms.date: "11/04/2016"
f1_keywords: ["tiled_extent", "AMP/tiled_extent", "AMP/Concurrency::tiled_extent::tiled_extent", "AMP/Concurrency::tiled_extent::get_tile_extent", "AMP/Concurrency::tiled_extent::pad", "AMP/Concurrency::tiled_extent::truncate", "AMP/Concurrency::tiled_extent::tile_dim0", "AMP/Concurrency::tiled_extent::tile_dim1", "AMP/Concurrency::tiled_extent::tile_dim2", "AMP/Concurrency::tiled_extent::tile_extent"]
ms.assetid: 671ecaf8-c7b0-4ac8-bbdc-e30bd92da7c0
---
# tiled_extent Class

A `tiled_extent` object is an `extent` object of one to three dimensions that subdivides the extent space into one-, two-, or three-dimensional tiles.

## Syntax

```cpp
template <
    int _Dim0,
    int _Dim1,
    int _Dim2
>
class tiled_extent : public Concurrency::extent<3>;

template <
    int _Dim0,
    int _Dim1
>
class tiled_extent<_Dim0, _Dim1, 0> : public Concurrency::extent<2>;

template <
    int _Dim0
>
class tiled_extent<_Dim0, 0, 0> : public Concurrency::extent<1>;
```

### Parameters

*_Dim0*<br/>
The length of the most significant dimension.

*_Dim1*<br/>
The length of the next-to-most significant dimension.

*_Dim2*<br/>
The length of the least significant dimension.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[tiled_extent Constructor](#ctor)|Initializes a new instance of the `tiled_extent` class.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[get_tile_extent](#get_tile_extent)|Returns an `extent` object  that captures the values of the `tiled_extent` template arguments `_Dim0`, `_Dim1`, and `_Dim2`.|
|[pad](#pad)|Returns a new `tiled_extent` object with extents adjusted up to be evenly divisible by the tile dimensions.|
|[truncate](#truncate)|Returns a new `tiled_extent` object with extents adjusted down to be evenly divisible by the tile dimensions.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[operator=](#operator_eq)|Copies the contents of the specified `tiled_index` object into this one.|

### Public Constants

|Name|Description|
|----------|-----------------|
|[tile_dim0 Constant](#tile_dim0)|Stores the length of the most significant dimension.|
|[tile_dim1 Constant](#tile_dim1)|Stores the length of the next-to-most significant dimension.|
|[tile_dim2 Constant](#tile_dim2)|Stores the length of the least significant dimension.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[tile_extent](#tile_extent)|Gets an `extent` object  that captures the values of the `tiled_extent` template arguments `_Dim0`, `_Dim1`, and `_Dim2`.|

## Inheritance Hierarchy

`extent`

`tiled_extent`

## Requirements

**Header:** amp.h

**Namespace:** Concurrency

## <a name="ctor"> </a> tiled_extent Constructor

Initializes a new instance of the `tiled_extent` class.

### Syntax

```cpp
tiled_extent();

tiled_extent(
    const Concurrency::extent<rank>& _Other );

tiled_extent(
    const tiled_extent& _Other );
```

### Parameters

*_Other*<br/>
The `extent` or `tiled_extent` object to copy.

## <a name="get_tile_extent"> </a> get_tile_extent

Returns an `extent` object that captures the values of the `tiled_extent` template arguments `_Dim0`, `_Dim1`, and `_Dim2`.

### Syntax

```cpp
Concurrency::extent<rank> get_tile_extent() const restrict(amp,cpu);
```

### Return Value

An `extent` object that captures the dimensions of this `tiled_extent` instance.

## <a name="pad"> </a> pad

Returns a new `tiled_extent` object with extents adjusted up to be evenly divisible by the tile dimensions.

### Syntax

```cpp
tiled_extent pad() const;
```

### Return Value

The new `tiled_extent` object, by value.

## <a name="truncate"> </a> truncate

Returns a new `tiled_extent` object with extents adjusted down to be evenly divisible by the tile dimensions.

### Syntax

```cpp
tiled_extent truncate() const;
```

### Return Value

Returns a new `tiled_extent` object with extents adjusted down to be evenly divisible by the tile dimensions.

## <a name="operator_eq"> </a> operator=

Copies the contents of the specified `tiled_index` object into this one.

### Syntax

```cpp
tiled_extent&  operator= (
    const tiled_extent& _Other ) restrict (amp, cpu);
```

### Parameters

*_Other*<br/>
The `tiled_index` object to copy from.

### Return Value

A reference to this `tiled_index` instance.

## <a name="tile_dim0"> </a> tile_dim0

Stores the length of the most significant dimension.

### Syntax

```cpp
static const int tile_dim0 = _Dim0;
```

## <a name="tile_dim1"> </a> tile_dim1

Stores the length of the next-to-most significant dimension.

### Syntax

```cpp
static const int tile_dim1 = _Dim1;
```

## <a name="tile_dim2"> </a> tile_dim2

Stores the length of the least significant dimension.

### Syntax

```cpp
static const int tile_dim2 = _Dim2;
```

## <a name="tile_extent"> </a> tile_extent

Gets an `extent` object that captures the values of the `tiled_extent` template arguments `_Dim0`, `_Dim1`, and `_Dim2`.

### Syntax

```cpp
__declspec(property(get= get_tile_extent)) Concurrency::extent<rank> tile_extent;
```

## See also

[Concurrency Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)
