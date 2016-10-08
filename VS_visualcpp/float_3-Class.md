---
title: "float_3 Class"
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
ms.assetid: 209df7a5-08d7-48b4-8ba5-77603642cdd8
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
# float_3 Class
Represents a short vector of three floats.  
  
## Syntax  
  
```  
class float_3;  
```  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`value_type`||  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[float_3::float_3 Constructor](#float_3__float_3_constructor)|Overloaded. Default constructor, initializes all elements with 0.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|float_3::get_x Method||  
|float_3::get_xy Method||  
|float_3::get_xyz Method||  
|float_3::get_xz Method||  
|float_3::get_xzy Method||  
|float_3::get_y Method||  
|float_3::get_yx Method||  
|float_3::get_yxz Method||  
|float_3::get_yz Method||  
|float_3::get_yzx Method||  
|float_3::get_z Method||  
|float_3::get_zx Method||  
|float_3::get_zxy Method||  
|float_3::get_zy Method||  
|float_3::get_zyx Method||  
|float_3::ref_b Method||  
|float_3::ref_g Method||  
|float_3::ref_r Method||  
|float_3::ref_x Method||  
|float_3::ref_y Method||  
|float_3::ref_z Method||  
|float_3::set_x Method||  
|float_3::set_xy Method||  
|float_3::set_xyz Method||  
|float_3::set_xz Method||  
|float_3::set_xzy Method||  
|float_3::set_y Method||  
|float_3::set_yx Method||  
|float_3::set_yxz Method||  
|float_3::set_yz Method||  
|float_3::set_yzx Method||  
|float_3::set_z Method||  
|float_3::set_zx Method||  
|float_3::set_zxy Method||  
|float_3::set_zy Method||  
|float_3::set_zyx Method||  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|float_3::operator- Operator||  
|float_3::operator-- Operator||  
|float_3::operator*= Operator||  
|float_3::operator/= Operator||  
|float_3::operator++ Operator||  
|float_3::operator+= Operator||  
|float_3::operator= Operator||  
|float_3::operator-= Operator||  
  
### Public Constants  
  
|Name|Description|  
|----------|-----------------|  
|[float_3::size Constant](#float_3__size_constant)||  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|float_3::b Data Member||  
|float_3::bg Data Member||  
|float_3::bgr Data Member||  
|float_3::br Data Member||  
|float_3::brg Data Member||  
|float_3::g Data Member||  
|float_3::gb Data Member||  
|float_3::gbr Data Member||  
|float_3::gr Data Member||  
|float_3::grb Data Member||  
|float_3::r Data Member||  
|float_3::rb Data Member||  
|float_3::rbg Data Member||  
|float_3::rg Data Member||  
|float_3::rgb Data Member||  
|float_3::x Data Member||  
|float_3::xy Data Member||  
|float_3::xyz Data Member||  
|float_3::xz Data Member||  
|float_3::xzy Data Member||  
|float_3::y Data Member||  
|float_3::yx Data Member||  
|float_3::yxz Data Member||  
|float_3::yz Data Member||  
|float_3::yzx Data Member||  
|float_3::z Data Member||  
|float_3::zx Data Member||  
|float_3::zxy Data Member||  
|float_3::zy Data Member||  
|float_3::zyx Data Member||  
  
## Inheritance Hierarchy  
 `float_3`  
  
## Requirements  
 **Header:** amp_short_vectors.h  
  
 **Namespace:** Concurrency::graphics  
  
##  <a name="float_3__float_3_constructor"></a>  float_3::float_3 Constructor  
 Default constructor, initializes all elements with 0.  
  
```  
float_3() restrict(amp,cpu);  
  
float_3(  
    float _V0,  
    float _V1,  
    float _V2 ) restrict(amp,cpu);  
  
float_3(  
    float _V ) restrict(amp,cpu);  
  
float_3(  
    const float_3& _Other ) restrict(amp,cpu);  
  
explicit inline float_3(  
    const uint_3& _Other ) restrict(amp,cpu);  
  
explicit inline float_3(  
    const int_3& _Other ) restrict(amp,cpu);  
  
explicit inline float_3(  
    const unorm_3& _Other ) restrict(amp,cpu);  
  
explicit inline float_3(  
    const norm_3& _Other ) restrict(amp,cpu);  
  
explicit inline float_3(  
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
  
##  <a name="float_3__size_constant"></a>  float_3::size Constant  
  
```  
static const int size = 3;  
```  
  
## See Also  
 [Concurrency::graphics Namespace](../VS_visualcpp/Concurrency--graphics-Namespace.md)