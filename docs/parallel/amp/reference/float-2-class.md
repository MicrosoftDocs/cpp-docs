---
title: "float_2 Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "amp_short_vectors/Concurrency::graphics::float_2::yx"
  - "amp_short_vectors/Concurrency::graphics::float_2::operator-="
  - "amp_short_vectors/Concurrency::graphics::float_2::operator++"
  - "amp_short_vectors/Concurrency::graphics::float_2::operator-"
  - "amp_short_vectors/Concurrency::graphics::float_2::r"
  - "amp_short_vectors/Concurrency::graphics::float_2::get_yx"
  - "amp_short_vectors/Concurrency::graphics::float_2::get_xy"
  - "amp_short_vectors/Concurrency::graphics::float_2::operator/="
  - "amp_short_vectors/Concurrency::graphics::float_2::set_yx"
  - "amp_short_vectors/Concurrency::graphics::float_2::x"
  - "amp_short_vectors/Concurrency::graphics::float_2::get_y"
  - "amp_short_vectors/Concurrency::graphics::float_2::operator+="
  - "amp_short_vectors/Concurrency::graphics::float_2::gr"
  - "amp_short_vectors/Concurrency::graphics::float_2::operator="
  - "amp_short_vectors/Concurrency::graphics::float_2::set_x"
  - "amp_short_vectors/Concurrency::graphics::float_2::operator--"
  - "amp_short_vectors/Concurrency::graphics::float_2::get_x"
  - "amp_short_vectors/Concurrency::graphics::float_2::operator*="
  - "amp_short_vectors/Concurrency::graphics::float_2::rg"
  - "amp_short_vectors/Concurrency::graphics::float_2::set_xy"
  - "amp_short_vectors/Concurrency::graphics::float_2::xy"
  - "amp_short_vectors/Concurrency::graphics::float_2"
  - "amp_short_vectors/Concurrency::graphics::float_2::set_y"
  - "amp_short_vectors/Concurrency::graphics::float_2::y"
  - "amp_short_vectors/Concurrency::graphics::float_2::g"
dev_langs: 
  - "C++"
ms.assetid: b3ebd48e-f8c8-4f00-a640-357f702f0cae
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# float_2 Class
Represents a short vector of two floats.  
  
## Syntax  
  
```  
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
|[float_2::float_2 Constructor](#ctor)|Overloaded. Default constructor, initializes all elements with 0.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|float_2::get_x Method||  
|float_2::get_xy Method||  
|float_2::get_y Method||  
|float_2::get_yx Method||  
|float_2::ref_g Method||  
|float_2::ref_r Method||  
|float_2::ref_x Method||  
|float_2::ref_y Method||  
|float_2::set_x Method||  
|float_2::set_xy Method||  
|float_2::set_y Method||  
|float_2::set_yx Method||  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|float_2::operator- Operator||  
|float_2::operator-- Operator||  
|float_2::operator*= Operator||  
|float_2::operator/= Operator||  
|float_2::operator++ Operator||  
|float_2::operator+= Operator||  
|float_2::operator= Operator||  
|float_2::operator-= Operator||  
  
### Public Constants  
  
|Name|Description|  
|----------|-----------------|  
|[float_2::size Constant](#float_2__size)||  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|float_2::g Data Member||  
|float_2::gr Data Member||  
|float_2::r Data Member||  
|float_2::rg Data Member||  
|float_2::x Data Member||  
|float_2::xy Data Member||  
|float_2::y Data Member||  
|float_2::yx Data Member||  
  
## Inheritance Hierarchy  
 `float_2`  
  
## Requirements  
 **Header:** amp_short_vectors.h  
  
 **Namespace:** Concurrency::graphics  
  
##  <a name="ctor"></a>  float_2::float_2 Constructor  
 Default constructor, initializes all elements with 0.  
  
```  
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
 `_V0`  
 The value to initialize element 0.  
  
 `_V1`  
 The value to initialize element 1.  
  
 `_V`  
 The value for initialization.  
  
 `_Other`  
 The object used to initialize.  
  
##  <a name="float_2__size"></a>  float_2::size Constant  
  
```  
static const int size = 2;  
```  
  
## See Also  
 [Concurrency::graphics Namespace](concurrency-graphics-namespace.md)
