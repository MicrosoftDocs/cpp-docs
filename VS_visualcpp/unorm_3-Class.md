---
title: "unorm_3 Class"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: ea4e7a17-5256-464c-af28-8b01962564c0
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# unorm_3 Class
Represents a short vector of three unsigned normal numbers.  
  
## Syntax  
  
```  
class unorm_3;  
```  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`value_type`||  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[unorm_3::unorm_3 Constructor](#unorm_3__unorm_3_constructor)|Overloaded. Default constructor, initializes all elements with 0.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|unorm_3::get_x Method||  
|unorm_3::get_xy Method||  
|unorm_3::get_xyz Method||  
|unorm_3::get_xz Method||  
|unorm_3::get_xzy Method||  
|unorm_3::get_y Method||  
|unorm_3::get_yx Method||  
|unorm_3::get_yxz Method||  
|unorm_3::get_yz Method||  
|unorm_3::get_yzx Method||  
|unorm_3::get_z Method||  
|unorm_3::get_zx Method||  
|unorm_3::get_zxy Method||  
|unorm_3::get_zy Method||  
|unorm_3::get_zyx Method||  
|Unorm_3::ref_b Method||  
|Unorm_3::ref_g Method||  
|Unorm_3::ref_r Method||  
|Unorm_3::ref_x Method||  
|Unorm_3::ref_y Method||  
|Unorm_3::ref_z Method||  
|unorm_3::set_x Method||  
|unorm_3::set_xy Method||  
|unorm_3::set_xyz Method||  
|unorm_3::set_xz Method||  
|unorm_3::set_xzy Method||  
|unorm_3::set_y Method||  
|unorm_3::set_yx Method||  
|unorm_3::set_yxz Method||  
|unorm_3::set_yz Method||  
|unorm_3::set_yzx Method||  
|unorm_3::set_z Method||  
|unorm_3::set_zx Method||  
|unorm_3::set_zxy Method||  
|unorm_3::set_zy Method||  
|unorm_3::set_zyx Method||  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|unorm_3::operator-- Operator||  
|unorm_3::operator*= Operator||  
|unorm_3::operator/= Operator||  
|unorm_3::operator++ Operator||  
|unorm_3::operator+= Operator||  
|unorm_3::operator= Operator||  
|unorm_3::operator-= Operator||  
  
### Public Constants  
  
|Name|Description|  
|----------|-----------------|  
|[unorm_3::size Constant](#unorm_3__size_constant)||  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|unorm_3::b Data Member||  
|unorm_3::bg Data Member||  
|unorm_3::bgr Data Member||  
|unorm_3::br Data Member||  
|unorm_3::brg Data Member||  
|unorm_3::g Data Member||  
|unorm_3::gb Data Member||  
|unorm_3::gbr Data Member||  
|unorm_3::gr Data Member||  
|unorm_3::grb Data Member||  
|unorm_3::r Data Member||  
|unorm_3::rb Data Member||  
|unorm_3::rbg Data Member||  
|unorm_3::rg Data Member||  
|unorm_3::rgb Data Member||  
|unorm_3::x Data Member||  
|unorm_3::xy Data Member||  
|unorm_3::xyz Data Member||  
|unorm_3::xz Data Member||  
|unorm_3::xzy Data Member||  
|unorm_3::y Data Member||  
|unorm_3::yx Data Member||  
|unorm_3::yxz Data Member||  
|unorm_3::yz Data Member||  
|unorm_3::yzx Data Member||  
|unorm_3::z Data Member||  
|unorm_3::zx Data Member||  
|unorm_3::zxy Data Member||  
|unorm_3::zy Data Member||  
|unorm_3::zyx Data Member||  
  
## Inheritance Hierarchy  
 `unorm_3`  
  
## Requirements  
 **Header:** amp_short_vectors.h  
  
 **Namespace:** Concurrency::graphics  
  
##  <a name="unorm_3__unorm_3_constructor"></a>  unorm_3::unorm_3 Constructor  
 Default constructor, initializes all elements with 0.  
  
```  
unorm_3() restrict(amp,cpu);  
  
unorm_3(  
    unorm _V0,  
    unorm _V1,  
    unorm _V2 ) restrict(amp,cpu);  
  
unorm_3(  
    float _V0,  
    float _V1,  
    float _V2 ) restrict(amp,cpu);  
  
unorm_3(  
    unorm _V ) restrict(amp,cpu);  
  
explicit unorm_3(  
    float _V ) restrict(amp,cpu);  
  
unorm_3(  
    const unorm_3& _Other ) restrict(amp,cpu);  
  
explicit inline unorm_3(  
    const uint_3& _Other ) restrict(amp,cpu);  
  
explicit inline unorm_3(  
    const int_3& _Other ) restrict(amp,cpu);  
  
explicit inline unorm_3(  
    const float_3& _Other ) restrict(amp,cpu);  
  
explicit inline unorm_3(  
    const norm_3& _Other ) restrict(amp,cpu);  
  
explicit inline unorm_3(  
    const double_3& _Other ) restrict(amp,cpu);  
```  
  
### Parameters  
 `_V0`  
 The value to initialize element 0.  
  
 `_V1`  
 The value to initialize element 1.  
  
 `_V2`  
 The value to initialize element 2.  
  
 `_V`  
 The value for initialization.  
  
 `_Other`  
 The object used to initialize.  
  
##  <a name="unorm_3__size_constant"></a>  unorm_3::size Constant  
  
```  
static const int size = 3;  
```  
  
## See Also  
 [Concurrency::graphics Namespace](../VS_visualcpp/Concurrency--graphics-Namespace.md)