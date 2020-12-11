---
description: "Learn more about: norm_2 Class"
title: "norm_2 Class"
ms.date: "11/04/2016"
f1_keywords: ["amp_short_vectors/Concurrency::graphics::norm_2::set_x", "amp_short_vectors/Concurrency::graphics::norm_2::set_xy", "amp_short_vectors/Concurrency::graphics::norm_2::g", "amp_short_vectors/Concurrency::graphics::norm_2::get_yx", "amp_short_vectors/Concurrency::graphics::norm_2::set_yx", "amp_short_vectors/Concurrency::graphics::norm_2::operator-=", "amp_short_vectors/Concurrency::graphics::norm_2::operator/=", "amp_short_vectors/Concurrency::graphics::norm_2::operator*=", "amp_short_vectors/Concurrency::graphics::norm_2::yx", "amp_short_vectors/Concurrency::graphics::norm_2::y", "amp_short_vectors/Concurrency::graphics::norm_2::xy", "amp_short_vectors/Concurrency::graphics::norm_2::operator++", "amp_short_vectors/Concurrency::graphics::norm_2::operator-", "amp_short_vectors/Concurrency::graphics::norm_2::rg", "amp_short_vectors/Concurrency::graphics::norm_2::operator=", "amp_short_vectors/Concurrency::graphics::norm_2::get_y", "amp_short_vectors/Concurrency::graphics::norm_2::r", "amp_short_vectors/Concurrency::graphics::norm_2::get_x", "amp_short_vectors/Concurrency::graphics::norm_2::get_xy", "amp_short_vectors/Concurrency::graphics::norm_2::gr", "amp_short_vectors/Concurrency::graphics::norm_2::set_y", "amp_short_vectors/Concurrency::graphics::norm_2::x", "amp_short_vectors/Concurrency::graphics::norm_2::operator+=", "amp_short_vectors/Concurrency::graphics::norm_2", "amp_short_vectors/Concurrency::graphics::norm_2::operator--"]
ms.assetid: 80703f9b-61f4-414a-93fd-bc774f7d3393
---
# norm_2 Class

Represents a short vector of two normal numbers.

## Syntax

```cpp
class norm_2;
```

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|`value_type`||

### Public Constructors

|Name|Description|
|----------|-----------------|
|[norm_2 Constructor](#ctor)|Overloaded. Default constructor, initializes all elements with 0.|

### Public Methods

|Name|Description|
|----------|-----------------|
|norm_2::get_x||
|norm_2::get_xy||
|norm_2::get_y||
|norm_2::get_yx||
|norm_2::ref_g||
|norm_2::ref_r||
|norm_2::ref_x||
|norm_2::ref_y||
|norm_2::set_x||
|norm_2::set_xy||
|norm_2::set_y||
|norm_2::set_yx||

### Public Operators

|Name|Description|
|----------|-----------------|
|norm_2::operator-||
|norm_2::operator--||
|norm_2::operator*=||
|norm_2::operator/=||
|norm_2::operator++||
|norm_2::operator+=||
|norm_2::operator=||
|norm_2::operator-=||

### Public Constants

|Name|Description|
|----------|-----------------|
|[size Constant](#norm_2__size)||

### Public Data Members

|Name|Description|
|----------|-----------------|
|norm_2::g||
|norm_2::gr||
|norm_2::r||
|norm_2::rg||
|norm_2::x||
|norm_2::xy||
|norm_2::y||
|norm_2::yx||

## Inheritance Hierarchy

`norm_2`

## Requirements

**Header:** amp_short_vectors.h

**Namespace:** Concurrency::graphics

## <a name="ctor"></a> norm_2

Default constructor, initializes all elements with 0.

```cpp
norm_2() restrict(amp,
    cpu);

norm_2(
    norm _V0,
    norm _V1) restrict(amp,
    cpu);

norm_2(
    float _V0,
    float _V1) restrict(amp,
    cpu);

norm_2(
    unorm _V0,
    unorm _V1) restrict(amp,
    cpu);

norm_2(
    norm _V) restrict(amp,
    cpu);

explicit norm_2(
    float _V) restrict(amp,
    cpu);

norm_2(
    const norm_2& _Other) restrict(amp,
    cpu);

explicit inline norm_2(
    const uint_2& _Other) restrict(amp,
    cpu);

explicit inline norm_2(
    const int_2& _Other) restrict(amp,
    cpu);

explicit inline norm_2(
    const float_2& _Other) restrict(amp,
    cpu);

explicit inline norm_2(
    const unorm_2& _Other) restrict(amp,
    cpu);

explicit inline norm_2(
    const double_2& _Other) restrict(amp,
    cpu);
```

### Parameters

*_V0*<br/>
The value to initialize element 0.

*_V1*<br/>
The value to initialize element 1.

*_V*<br/>
The value for initialization.

*_Other*<br/>
The object used to initialize.

## <a name="norm_2__size"></a> size

```cpp
static const int size = 2;
```

## See also

[Concurrency::graphics Namespace](concurrency-graphics-namespace.md)
