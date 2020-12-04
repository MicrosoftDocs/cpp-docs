---
description: "Learn more about: short_vector_traits Structure"
title: "short_vector_traits Structure"
ms.date: "11/04/2016"
f1_keywords: ["short_vector_traits", "AMP_SHORT_VECTORS/short_vector_traits", "AMP_SHORT_VECTORS/Concurrency::graphics::short_vector_traits::short_vector_traits", "AMP_SHORT_VECTORS/Concurrency::graphics::short_vector_traits::size Constant"]
ms.assetid: cd9492da-9e02-4a6e-9d50-b61252cdb460
---
# short_vector_traits Structure

short_vector_traits allows retrieval of the underlying vector length and scalar type of a short vector type or a scalar type

## Syntax

```cpp
template<
    typename T
>
struct short_vector_traits;
template<>
struct short_vector_traits<unsigned int>;
template<>
struct short_vector_traits<uint_2>;
template<>
struct short_vector_traits<uint_3>;
template<>
struct short_vector_traits<uint_4>;
template<>
struct short_vector_traits<int>;
template<>
struct short_vector_traits<int_2>;
template<>
struct short_vector_traits<int_3>;
template<>
struct short_vector_traits<int_4>;
template<>
struct short_vector_traits<float>;
template<>
struct short_vector_traits<float_2>;
template<>
struct short_vector_traits<float_3>;
template<>
struct short_vector_traits<float_4>;
template<>
struct short_vector_traits<unorm>;
template<>
struct short_vector_traits<unorm_2>;
template<>
struct short_vector_traits<unorm_3>;
template<>
struct short_vector_traits<unorm_4>;
template<>
struct short_vector_traits<norm>;
template<>
struct short_vector_traits<norm_2>;
template<>
struct short_vector_traits<norm_3>;
template<>
struct short_vector_traits<norm_4>;
template<>
struct short_vector_traits<double>;
template<>
struct short_vector_traits<double_2>;
template<>
struct short_vector_traits<double_3>;
template<>
struct short_vector_traits<double_4>;
```

### Parameters

`T`

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|`value_type`||

### Public Constructors

|Name|Description|
|----------|-----------------|
|[short_vector_traits::short_vector_traits Constructor](#ctor)||

### Public Constants

|Name|Description|
|----------|-----------------|
|[short_vector_traits::size Constant](#size)||

## Inheritance Hierarchy

`short_vector_traits`

## Requirements

**Header:** amp_short_vectors.h

**Namespace:** Concurrency::graphics

## <a name="ctor"></a> short_vector_traits::short_vector_traits Constructor

```cpp
short_vector_traits();
```

## <a name="size"></a> short_vector_traits::size Constant

```cpp
static int const size = 1;
```

## See also

[Concurrency::graphics Namespace](concurrency-graphics-namespace.md)
