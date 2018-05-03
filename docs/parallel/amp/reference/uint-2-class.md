---
title: "uint_2 Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-amp"]
ms.topic: "reference"
f1_keywords: ["amp_short_vectors/Concurrency::graphics::uint_2::set_xy", "amp_short_vectors/Concurrency::graphics::uint_2::y", "amp_short_vectors/Concurrency::graphics::uint_2::gr", "amp_short_vectors/Concurrency::graphics::uint_2::operator-", "amp_short_vectors/Concurrency::graphics::uint_2::get_x", "amp_short_vectors/Concurrency::graphics::uint_2::operator-=", "amp_short_vectors/Concurrency::graphics::uint_2::r", "amp_short_vectors/Concurrency::graphics::uint_2::yx", "amp_short_vectors/Concurrency::graphics::uint_2::operator--", "amp_short_vectors/Concurrency::graphics::uint_2::set_yx", "amp_short_vectors/Concurrency::graphics::uint_2::operator=", "amp_short_vectors/Concurrency::graphics::uint_2::set_x", "amp_short_vectors/Concurrency::graphics::uint_2::operator+=", "amp_short_vectors/Concurrency::graphics::uint_2::get_y", "amp_short_vectors/Concurrency::graphics::uint_2::xy", "amp_short_vectors/Concurrency::graphics::uint_2::x", "amp_short_vectors/Concurrency::graphics::uint_2::get_xy", "amp_short_vectors/Concurrency::graphics::uint_2::set_y", "amp_short_vectors/Concurrency::graphics::uint_2", "amp_short_vectors/Concurrency::graphics::uint_2::operator*=", "amp_short_vectors/Concurrency::graphics::uint_2::get_yx", "amp_short_vectors/Concurrency::graphics::uint_2::operator/=", "amp_short_vectors/Concurrency::graphics::uint_2::g", "amp_short_vectors/Concurrency::graphics::uint_2::operator++", "amp_short_vectors/Concurrency::graphics::uint_2::rg"]
dev_langs: ["C++"]
ms.assetid: 9fcc9129-72b1-4da7-9012-4d3be15f1c52
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# uint_2 Class
Represents a short vector of two unsigned integers.  
  
## Syntax  
  
```  
class uint_2;  
```  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`value_type`||  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[uint_2 Constructor](#ctor)|Overloaded. Default constructor, initializes all elements with 0.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|uint_2::get_x||  
|uint_2::get_xy||  
|uint_2::get_y||  
|uint_2::get_yx||  
|uint_2::ref_g_Method||  
|uint_2::ref_r_Method||  
|uint_2::ref_x_Method||  
|uint_2::ref_y_Method||  
|uint_2::set_x||  
|uint_2::set_xy||  
|uint_2::set_y||  
|uint_2::set_yx||  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|uint_2::operator--||  
|uint_2::operator%=||  
|uint_2::operator&=||  
|uint_2::operator*=||  
|uint_2::operator/=||  
|uint_2::operator^=||  
|uint_2::operator&#124;=||  
|uint_2::operator~||  
|uint_2::operator++||  
|uint_2::operator+=||  
|uint_2::operator<\<=||  
|uint_2::operator=||  
|uint_2::operator-=||  
|uint_2::operator>>=||  
  
### Public Constants  
  
|Name|Description|  
|----------|-----------------|  
|[size Constant](#uint_2__size)||  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|uint_2::g||  
|uint_2::gr||  
|uint_2::r||  
|uint_2::rg||  
|uint_2::x||  
|uint_2::xy||  
|uint_2::y||  
|uint_2::yx||  
  
## Inheritance Hierarchy  
 `uint_2`  
  
## Requirements  
 **Header:** amp_short_vectors.h  
  
 **Namespace:** Concurrency::graphics  
  
##  <a name="ctor"></a> uint_2 

 Default constructor, initializes all elements with 0.  
  
```  
uint_2() restrict(amp,
    cpu);

 
uint_2(
    unsigned int _V0,  
    unsigned int _V1) restrict(amp,
    cpu);

 
uint_2(
    unsigned int _V) restrict(amp,
    cpu);

 
uint_2(
    const uint_2& _Other) restrict(amp,
    cpu);

 
explicit inline uint_2(
    const int_2& _Other) restrict(amp,
    cpu);

 
explicit inline uint_2(
    const float_2& _Other) restrict(amp,
    cpu);

 
explicit inline uint_2(
    const unorm_2& _Other) restrict(amp,
    cpu);

 
explicit inline uint_2(
    const norm_2& _Other) restrict(amp,
    cpu);

 
explicit inline uint_2(
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
  
##  <a name="uint_2__size"></a> size 

```  
static const int size = 2;  
```  
  
## See Also  
 [Concurrency::graphics Namespace](concurrency-graphics-namespace.md)
