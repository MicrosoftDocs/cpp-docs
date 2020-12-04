---
description: "Learn more about: Concurrency::graphics::direct3d namespace functions"
title: "Concurrency::graphics::direct3d namespace functions"
ms.date: "11/04/2016"
f1_keywords: ["amp_graphics/Concurrency::graphics::direct3d::get_sampler", "amp_graphics/Concurrency::graphics::direct3d::make_sampler", "amp_graphics/Concurrency::graphics::direct3d::make_texture"]
ms.assetid: 11ee1d42-333e-4ae9-95ac-4cf68c06d13d
---
# Concurrency::graphics::direct3d namespace functions

:::row:::
   :::column span="":::
      [`get_sampler`](#get_sampler)\
      [`get_texture`](#get_texture)
   :::column-end:::
   :::column span="":::
      [`make_sampler`](#make_sampler)
   :::column-end:::
   :::column span="":::
      [`make_texture`](#make_texture)
   :::column-end:::
   :::column span="":::
      [`msad4`](#msad4)
   :::column-end:::
:::row-end:::

## <a name="get_sampler"></a> get_sampler

Get the D3D sampler state interface on the given accelerator view that represents the specified sampler object.

```cpp
IUnknown* get_sampler(
    const Concurrency::accelerator_view& _Av,
    const sampler& _Sampler) restrict(amp);
```

### Parameters

*_Av*<br/>
A D3D accelerator view on which the D3D sampler state is to be created.

*_Sampler*<br/>
A sampler object for which the underlying D3D sampler state interface is created.

### Return Value

The IUnknown interface pointer corresponding to the D3D sampler state that represents the given sampler.

## <a name="get_texture"></a> get_texture

Gets the Direct3D texture interface underlying the specified [texture](texture-class.md) object.

```cpp
template<
    typename value_type,
    int _Rank
>
_Ret_ IUnknown *get_texture(
    const texture<value_type, _Rank>& _Texture) restrict(cpu);

template<
    typename value_type,
    int _Rank
>
_Ret_ IUnknown *get_texture(
    const writeonly_texture_view<value_type, _Rank>& _Texture) restrict(cpu);

template<
    typename value_type,
    int _Rank
>
_Ret_ IUnknown *get_texture(
    const texture_view<value_type, _Rank>& _Texture) restrict(cpu);
```

### Parameters

*value_type*<br/>
The element type of the texture.

*_Rank*<br/>
The rank of the texture.

*_Texture*<br/>
A texture or texture view associated with the accelerator_view for which the underlying Direct3D texture interface is returned.

### Return Value

The IUnknown interface pointer corresponding to the Direct3D texture underlying the texture.

## <a name="make_sampler"></a> make_sampler

Create a sampler from a D3D sampler state interface pointer.

```cpp
sampler make_sampler(_In_ IUnknown* _D3D_sampler) restrict(amp);
```

### Parameters

*_D3D_sampler*<br/>
IUnknown interface pointer of the D3D sampler state to create the sampler from.

### Return Value

A sampler represents the provided D3D sampler state.

## <a name="make_texture"></a> make_texture

Creates a [texture](texture-class.md) object by using the specified parameters.

```cpp
template<
    typename value_type,
    int _Rank
>
texture<value_type, _Rank> make_texture(
    const Concurrency::accelerator_view& _Av,
    _In_ IUnknown* _D3D_texture,
    DXGI_FORMAT _View_format = DXGI_FORMAT_UNKNOWN) restrict(cpu);
```

### Parameters

*value_type*<br/>
The type of the elements in the texture.

*_Rank*<br/>
The rank of the texture.

*_Av*<br/>
A D3D accelerator view on which the texture is to be created.

*_D3D_texture*<br/>
IUnknown interface pointer of the D3D texture to create the texture from.

*_View_format*<br/>
The DXGI format to use for views created from this texture. Pass DXGI_FORMAT_UNKNOWN (the default) to derive the format from the underlying format of _D3D_texture and the value_type of this template. The provided format must be compatible with the underlying format of _D3D_texture.

### Return Value

A texture using the provided D3D texture.

## <a name="msad4"></a> msad4

Compares a 4-byte reference value and an 8-byte source value and accumulates a vector of 4 sums. Each sum corresponds to the masked sum of absolute differences of different byte alignments between the reference value and the source value.

```cpp
inline uint4 msad4(
    uint _Reference,
    uint2 _Source,
    uint4 _Accum) restrict(amp);
```

### Parameters

*_Reference*<br/>
The reference array of 4 bytes in one uint value

*_Source*<br/>
The source array of 8 bytes in a vector of two uint values.

*_Accum*<br/>
A vector of 4 values to be added to the masked sum of absolute differences of the different byte alignments between the reference value and the source value.

### Return Value

Returns a vector of 4 sums. Each sum corresponds to the masked sum of absolute differences of different byte alignments between the reference value and the source value.

## Requirements

**Header:** amp_graphics.h

**Namespace:** Concurrency::graphics::direct3d

## See also

[Concurrency::graphics::direct3d Namespace](concurrency-graphics-direct3d-namespace.md)
