---
description: "Learn more about: Concurrency::graphics Namespace"
title: "Concurrency::graphics Namespace"
ms.date: "11/04/2016"
f1_keywords: ["AMP_GRAPHICS/Concurrency"]
ms.assetid: 4529d3b1-d7da-4ffb-82bf-080915e0f23e
---
# Concurrency::graphics Namespace

The graphics namespace provides types and functions that are designed for graphics programming.

## Syntax

```cpp
namespace graphics;
```

## Members

### Namespaces

|Name|Description|
|----------|-----------------|
|[Concurrency::graphics::direct3d Namespace](concurrency-graphics-direct3d-namespace.md)|Provides functions for Direct3D interop.|

### Typedefs

|Name|Description|
|----------|-----------------|
|`uint`|The element type for [uint_2 Class](uint-2-class.md), [uint_3 Class](uint-3-class.md), and [uint_4 Class](uint-4-class.md). Defined as `typedef unsigned int uint;`.|

### Enumerations

|Name|Description|
|----------|-----------------|
|[address_mode Enumeration](concurrency-graphics-namespace-enums.md#address_mode).|Specifies address modes supported for texture sampling.|
|[filter_mode Enumeration](concurrency-graphics-namespace-enums.md#filter_mode)|Specifies filter modes supported for texture sampling.|

### Classes

|Name|Description|
|----------|-----------------|
|[texture Class](texture-class.md)|A texture is a data aggregate on an accelerator_view in the extent domain. It is a collection of variables, one for each element in an extent domain. Each variable holds a value corresponding to C++ primitive type (unsigned int, int, float, double), or scalar type norm, or unorm (defined in concurrency::graphics), or eligible short vector types defined in concurrency::graphics.|
|[writeonly_texture_view Class](writeonly-texture-view-class.md)|A writeonly_texture_view provides writeonly access to a texture.|
|[double_2 Class](double-2-class.md)|Represents a short vector of 2 **`double`** values.|
|[double_3 Class](double-3-class.md)|Represents a short vector of 3 **`double`** values.|
|[double_4 Class](double-4-class.md)|Represents a short vector of 4 **`double`** values.|
|[float_2 Class](float-2-class.md)|Represents a short vector of 2 **`float`** values.|
|[float_3 Class](float-3-class.md)|Represents a short vector of 3 **`float`** values.|
|[float_4 Class](float-4-class.md)|Represents a short vector of 4 **`float`** values.|
|[int_2 Class](int-2-class.md)|Represents a short vector of 2 **`int`** values.|
|[int_3 Class](int-3-class.md)|Represents a short vector of 3 **`int`** values.|
|[int_4 Class](int-4-class.md)|Represents a short vector of 4 **`int`** values.|
|[norm_2 Class](norm-2-class.md)|Represents a short vector of 2 `norm` values.|
|[norm_3 Class](norm-3-class.md)|Represents a short vector of 3 `norm` values.|
|[norm_4 Class](norm-4-class.md)|Represents a short vector of 4 `norm` values.|
|[uint_2 Class](uint-2-class.md)|Represents a short vector of 2 `uint` values.|
|[uint_3 Class](uint-3-class.md)|Represents a short vector of 3 `uint` values.|
|[uint_4 Class](uint-4-class.md)|Represents a short vector of 4 `uint` values.|
|[unorm_2 Class](unorm-2-class.md)|Represents a short vector of 2 `unorm` values.|
|[unorm_3 Class](unorm-3-class.md)|Represents a short vector of 3 `unorm` values.|
|[unorm_4 Class](unorm-4-class.md)|Represents a short vector of 4 `unorm` values.|
|[sampler Class](sampler-class.md)|Represents the sampler configuration used for texture sampling.|
|[short_vector Structure](short-vector-structure.md)|Provides a basic implementation of a short vector of values.|
|[short_vector_traits Structure](short-vector-traits-structure.md)|Provides for retrieval of the length and type of a short vector.|
|[texture_view Class](texture-view-class.md)|Provides read access and write access to a texture.|

### Functions

|Name|Description|
|----------|-----------------|
|[copy](concurrency-graphics-namespace-functions.md#copy)|Overloaded. Copies the contents of the source texture into the destination host buffer.|
|[copy_async](concurrency-graphics-namespace-functions.md#copy_async)|Overloaded. Asynchronously copies the contents of the source texture into the destination host buffer.|

## Requirements

**Header:** amp_graphics.h

**Namespace:** Concurrency

## See also

[Concurrency Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)
