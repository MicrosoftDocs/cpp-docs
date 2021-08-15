---
description: "Learn more about: tiled_index Class"
title: "tiled_index Class"
ms.date: "03/27/2019"
f1_keywords: ["tiled_index", "AMP/tiled_index", "AMP/Concurrency::tiled_index::tiled_index", "AMP/Concurrency::tiled_index::get_tile_extent", "AMP/Concurrency::tiled_index::barrier", "AMP/Concurrency::tiled_index::global", "AMP/Concurrency::tiled_index::local", "AMP/Concurrency::tiled_index::rank", "AMP/Concurrency::tiled_index::tile", "AMP/Concurrency::tiled_index::tile_dim0", "AMP/Concurrency::tiled_index::tile_dim1", "AMP/Concurrency::tiled_index::tile_dim2", "AMP/Concurrency::tiled_index::tile_origin", "AMP/Concurrency::tiled_index::tile_extent"]
helpviewer_keywords: ["tiled_index class"]
ms.assetid: 0ce2ae26-f1bb-4436-b473-a9e1b619bb38
---
# tiled_index Class

Provides an index into a [tiled_extent](tiled-extent-class.md) object. This class has properties to access elements relative to the local tile origin and relative to the global origin. For more information about tiled spaces, see [Using Tiles](../../../parallel/amp/using-tiles.md).

## Syntax

```cpp
template <
    int _Dim0,
    int _Dim1 = 0,
    int _Dim2 = 0
>
class tiled_index : public _Tiled_index_base<3>;

template <
    int _Dim0,
    int _Dim1
>
class tiled_index<_Dim0, _Dim1, 0> : public _Tiled_index_base<2>;

template <
    int _Dim0
>
class tiled_index<_Dim0, 0, 0> : public _Tiled_index_base<1>;
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
|[tiled_index Constructor](#ctor)|Initializes a new instance of the `tile_index` class.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[get_tile_extent](#tiled_index__get_tile_extent)|Returns an [extent](extent-class.md) object that has the values of the `tiled_index` template arguments `_Dim0`, `_Dim1`, and `_Dim2`.|

### Public Constants

|Name|Description|
|----------|-----------------|
|[barrier Constant](#tiled_index__barrier)|Stores a [tile_barrier](tile-barrier-class.md) object that represents a barrier in the current tile of threads.|
|[global Constant](#tiled_index__global)|Stores an [index](index-class.md) object of rank 1, 2, or 3 that represents the global index in a grid object.|
|[local Constant](#tiled_index__local)|Stores an `index` object of rank 1, 2, or 3 that represents the relative index in the current tile of a [tiled_extent](tiled-extent-class.md) object.|
|[rank Constant](#tiled_index__rank)|Stores the rank of the `tiled_index` object.|
|[tile Constant](#tiled_index__tile)|Stores an `index` object of rank 1, 2, or 3 that represents the coordinates of the current tile of a `tiled_extent` object.|
|[tile_dim0 Constant](#tiled_index__tile_dim0)|Stores the length of the most significant dimension.|
|[tile_dim1 Constant](#tiled_index__tile_dim1)|Stores the length of the next-to-most significant dimension.|
|[tile_dim2 Constant](#tiled_index__tile_dim2)|Stores the length of the least significant dimension.|
|[tile_origin Constant](#tiled_index__tile_origin)|Stores an `index` object of rank 1, 2, or 3 that represents the global coordinates of the origin of the current tile in a `tiled_extent` object.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[tile_extent](#tile_extent)|Gets an [extent](extent-class.md) object that has the values of the `tiled_index` template arguments `tiled_index` template arguments `_Dim0`, `_Dim1`, and `_Dim2`.|

## Inheritance Hierarchy

`_Tiled_index_base`

`tiled_index`

## Requirements

**Header:** amp.h

**Namespace:** Concurrency

## <a name="ctor"></a> tiled_index Constructor

Initializes a new instance of the `tiled_index` class.

### Syntax

```cpp
tiled_index(
    const index<rank>& _Global,
    const index<rank>& _Local,
    const index<rank>& _Tile,
    const index<rank>& _Tile_origin,
    const tile_barrier& _Barrier ) restrict(amp,cpu);

