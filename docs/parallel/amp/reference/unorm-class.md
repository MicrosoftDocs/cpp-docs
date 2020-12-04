---
description: "Learn more about: unorm Class"
title: "unorm Class"
ms.date: "11/04/2016"
f1_keywords: ["unorm", "AMP_SHORT_VECTORS/unorm", "AMP_SHORT_VECTORS/Concurrency::graphics::unorm Constructor"]
ms.assetid: bc30bd20-6452-4d5f-9158-3b11c4c16ed2
---
# unorm Class

Represent a unorm number. Each element is a floating point number in the range of [0.0f, 1.0f].

## Syntax

```cpp
class unorm;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[unorm Constructor](#ctor)|Overloaded. Default constructor. Initialize to 0.0f.|

### Public Operators

|Name|Description|
|----------|-----------------|
|unorm::operator--||
|unorm::operator float|Conversion operator. Convert the unorm number to a floating point value.|
|unorm::operator*=||
|unorm::operator/=||
|unorm::operator++||
|unorm::operator+=||
|unorm::operator=||
|unorm::operator-=||

## Inheritance Hierarchy

`unorm`

## Requirements

**Header:** amp_short_vectors.h

**Namespace:** Concurrency::graphics

## <a name="ctor"></a> unorm

Default constructor. Initialize to 0.0f.

```cpp
unorm(
    void) restrict(amp,
    cpu);

explicit unorm(
    float _V) restrict(amp,
    cpu);

explicit unorm(
    unsigned int _V) restrict(amp,
    cpu);

explicit unorm(
    int _V) restrict(amp,
    cpu);

explicit unorm(
    double _V) restrict(amp,
    cpu);

unorm(
    const unorm& _Other) restrict(amp,
    cpu);

inline explicit unorm(
    const norm& _Other) restrict(amp,
    cpu);
```

### Parameters

*_V*<br/>
The value used to initialize.

*_Other*<br/>
The norm object used to initialize.

## See also

[Concurrency::graphics Namespace](concurrency-graphics-namespace.md)
