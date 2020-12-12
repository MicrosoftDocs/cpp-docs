---
description: "Learn more about: short_vector Structure"
title: "short_vector Structure"
ms.date: "11/04/2016"
f1_keywords: ["short_vector", "AMP_SHORT_VECTORS/short_vector", "AMP_SHORT_VECTORS/Concurrency::graphics::short_vector::short_vector Constructor"]
ms.assetid: e4f50b8f-1150-437d-b58c-79c5fb883708
---
# short_vector Structure

short_vector provides metaprogramming definitions which are useful for programming short vectors generically.

## Syntax

```cpp
template<
    typename _Scalar_type,
    int _Size
>
struct short_vector;
template<>
struct short_vector<unsigned int, 1>;
template<>
struct short_vector<unsigned int, 2>;
template<>
struct short_vector<unsigned int, 3>;
template<>
struct short_vector<unsigned int, 4>;
template<>
struct short_vector<int, 1>;
template<>
struct short_vector<int, 2>;
template<>
struct short_vector<int, 3>;
template<>
struct short_vector<int, 4>;
template<>
struct short_vector<float, 1>;
template<>
struct short_vector<float, 2>;
template<>
struct short_vector<float, 3>;
template<>
struct short_vector<float, 4>;
template<>
struct short_vector<unorm, 1>;
template<>
struct short_vector<unorm, 2>;
template<>
struct short_vector<unorm, 3>;
template<>
struct short_vector<unorm, 4>;
template<>
struct short_vector<norm, 1>;
template<>
struct short_vector<norm, 2>;
template<>
struct short_vector<norm, 3>;
template<>
struct short_vector<norm, 4>;
template<>
struct short_vector<double, 1>;
template<>
struct short_vector<double, 2>;
template<>
struct short_vector<double, 3>;
template<>
struct short_vector<double, 4>;
```

### Parameters

*_Scalar_type*<br/>

*_Size*<br/>

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|`type`||

### Public Constructors

|Name|Description|
|----------|-----------------|
|[short_vector::short_vector Constructor](#ctor)||

## Inheritance Hierarchy

`short_vector`

## Requirements

**Header:** amp_short_vectors.h

**Namespace:** Concurrency::graphics

## <a name="ctor"></a> short_vector::short_vector Constructor

```cpp
short_vector();
```

## See also

[Concurrency::graphics Namespace](concurrency-graphics-namespace.md)
