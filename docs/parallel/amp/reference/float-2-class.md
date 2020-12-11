---
description: "Learn more about: float_2 Class"
title: "float_2 Class"
ms.date: "11/04/2016"
f1_keywords: ["amp_short_vectors/Concurrency::graphics::float_2::yx", "amp_short_vectors/Concurrency::graphics::float_2::operator-=", "amp_short_vectors/Concurrency::graphics::float_2::operator++", "amp_short_vectors/Concurrency::graphics::float_2::operator-", "amp_short_vectors/Concurrency::graphics::float_2::r", "amp_short_vectors/Concurrency::graphics::float_2::get_yx", "amp_short_vectors/Concurrency::graphics::float_2::get_xy", "amp_short_vectors/Concurrency::graphics::float_2::operator/=", "amp_short_vectors/Concurrency::graphics::float_2::set_yx", "amp_short_vectors/Concurrency::graphics::float_2::x", "amp_short_vectors/Concurrency::graphics::float_2::get_y", "amp_short_vectors/Concurrency::graphics::float_2::operator+=", "amp_short_vectors/Concurrency::graphics::float_2::gr", "amp_short_vectors/Concurrency::graphics::float_2::operator=", "amp_short_vectors/Concurrency::graphics::float_2::set_x", "amp_short_vectors/Concurrency::graphics::float_2::operator--", "amp_short_vectors/Concurrency::graphics::float_2::get_x", "amp_short_vectors/Concurrency::graphics::float_2::operator*=", "amp_short_vectors/Concurrency::graphics::float_2::rg", "amp_short_vectors/Concurrency::graphics::float_2::set_xy", "amp_short_vectors/Concurrency::graphics::float_2::xy", "amp_short_vectors/Concurrency::graphics::float_2", "amp_short_vectors/Concurrency::graphics::float_2::set_y", "amp_short_vectors/Concurrency::graphics::float_2::y", "amp_short_vectors/Concurrency::graphics::float_2::g"]
ms.assetid: b3ebd48e-f8c8-4f00-a640-357f702f0cae
---
# float_2 Class

Represents a short vector of two floats.

## Syntax

```cpp
class float_2;
```

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|`value_type`||

### Public Constructors

|Name|Description|
|----------|-----------------|
|[float_2 Constructor](#ctor)|Overloaded. Default constructor, initializes all elements with 0.|

### Public Methods

|Name|Description|
|----------|-----------------|
|float_2::get_x||
|float_2::get_xy||
|float_2::get_y||
|float_2::get_yx||
|float_2::ref_g||
|float_2::ref_r||
|float_2::ref_x||
|float_2::ref_y||
|float_2::set_x||
|float_2::set_xy||
|float_2::set_y||
|float_2::set_yx||

### Public Operators

|Name|Description|
|----------|-----------------|
|float_2::operator-||
|float_2::operator--||
|float_2::operator*=||
|float_2::operator/=||
|float_2::operator++||
|float_2::operator+=||
|float_2::operator=||
|float_2::operator-=||

### Public Constants

|Name|Description|
|----------|-----------------|
|[size Constant](#float_2__size)||

### Public Data Members

|Name|Description|
|----------|-----------------|
|float_2::g||
|float_2::gr||
|float_2::r||
|float_2::rg||
|float_2::x||
|float_2::xy||
|float_2::y||
|float_2::yx||

## Inheritance Hierarchy

`float_2`

## Requirements

**Header:** amp_short_vectors.h

**Namespace:** Concurrency::graphics

## <a name="ctor"></a> float_2

Default constructor, initializes all elements with 0.

```cpp
float_2() restrict(amp,
    cpu);

float_2(
    float _V0,
    float _V1) restrict(amp,
    cpu);

float_2(
    float _V) restrict(amp,
    cpu);

float_2(
    const float_2& _Other) restrict(amp,
    cpu);

explicit inline float_2(
    const uint_2& _Other) restrict(amp,
    cpu);

explicit inline float_2(
    const int_2& _Other) restrict(amp,
    cpu);

explicit inline float_2(
    const unorm_2& _Other) restrict(amp,
    cpu);

explicit inline float_2(
    const norm_2& _Other) restrict(amp,
    cpu);

explicit inline float_2(
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

## <a name="float_2__size"></a> size

```cpp
static const int size = 2;
```

## See also

[Concurrency::graphics Namespace](concurrency-graphics-namespace.md)
