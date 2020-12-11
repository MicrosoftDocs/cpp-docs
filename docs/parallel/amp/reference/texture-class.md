---
description: "Learn more about: texture Class"
title: "texture Class"
ms.date: "11/04/2016"
f1_keywords: ["texture", "AMP_GRAPHICS/texture", "AMP_GRAPHICS/concurrency::graphics::texture::texture", "AMP_GRAPHICS/concurrency::graphics::texture::copy_to", "AMP_GRAPHICS/concurrency::graphics::texture::data", "AMP_GRAPHICS/concurrency::graphics::texture::get", "AMP_GRAPHICS/concurrency::graphics::texture::get_associated_accelerator_view", "AMP_GRAPHICS/concurrency::graphics::texture::get_depth_pitch", "AMP_GRAPHICS/concurrency::graphics::texture::get_row_pitch", "AMP_GRAPHICS/concurrency::graphics::texture::set", "AMP_GRAPHICS/concurrency::graphics::texture::rank", "AMP_GRAPHICS/concurrency::graphics::texture::associated_accelerator_view", "AMP_GRAPHICS/concurrency::graphics::texture::depth_pitch", "AMP_GRAPHICS/concurrency::graphics::texture::row_pitch"]
ms.assetid: 16e85d4d-e80a-474a-995d-8bf63fbdf34c
---
# texture Class

A texture is a data aggregate on an `accelerator_view` in the extent domain. It is a collection of variables, one for each element in an extent domain. Each variable holds a value corresponding to C++ primitive type ( **`unsigned int`**, **`int`**, **`float`**, **`double`**), a scalar type ( `norm`, or `unorm`), or a short vector type.

## Syntax

```cpp
template <typename value_type,  int _Rank>
class texture;
```

### Parameters

*value_type*<br/>
The type of the elements in the texture.

*_Rank*<br/>
The rank of the texture.

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|`scalar_type`|Scalar types.|
|`value_type`|Value types.|

### Public Constructors

