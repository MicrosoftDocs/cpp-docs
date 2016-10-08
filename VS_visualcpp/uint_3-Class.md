---
title: "uint_3 Class"
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
ms.assetid: 5e22c277-9d4f-4a3a-b38c-a83d5fcab33c
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
# uint_3 Class
Represents a short vector of three unsigned integers.  
  
## Syntax  
  
```  
class uint_3;  
```  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`value_type`||  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[uint_3::uint_3 Constructor](#uint_3__uint_3_constructor)|Overloaded. Default constructor, initializes all elements with 0.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|uint_3::get_x Method||  
|uint_3::get_xy Method||  
|uint_3::get_xyz Method||  
|uint_3::get_xz Method||  
|uint_3::get_xzy Method||  
|uint_3::get_y Method||  
|uint_3::get_yx Method||  
|uint_3::get_yxz Method||  
|uint_3::get_yz Method||  
|uint_3::get_yzx Method||  
|uint_3::get_z Method||  
|uint_3::get_zx Method||  
|uint_3::get_zxy Method||  
|uint_3::get_zy Method||  
|uint_3::get_zyx Method||  
|uint_t::ref_b Method||  
|uint_t::ref_g Method||  
|uint_t::ref_r Method||  
|uint_t::ref_x Method||  
|uint_t::ref_y Method||  
|uint_t::ref_z Method||  
|uint_3::set_x Method||  
|uint_3::set_xy Method||  
|uint_3::set_xyz Method||  
|uint_3::set_xz Method||  
|uint_3::set_xzy Method||  
|uint_3::set_y Method||  
|uint_3::set_yx Method||  
|uint_3::set_yxz Method||  
|uint_3::set_yz Method||  
|uint_3::set_yzx Method||  
|uint_3::set_z Method||  
|uint_3::set_zx Method||  
|uint_3::set_zxy Method||  
|uint_3::set_zy Method||  
|uint_3::set_zyx Method||  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|uint_3::operator-- Operator||  
|uint_3::operator%= Operator||  
|uint_3::operator&= Operator||  
|uint_3::operator*= Operator||  
|uint_3::operator/= Operator||  
|uint_3::operator^= Operator||  
|uint_3::operator&#124;= Operator||  
|uint_3::operator~ Operator||  
|uint_3::operator++ Operator||  
|uint_3::operator+= Operator||  
|uint_3::operator<<= Operator||  
|uint_3::operator= Operator||  
|uint_3::operator-= Operator||  
|uint_3::operator>>= Operator||  
  
### Public Constants  
  
|Name|Description|  
|----------|-----------------|  
|[uint_3::size Constant](#uint_3__size_constant)||  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|uint_3::b Data Member||  
|uint_3::bg Data Member||  
|uint_3::bgr Data Member||  
|uint_3::br Data Member||  
|uint_3::brg Data Member||  
|uint_3::g Data Member||  
|uint_3::gb Data Member||  
|uint_3::gbr Data Member||  
|uint_3::gr Data Member||  
|uint_3::grb Data Member||  
|uint_3::r Data Member||  
|uint_3::rb Data Member||  
|uint_3::rbg Data Member||  
|uint_3::rg Data Member||  
|uint_3::rgb Data Member||  
|uint_3::x Data Member||  
|uint_3::xy Data Member||  
|uint_3::xyz Data Member||  
|uint_3::xz Data Member||  
|uint_3::xzy Data Member||  
|uint_3::y Data Member||  
|uint_3::yx Data Member||  
|uint_3::yxz Data Member||  
|uint_3::yz Data Member||  
|uint_3::yzx Data Member||  
|uint_3::z Data Member||  
|uint_3::zx Data Member||  
|uint_3::zxy Data Member||  
|uint_3::zy Data Member||  
|uint_3::zyx Data Member||  
  
## Inheritance Hierarchy  
 `uint_3`  
  
## Requirements  
 **Header:** amp_short_vectors.h  
  
 **Namespace:** Concurrency::graphics  
  
##  <a name="uint_3__uint_3_constructor"></a>  uint_3::uint_3 Constructor  
 Default constructor, initializes all elements with 0.  
  
```  
uint_3() restrict(amp,cpu);  
  
uint_3(  
    unsigned int _V0,  
    unsigned int _V1,  
    unsigned int _V2 ) restrict(amp,cpu);  
  
uint_3(  
    unsigned int _V ) restrict(amp,cpu);  
  
uint_3(  
    const uint_3& _Other ) restrict(amp,cpu);  
  
explicit inline uint_3(  
    const int_3& _Other ) restrict(amp,cpu);  
  
explicit inline uint_3(  
    const float_3& _Other ) restrict(amp,cpu);  
  
explicit inline uint_3(  
    const unorm_3& _Other ) restrict(amp,cpu);  
  
explicit inline uint_3(  
    const norm_3& _Other ) restrict(amp,cpu);  
  
explicit inline uint_3(  
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
  
##  <a name="uint_3__size_constant"></a>  uint_3::size Constant  
  
```  
static const int size = 3;  
```  
  
## See Also  
 [Concurrency::graphics Namespace](../VS_visualcpp/Concurrency--graphics-Namespace.md)