tiled_index(
    const tiled_index& _Other ) restrict(amp,cpu);
```

### Parameters

*_Global*<br/>
The global [index](index-class.md) of the constructed `tiled_index`.

*_Local*<br/>
The local [index](index-class.md) of the constructed `tiled_index`

*_Tile*<br/>
The tile [index](index-class.md) of the constructed `tiled_index`

*_Tile_origin*<br/>
The tile origin [index](index-class.md) of the constructed `tiled_index`

*_Barrier*<br/>
The [tile_barrier](tile-barrier-class.md) object of the constructed `tiled_index`.

*_Other*<br/>
The `tile_index` object to be copied to the constructed `tiled_index`.

### Overloads

|Name|Description|
|-|-|
|`tiled_index(const index<rank>& _Global, const index<rank>& _Local, const index<rank>& _Tile, const index<rank>& _Tile_origin, const tile_barrier& _Barrier restrict(amp,cpu);`|Initializes a new instance of the `tile_index` class from the index of the tile in global coordinates and the relative position in the tile in local coordinates. The `_Global` and `_Tile_origin` parameters are computed.|
|`tiled_index(    const tiled_index& _Other) restrict(amp,cpu);`|Initializes a new instance of the `tile_index` class by copying the specified `tiled_index` object.|

## <a name="tiled_index__get_tile_extent"></a> get_tile_extent

Returns an [extent](extent-class.md) object that has the values of the `tiled_index` template arguments `_Dim0`, `_Dim1`, and `_Dim2`.

### Syntax

```cpp
extent<rank> get_tile_extent()restrict(amp,cpu);
```

### Return Value

An `extent` object that has the values of the `tiled_index` template arguments `_Dim0`, `_Dim1`, and `_Dim2`.

## <a name="tiled_index__barrier"></a> barrier

Stores a [tile_barrier](tile-barrier-class.md) object that represents a barrier in the current tile of threads.

### Syntax

```cpp
const tile_barrier barrier;
```

## <a name="tiled_index__global"></a> global

Stores an [index](index-class.md) object of rank 1, 2, or 3 that represents the global index of an object.

### Syntax

```cpp
const index<rank> global;
```

## <a name="tiled_index__local"></a> local

Stores an [index](index-class.md) object of rank 1, 2, or 3 that represents the relative index in the current tile of a [tiled_extent](tiled-extent-class.md) object.

### Syntax

```cpp
const index<rank> local;
```

## <a name="tiled_index__rank"></a> rank

Stores the rank of the `tiled_index` object.

### Syntax

```cpp
static const int rank = _Rank;
```

## <a name="tiled_index__tile"></a> tile

Stores an [index](index-class.md) object of rank 1, 2, or 3 that represents the coordinates of the current tile of a [tiled_extent](tiled-extent-class.md) object.

### Syntax

```cpp
const index<rank> tile;
```

## <a name="tiled_index__tile_dim0"></a> tile_dim0

Stores the length of the most significant dimension.

### Syntax

```cpp
static const int tile_dim0 = _Dim0;
```

## <a name="tiled_index__tile_dim1"></a> tile_dim1

Stores the length of the next-to-most significant dimension.

### Syntax

```cpp
static const int tile_dim1 = _Dim1;
```

## <a name="tiled_index__tile_dim2"></a> tile_dim2

Stores the length of the least significant dimension.

### Syntax

```cpp
static const int tile_dim2 = _Dim2;
```

## <a name="tiled_index__tile_origin"></a> tile_origin

Stores an [index](index-class.md) object of rank 1, 2, or 3 that represents the global coordinates of the origin of the current tile within a [tiled_extent](tiled-extent-class.md) object.

### Syntax

```cpp
const index<rank> tile_origin
```

## <a name="tile_extent"></a> tile_extent

Gets an [extent](extent-class.md) object that has the values of the `tiled_index` template arguments `tiled_index` template arguments `_Dim0`, `_Dim1`, and `_Dim2`.

### Syntax

```cpp
__declspec(property(get= get_tile_extent)) extent<rank> tile_extent;
```

## See also

[Concurrency Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)