|Name|Description|
|----------|-----------------|
|[texture Constructor](#ctor)|Initializes a new instance of the `texture` class.|
|[~texture Destructor](#ctor)|Destroys the `texture` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[copy_to](#copy_to)|Copies the `texture` object to the destination, by doing a deep copy.|
|[data](#data)|Returns a CPU pointer to the raw data of this texture.|
|[get](#get)|Returns the value of the element at the specified index.|
|[get_associated_accelerator_view](#get_associated_accelerator_view)|Returns the [accelerator_view](accelerator-view-class.md) that is the preferred target for this texture to be copied to.|
|[get_depth_pitch](#get_depth_pitch)|Returns the number of bytes between each depth slice in a 3D staging texture on the CPU.|
|[get_row_pitch](#get_row_pitch)|Returns the number of bytes between each row in a 2D or 3D staging texture on the CPU.|
|[set](#set)|Sets the value of the element at the specified index.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[operator()](#operator_call)|Returns the element value that is specified by the parameters.|
|[operator\[\]](#operator_at)|Returns the element that is at the specified index.|
|[operator=](#operator_eq)|Copies the specified [texture](texture-class.md) object to this one.|

### Public Constants

|Name|Description|
|----------|-----------------|
|[rank Constant](#rank)|Gets the rank of the `texture` object.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[associated_accelerator_view](#associated_accelerator_view)|Gets the [accelerator_view](accelerator-view-class.md) that is the preferred target for this texture to be copied to.|
|[depth_pitch](#depth_pitch)|Gets the number of bytes between each depth slice in a 3D staging texture on the CPU.|
|[row_pitch](#row_pitch)|Gets the number of bytes between each row in a 2D or 3D staging texture on the CPU.|

## Inheritance Hierarchy

`_Texture_base`

`texture`

## Requirements

**Header:** amp_graphics.h

**Namespace:** Concurrency::graphics

## <a name="dtor"></a> ~texture

Destroys the `texture` object.

```cpp
~texture() restrict(cpu);
```

## <a name="associated_accelerator_view"></a> associated_accelerator_view

Gets the [accelerator_view](accelerator-view-class.md) that is the preferred target for this texture to be copied to.

```cpp
__declspec(property(get= get_associated_accelerator_view)) Concurrency::accelerator_view associated_accelerator_view;
```

## <a name="copy_to"></a> copy_to

Copies the `texture` object to the destination, by doing a deep copy.

```cpp
void copy_to(texture& _Dest) const;
void copy_to(writeonly_texture_view<value_type, _Rank>& _Dest) const;
```

### Parameters

*_Dest*<br/>
The object to copy to.

*_Rank*<br/>
The rank of the texture.

*value_type*<br/>
The type of the elements in the texture.

## <a name="data"></a> data

Returns a CPU pointer to the raw data of this texture.

```cpp
void* data() restrict(cpu);

const void* data() const restrict(cpu);
```

### Return Value

A pointer to the raw data of the texture.

## <a name="depth_pitch"></a> depth_pitch

Gets the number of bytes between each depth slice in a 3D staging texture on the CPU.

```cpp
__declspec(property(get= get_depth_pitch)) unsigned int depth_pitch;
```

## <a name="get"></a> get

Returns the value of the element at the specified index.

```cpp
const value_type get(const index<_Rank>& _Index) const restrict(amp);
```

### Parameters

*_Index*<br/>
The index of the element.

### Return Value

The value of the element at the specified index.

## <a name="get_associated_accelerator_view"></a> get_associated_accelerator_view

Returns the accelerator_view that is the preferred target for this texture to be copied to.

```cpp
Concurrency::accelerator_view get_associated_accelerator_view() const restrict(cpu);
```

### Return Value

The [accelerator_view](accelerator-view-class.md) that is the preferred target for this texture to be copied to.

## <a name="get_depth_pitch"></a> get_depth_pitch

Returns the number of bytes between each depth slice in a 3D staging texture on the CPU.

```cpp
unsigned int get_depth_pitch() const restrict(cpu);
```

### Return Value

The number of bytes between each depth slice in a 3D staging texture on the CPU.

## <a name="get_row_pitch"></a> get_row_pitch

Returns the number of bytes between each row in a 2-dimensional staging texture, or between each row of a depth slice in 3-dimensional staging texture.

```cpp
unsigned int get_row_pitch() const restrict(cpu);
```

### Return Value

The number of bytes between each row in a 2-dimensional staging texture, or between each row of a depth slice in 3-dimensional staging texture.

## <a name="operator_call"></a> operator()

Returns the element value that is specified by the parameters.

```cpp
const value_type operator() (
    const index<_Rank>& _Index) const restrict(amp);

const value_type operator() (
    int _I0) const restrict(amp);

const value_type operator() (
    int _I0,
    int _I1) const restrict(amp);

const value_type operator() (
    int _I0,
    int _I1,
    int _I2) const restrict(amp);
```

### Parameters

*_Index*<br/>
The index.

*_I0*<br/>
The most-significant component of the index.

*_I1*<br/>
The next-to-most-significant component of the index.

*_I2*<br/>
The least-significant component of the index.

*_Rank*<br/>
The rank of the index.

### Return Value

The element value that is specified by the parameters.

## <a name="operator_at"></a> operator[]

Returns the element that is at the specified index.

```cpp
const value_type operator[] (const index<_Rank>& _Index) const restrict(amp);

const value_type operator[] (int _I0) const restrict(amp);
```

### Parameters

*_Index*<br/>
The index.

*_I0*<br/>
The index.

### Return Value

The element that is at the specified index.

## <a name="operator_eq"></a> operator=

Copies the specified [texture](texture-class.md) object to this one.

```cpp
texture& operator= (
    const texture& _Other);

texture& operator= (
    texture<value_type, _Rank>&& _Other);
```

### Parameters

*_Other*<br/>
The `texture` object to copy from.

### Return Value

A reference to this `texture` object.

## <a name="rank"></a> rank

Gets the rank of the `texture` object.

```cpp
static const int rank = _Rank;
```

## <a name="row_pitch"></a> row_pitch

Gets the number of bytes between each row in a 2D or 3D staging texture on the CPU.

```cpp
__declspec(property(get= get_row_pitch)) unsigned int row_pitch;
```

## <a name="set"></a> set

Sets the value of the element at the specified index.

```cpp
void set(
    const index<_Rank>& _Index,
    const value_type& value) restrict(amp);
```

### Parameters

*_Index*<br/>
The index of the element.

*_Rank*<br/>
The rank of the index.

*value*<br/>
The new value of the element.

## <a name="ctor"></a> texture

Initializes a new instance of the `texture` class.

```cpp
texture(const Concurrency::extent<_Rank>& _Ext) restrict(cpu);

texture(int _E0) restrict(cpu);

texture(int _E0, int _E1) restrict(cpu);

texture(int _E0, int _E1, int _E2) restrict(cpu);

texture(
    const Concurrency::extent<_Rank>& _Ext,
    const Concurrency::accelerator_view& _Av) restrict(cpu);

texture(
    int _E0,
    const Concurrency::accelerator_view& _Av) restrict(cpu);

texture(
    int _E0,
    int _E1,
    const Concurrency::accelerator_view& _Av) restrict(cpu);

texture(
    int _E0,
    int _E1,
    int _E2,
    const Concurrency::accelerator_view& _Av) restrict(cpu);

template<typename _Input_iterator>
texture(
    const Concurrency::extent<_Rank>& _Ext,
    _Input_iterator _Src_first,
    _Input_iterator _Src_last) restrict(cpu);

template<typename _Input_iterator>
texture(
    int _E0, _Input_iterator _Src_first, _Input_iterator _Src_last) restrict(cpu);

template<typename _Input_iterator>
texture(
    int _E0,
    int _E1,
    _Input_iterator _Src_first,
    _Input_iterator _Src_last) restrict(cpu);

template<typename _Input_iterator>
texture(
    int _E0,
    int _E1,
    int _E2,
    _Input_iterator _Src_first,
    _Input_iterator _Src_last) restrict(cpu);

template<typename _Input_iterator>
texture(
    const Concurrency::extent<_Rank>& _Ext,
    _Input_iterator _Src_first,
    _Input_iterator _Src_last,
    const Concurrency::accelerator_view& _Av) restrict(cpu);

template<typename _Input_iterator>
texture(
    int _E0,
    _Input_iterator _Src_first,
    _Input_iterator _Src_last,
    const Concurrency::accelerator_view& _Av) restrict(cpu);

template<typename _Input_iterator>
texture(
    int _E0,
    int _E1,
    _Input_iterator _Src_first,
    _Input_iterator _Src_last,
    const Concurrency::accelerator_view& _Av) restrict(cpu);

template<typename _Input_iterator>
texture(
    int _E0,
    int _E1,
    int _E2,
    _Input_iterator _Src_first,
    _Input_iterator _Src_last,
    const Concurrency::accelerator_view& _Av) restrict(cpu))  ;

texture(
    int _E0,
    unsigned int _Bits_per_scalar_element) restrict(cpu);

texture(
    int _E0,
    int _E1,
    unsigned int _Bits_per_scalar_element) restrict(cpu);

texture(
    int _E0,
    int _E1,
    int _E2,
    unsigned int _Bits_per_scalar_element) restrict(cpu);

texture(
    const Concurrency::extent<_Rank>& _Ext,
    unsigned int _Bits_per_scalar_element,
    const Concurrency::accelerator_view& _Av) restrict(cpu);

texture(
    int _E0,
    unsigned int _Bits_per_scalar_element,
    const Concurrency::accelerator_view& _Av)  ;

texture(
    int _E0,
    int _E1,
    unsigned int _Bits_per_scalar_element,
    const Concurrency::accelerator_view& _Av) restrict(cpu);

texture(
    int _E0,
    int _E1,
    int _E2,
    unsigned int _Bits_per_scalar_element,
    const Concurrency::accelerator_view& _Av) restrict(cpu);

texture(
    const Concurrency::extent<_Rank>& _Ext,
    _In_ void* _Source,
    unsigned int _Src_byte_size,
    unsigned int _Bits_per_scalar_element) restrict(cpu);

texture(
    int _E0,
    _In_ void* _Source,
    unsigned int _Src_byte_size,
    unsigned int _Bits_per_scalar_element) restrict(cpu);

texture(
    int _E0,
    int _E1,
    _In_ void* _Source,
    unsigned int _Src_byte_size,
    unsigned int _Bits_per_scalar_element) restrict(cpu);

texture(
    int _E0,
    int _E1,
    int _E2,
    _In_ void* _Source,
    unsigned int _Src_byte_size,
    unsigned int _Bits_per_scalar_element) restrict(cpu);

texture(
    const Concurrency::extent<_Rank>& _Ext,
    _In_ void* _Source,
    unsigned int _Src_byte_size,
    unsigned int _Bits_per_scalar_element,
    const Concurrency::accelerator_view& _Av)  ;

texture(
    int _E0,
    _In_ void* _Source,
    unsigned int _Src_byte_size,
    unsigned int _Bits_per_scalar_element,
    const Concurrency::accelerator_view& _Av) restrict(cpu);

texture(
    int _E0,
    int _E1,
    _In_ void* _Source,
    unsigned int _Src_byte_size,
    unsigned int _Bits_per_scalar_element,
    const Concurrency::accelerator_view& _Av) restrict(cpu);

texture(
    int _E0,
    int _E1,
    int _E2,
    _In_ void* _Source,
    unsigned int _Src_byte_size,
    unsigned int _Bits_per_scalar_element,
    const Concurrency::accelerator_view& _Av) restrict(cpu);

texture(
    const texture& _Src,
    const Concurrency::accelerator_view& _Acc_view);

texture(
    texture&& _Other);

texture(
    const Concurrency::extent<_Rank>& _Ext,
    unsigned int _Bits_per_scalar_element,
    const Concurrency::accelerator_view& _Av);

texture(
    const texture& _Src);
```

### Parameters

*_Acc_view*<br/>
The [accelerator_view](accelerator-view-class.md) that specifies the location of the texture.

*_Av*<br/>
The [accelerator_view](accelerator-view-class.md) that specifies the location of the texture.

*_Associated_av*<br/>
An accelerator_view that specifies the preferred target for copies to or from this texture.

*_Bits_per_scalar_element*<br/>
The number of bits per each scalar element in the underlying scalar type of the texture. In general, supported value are 8, 16, 32, and 64. If 0 is specified, the number of bits is the same as the underlying scalar_type. 64 is only valid for double-based textures.

*_Ext*<br/>
The extent in each dimension of the texture.

*_E0*<br/>
The most significant component of the texture.

*_E1*<br/>
The next-to-most-significant component of the texture.

*_E2*<br/>
The least significant component of the extent of the texture.

*_Input_iterator*<br/>
The type of the input iterator.

*_Mipmap_levels*<br/>
The number of mipmap levels in the underlying texture. If 0 is specified, the texture will have the full range of mipmap levels down to the smallest possible size for the specified extent.

*_Rank*<br/>
The rank of the extent.

*_Source*<br/>
A pointer to a host buffer.

*_Src*<br/>
To texture to copy.

*_Src_byte_size*<br/>
The number of bytes in the source buffer.

*_Src_first*<br/>
A beginning iterator into the source container.

*_Src_last*<br/>
An ending iterator into the source container.

*_Other*<br/>
Other data source.

*_Rank*<br/>
The rank of the section.

## See also

[Concurrency::graphics Namespace](concurrency-graphics-namespace.md)
