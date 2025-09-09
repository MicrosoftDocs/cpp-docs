---
title: "Concurrency::graphics::direct3d Namespace"
description: "Learn more about: Concurrency::graphics::direct3d Namespace"
ms.date: 11/04/2016
f1_keywords: ["amp_graphics/Concurrency::graphics::direct3d", "amp_short_vectors/Concurrency::graphics::direct3d"]
---
# Concurrency::graphics::direct3d Namespace

Provides the [get_texture](concurrency-graphics-direct3d-namespace-functions.md#get_texture) and [make_texture](concurrency-graphics-direct3d-namespace-functions.md#make_texture) methods.

## Syntax

```cpp
namespace direct3d;
```

## Members

### Functions

|Name|Description|
|----------|-----------------|
|[get_sampler](concurrency-graphics-direct3d-namespace-functions.md#get_sampler)|Get the Direct3D sampler state interface on the given accelerator view that represents the specified sampler object.|
|[get_texture](concurrency-graphics-direct3d-namespace-functions.md#get_texture)|Gets the Direct3D texture interface underlying the specified [texture](texture-class.md) object.|
|[make_sampler](concurrency-graphics-direct3d-namespace-functions.md#make_sampler)|Create a sampler from a Direct3D sampler state interface pointer.|
|[make_texture](concurrency-graphics-direct3d-namespace-functions.md#make_texture)|Creates a [texture](texture-class.md) object by using the specified parameters.|
|[msad4](concurrency-graphics-direct3d-namespace-functions.md#msad4)|Compares a 4-byte reference value and an 8-byte source value and accumulates a vector of 4 sums.|

## Requirements

**Header:** amp_graphics.h

**Namespace:** Concurrency::graphics

## See also

[Concurrency::graphics Namespace](concurrency-graphics-namespace.md)
