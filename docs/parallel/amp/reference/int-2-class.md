---
description: "Learn more about: int_2 Class"
title: "int_2 Class"
ms.date: "11/04/2016"
f1_keywords: ["amp_short_vectors/Concurrency::graphics::int_2::y", "amp_short_vectors/Concurrency::graphics::int_2::set_x", "amp_short_vectors/Concurrency::graphics::int_2::set_y", "amp_short_vectors/Concurrency::graphics::int_2::get_yx", "amp_short_vectors/Concurrency::graphics::int_2::operator++", "amp_short_vectors/Concurrency::graphics::int_2::x", "amp_short_vectors/Concurrency::graphics::int_2::set_yx", "amp_short_vectors/Concurrency::graphics::int_2::operator/=", "amp_short_vectors/Concurrency::graphics::int_2::get_y", "amp_short_vectors/Concurrency::graphics::int_2::gr", "amp_short_vectors/Concurrency::graphics::int_2::operator*=", "amp_short_vectors/Concurrency::graphics::int_2::r", "amp_short_vectors/Concurrency::graphics::int_2::get_xy", "amp_short_vectors/Concurrency::graphics::int_2::operator=", "amp_short_vectors/Concurrency::graphics::int_2::g", "amp_short_vectors/Concurrency::graphics::int_2::rg", "amp_short_vectors/Concurrency::graphics::int_2::xy", "amp_short_vectors/Concurrency::graphics::int_2::operator-=", "amp_short_vectors/Concurrency::graphics::int_2::get_x", "amp_short_vectors/Concurrency::graphics::int_2::yx", "amp_short_vectors/Concurrency::graphics::int_2", "amp_short_vectors/Concurrency::graphics::int_2::operator-", "amp_short_vectors/Concurrency::graphics::int_2::set_xy", "amp_short_vectors/Concurrency::graphics::int_2::operator+=", "amp_short_vectors/Concurrency::graphics::int_2::operator--"]
ms.assetid: 258b02e9-f1ee-46c2-8edd-dc9f69184846
---
# int_2 Class

Represents a short vector of two integers.

## Syntax

```cpp
class int_2;
```

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|`value_type`||

### Public Constructors

|Name|Description|
|----------|-----------------|
|[int_2 Constructor](#ctor)|Overloaded. Default constructor, initializes all elements with 0.|

### Public Methods

|Name|Description|
|----------|-----------------|
|int_2::get_x||
|int_2::get_xy||
|int_2::get_y||
|int_2::get_yx||
|int_2::ref_g||
|int_2::ref_r||
|int_2::ref_x||
|int_2::ref_y||
|int_2::set_x||
|int_2::set_xy||
|int_2::set_y||
|int_2::set_yx||

### Public Operators

|Name|Description|
|----------|-----------------|
|int_2::operator-||
|int_2::operator--||
|int_2::operator%=||
|int_2::operator&=||
|int_2::operator*=||
|int_2::operator/=||
|int_2::operator^=||
|int_2::operator&#124;=||
|int_2::operator~||
|int_2::operator++||
|int_2::operator+=||
|int_2::operator<\<=||
|int_2::operator=||
|int_2::operator-=||
|int_2::operator>>=||

### Public Constants

|Name|Description|
|----------|-----------------|
|[size Constant](#int_2__size)||

### Public Data Members

|Name|Description|
|----------|-----------------|
|int_2::g||
|int_2::gr||
|int_2::r||
|int_2::rg||
|int_2::x||
|int_2::xy||
|int_2::y||
|int_2::yx||

## Inheritance Hierarchy

`int_2`

## Requirements

**Header:** amp_short_vectors.h

**Namespace:** Concurrency::graphics

## <a name="ctor"></a> int_2

Default constructor, initializes all elements with 0.

```cpp
int_2() restrict(amp,
    cpu);

int_2(
    int _V0,
    int _V1) restrict(amp,
    cpu);

int_2(
    int _V) restrict(amp,
    cpu);

int_2(
    const int_2& _Other) restrict(amp,
    cpu);

explicit inline int_2(
    const uint_2& _Other) restrict(amp,
    cpu);

explicit inline int_2(
    const float_2& _Other) restrict(amp,
    cpu);

explicit inline int_2(
    const unorm_2& _Other) restrict(amp,
    cpu);

explicit inline int_2(
    const norm_2& _Other) restrict(amp,
    cpu);

explicit inline int_2(
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

## <a name="int_2__size"></a> size

```cpp
static const int size = 2;
```

## See also

[Concurrency::graphics Namespace](concurrency-graphics-namespace.md)
