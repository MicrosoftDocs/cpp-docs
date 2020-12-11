---
description: "Learn more about: writeonly_texture_view Class"
title: "writeonly_texture_view Class"
ms.date: "11/04/2016"
f1_keywords: ["writeonly_texture_view", "AMP_GRAPHICS/writeonly_texture_view", "AMP_GRAPHICS/Concurrency::graphics::writeonly_texture_view", "AMP_GRAPHICS/Concurrency::graphics::writeonly_texture_view::set", "AMP_GRAPHICS/Concurrency::graphics::rank Constant"]
ms.assetid: 8d117ad3-0a1c-41ae-b29c-7c95fdd4d04d
---
# writeonly_texture_view Class

Provides writeonly access to a texture.

## Syntax

```cpp
template <
    typename value_type,
    int _Rank
>
class writeonly_texture_view;

template <
    typename value_type,
    int _Rank
>
class writeonly_texture_view<value_type, _Rank> : public details::_Texture_base<value_type, _Rank>;
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
|`scalar_type`||
|`value_type`|The type of the elements in the texture.|

### Public Constructors

|Name|Description|
|----------|-----------------|
|[writeonly_texture_view Constructor](#ctor)|Initializes a new instance of the `writeonly_texture_view` class.|
|[~writeonly_texture_view Destructor](#ctor)|Destroys the `writeonly_texture_view` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[set](#set)|Sets the value of the element at the specified index.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[operator=](#operator_eq)|Copies the specified `writeonly_texture_view` object to this one.|

### Public Constants

|Name|Description|
|----------|-----------------|
|[rank Constant](#rank)|Gets the rank of the `writeonly_texture_view` object.|

## Inheritance Hierarchy

`_Texture_base`

`writeonly_texture_view`

## Requirements

**Header:** amp_graphics.h

**Namespace:** Concurrency::graphics

## <a name="dtor"></a> ~writeonly_texture_view

Destroys the `writeonly_texture_view` object.

```cpp
~writeonly_texture_view() restrict(amp,cpu);
```

## <a name="operator_eq"></a> operator=

Copies the specified `writeonly_texture_view` object to this one.

```cpp
writeonly_texture_view<value_type, _Rank>& operator= (
    const writeonly_texture_view<value_type, _Rank>& _Other) restrict(amp,cpu);
```

### Parameters

*_Other*<br/>
`writeonly_texture_view` object to copy from.

### Return Value

A reference to this `writeonly_texture_view` object.

## <a name="rank"></a> rank

Gets the rank of the `writeonly_texture_view` object.

```cpp
static const int rank = _Rank;
```

## <a name="set"></a> set

Sets the value of the element at the specified index.

```cpp
void set(
    const index<_Rank>& _Index,
    const value_type& value) const restrict(amp);
```

### Parameters

*_Index*<br/>
The index of the element.

*value*<br/>
The new value of the element.

## <a name="ctor"></a> writeonly_texture_view

Initializes a new instance of the `writeonly_texture_view` class.

```cpp
writeonly_texture_view(
    texture<value_type,
    _Rank>& _Src) restrict(amp);

writeonly_texture_view(
    const writeonly_texture_view<value_type,
    _Rank>& _Src) restrict(amp,cpu);
```

### Parameters

*_Rank*<br/>
The rank of the texture.

*value_type*<br/>
The type of the elements in the texture.

*_Src*<br/>
The texture that is used to create the `writeonly_texture_view`.

## See also

[Concurrency::graphics Namespace](concurrency-graphics-namespace.md)
