---
description: "Learn more about: double_2 Class"
title: "double_2 Class"
ms.date: "11/04/2016"
f1_keywords: ["amp_short_vectors/Concurrency::graphics::double_2::set_x", "amp_short_vectors/Concurrency::graphics::double_2::operator+=", "amp_short_vectors/Concurrency::graphics::double_2::operator=", "amp_short_vectors/Concurrency::graphics::double_2::operator/=", "amp_short_vectors/Concurrency::graphics::double_2::operator*=", "amp_short_vectors/Concurrency::graphics::double_2::yx", "amp_short_vectors/Concurrency::graphics::double_2::y", "amp_short_vectors/Concurrency::graphics::double_2::xy", "amp_short_vectors/Concurrency::graphics::double_2::set_xy", "amp_short_vectors/Concurrency::graphics::double_2::get_yx", "amp_short_vectors/Concurrency::graphics::double_2::set_yx", "amp_short_vectors/Concurrency::graphics::double_2::get_xy", "amp_short_vectors/Concurrency::graphics::double_2::operator++", "amp_short_vectors/Concurrency::graphics::double_2::get_x", "amp_short_vectors/Concurrency::graphics::double_2::operator-=", "amp_short_vectors/Concurrency::graphics::double_2::rg", "amp_short_vectors/Concurrency::graphics::double_2::gr", "amp_short_vectors/Concurrency::graphics::double_2::get_y", "amp_short_vectors/Concurrency::graphics::double_2::x", "amp_short_vectors/Concurrency::graphics::double_2::r", "amp_short_vectors/Concurrency::graphics::double_2::operator--", "amp_short_vectors/Concurrency::graphics::double_2", "amp_short_vectors/Concurrency::graphics::double_2::operator-", "amp_short_vectors/Concurrency::graphics::double_2::g", "amp_short_vectors/Concurrency::graphics::double_2::set_y"]
ms.assetid: c19c2d21-3cbf-4ce5-b460-3b8253688f82
---
# double_2 Class

Represent a short vector of 2 double's.

## Syntax

```cpp
class double_2;
```

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|`value_type`||

### Public Constructors

|Name|Description|
|----------|-----------------|
|[double_2 Constructor](#ctor)|Overloaded. Default constructor, initializes all elements with 0.|

### Public Methods

|Name|Description|
|----------|-----------------|
|double_2::get_x||
|double_2::get_xy||
|double_2::get_y||
|double_2::get_yx||
|double_2::ref_g||
|double_2::ref_r||
|double_2::ref_x||
|double_2::ref_y||
|double_2::set_x||
|double_2::set_xy||
|double_2::set_y||
|double_2::set_yx||

### Public Operators

|Name|Description|
|----------|-----------------|
|double_2::operator-||
|double_2::operator--||
|double_2::operator*=||
|double_2::operator/=||
|double_2::operator++||
|double_2::operator+=||
|double_2::operator=||
|double_2::operator-=||

### Public Constants

|Name|Description|
|----------|-----------------|
|double_2::size Constant||

### Public Data Members

|Name|Description|
|----------|-----------------|
|double_2::g||
|double_2::gr||
|double_2::r||
|double_2::rg||
|double_2::x||
|double_2::xy||
|double_2::y||
|double_2::yx||

## Inheritance Hierarchy

`double_2`

## Requirements

**Header:** amp_short_vectors.h

**Namespace:** Concurrency::graphics

## <a name="ctor"></a> double_2

Default constructor, initializes all elements with 0.

```cpp
double_2() restrict(amp,
    cpu);

double_2(
    double _V0,
    double _V1) restrict(amp,
    cpu);

double_2(
    double _V) restrict(amp,
    cpu);

double_2(
    const double_2& _Other) restrict(amp,
    cpu);

explicit inline double_2(
    const uint_2& _Other) restrict(amp,
    cpu);

explicit inline double_2(
    const int_2& _Other) restrict(amp,
    cpu);

explicit inline double_2(
    const float_2& _Other) restrict(amp,
    cpu);

explicit inline double_2(
    const unorm_2& _Other) restrict(amp,
    cpu);

explicit inline double_2(
    const norm_2& _Other) restrict(amp,
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

## <a name="double_2__size"></a> size

```cpp
static const int size = 2;
```

## See also

[Concurrency::graphics Namespace](concurrency-graphics-namespace.md)
