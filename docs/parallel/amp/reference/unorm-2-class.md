---
title: "unorm_2 Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-amp"]
ms.topic: "reference"
f1_keywords: ["amp_short_vectors/Concurrency::graphics::unnorm_2::operator+=", "amp_short_vectors/Concurrency::graphics::unnorm_2::y", "amp_short_vectors/Concurrency::graphics::unnorm_2::set_y", "amp_short_vectors/Concurrency::graphics::unnorm_2::x", "amp_short_vectors/Concurrency::graphics::unnorm_2::get_yx", "amp_short_vectors/Concurrency::graphics::unnorm_2::operator--", "amp_short_vectors/Concurrency::graphics::unnorm_2::set_xy", "amp_short_vectors/Concurrency::graphics::unnorm_2::operator*=", "amp_short_vectors/Concurrency::graphics::unnorm_2::xy", "amp_short_vectors/Concurrency::graphics::unnorm_2::get_y", "amp_short_vectors/Concurrency::graphics::unnorm_2::operator=", "amp_short_vectors/Concurrency::graphics::unnorm_2::set_x", "amp_short_vectors/Concurrency::graphics::unnorm_2::rg", "amp_short_vectors/Concurrency::graphics::unorm_2", "amp_short_vectors/Concurrency::graphics::unnorm_2::operator-=", "amp_short_vectors/Concurrency::graphics::unnorm_2::operator/=", "amp_short_vectors/Concurrency::graphics::unnorm_2::get_xy", "amp_short_vectors/Concurrency::graphics::unnorm_2::set_yx", "amp_short_vectors/Concurrency::graphics::unnorm_2::yx", "amp_short_vectors/Concurrency::graphics::unnorm_2::gr", "amp_short_vectors/Concurrency::graphics::unnorm_2::r", "amp_short_vectors/Concurrency::graphics::unnorm_2::operator-", "amp_short_vectors/Concurrency::graphics::unnorm_2::get_x", "amp_short_vectors/Concurrency::graphics::unnorm_2::g", "amp_short_vectors/Concurrency::graphics::unnorm_2::operator++"]
dev_langs: ["C++"]
ms.assetid: 62e88ea7-e29f-4f62-95ce-61a1f39f5e34
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# unorm_2 Class
Represents a short vector of two unsigned normal numbers.  
  
## Syntax  
  
```  
class unorm_2;  
```  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`value_type`||  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[unorm_2 Constructor](#ctor)|Overloaded. Default constructor, initializes all elements with 0.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|unorm_2::get_x||  
|unorm_2::get_xy||  
|unorm_2::get_y||  
|unorm_2::get_yx||  
|unorm_2::ref_g||  
|unorm_2::ref_r||  
|unorm_2::ref_x||  
|unorm_2::ref_y||  
|unorm_2::set_x||  
|unorm_2::set_xy||  
|unorm_2::set_y||  
|unorm_2::set_yx||  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|unorm_2::operator--||  
|unorm_2::operator*=||  
|unorm_2::operator/=||  
|unorm_2::operator++||  
|unorm_2::operator+=||  
|unorm_2::operator=||  
|unorm_2::operator-=||  
  
### Public Constants  
  
|Name|Description|  
|----------|-----------------|  
|unorm_2::size Constant||  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|unorm_2::g||  
|unorm_2::gr||  
|unorm_2::r||  
|unorm_2::rg||  
|unorm_2::x||  
|unorm_2::xy||  
|unorm_2::y||  
|unorm_2::yx||  
  
## Inheritance Hierarchy  
 `unorm_2`  
  
## Requirements  
 **Header:** amp_short_vectors.h  
  
 **Namespace:** Concurrency::graphics  
  
##  <a name="ctor"></a> unorm_2 

 Default constructor, initializes all elements with 0.  
  
```  
unorm_2() restrict(amp,
    cpu);

 
unorm_2(
    unorm _V0,  
    unorm _V1) restrict(amp,
    cpu);

 
unorm_2(
    float _V0,  
    float _V1) restrict(amp,
    cpu);

 
unorm_2(
    unorm _V) restrict(amp,
    cpu);

 
explicit unorm_2(
    float _V) restrict(amp,
    cpu);

 
unorm_2(
    const unorm_2& _Other) restrict(amp,
    cpu);

 
explicit inline unorm_2(
    const uint_2& _Other) restrict(amp,
    cpu);

 
explicit inline unorm_2(
    const int_2& _Other) restrict(amp,
    cpu);

 
explicit inline unorm_2(
    const float_2& _Other) restrict(amp,
    cpu);

 
explicit inline unorm_2(
    const norm_2& _Other) restrict(amp,
    cpu);

 
explicit inline unorm_2(
    const double_2& _Other) restrict(amp,
    cpu);
```  
  
### Parameters  
 `_V0`  
 The value to initialize element 0.  
  
 `_V1`  
 The value to initialize element 1.  
  
 `_V`  
 The value for initialization.  
  
 `_Other`  
 The object used to initialize.  
  
##  <a name="unorm_2__size"></a> size 

```  
static const int size = 2;  
```  
  
## See Also  
 [Concurrency::graphics Namespace](concurrency-graphics-namespace.md)
