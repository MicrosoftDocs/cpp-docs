---
title: "double_3 Class"
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
ms.assetid: baeb3ff0-2862-4c81-857e-b1a4c085be25
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
# double_3 Class
Represents a short vector of three doubles.  
  
## Syntax  
  
```  
class double_3;  
```  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|value_type||  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[double_3::double_3 Constructor](#double_3__double_3_constructor)|Overloaded. Default constructor, initializes all elements with 0.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|double_3::get_x Method||  
|double_3::get_xy Method||  
|double_3::get_xyz Method||  
|double_3::get_xz Method||  
|double_3::get_xzy Method||  
|double_3::get_y Method||  
|double_3::get_yx Method||  
|double_3::get_yxz Method||  
|double_3::get_yz Method||  
|double_3::get_yzx Method||  
|double_3::get_z Method||  
|double_3::get_zx Method||  
|double_3::get_zxy Method||  
|double_3::get_zy Method||  
|double_3::get_zyx Method||  
|double_3::ref_b Method||  
|double_3::ref_g Method||  
|double_3::ref_r Method||  
|double_3::ref_x Method||  
|double_3::ref_y Method||  
|double_3::ref_z Method||  
|double_3::set_x Method||  
|double_3::set_xy Method||  
|double_3::set_xyz Method||  
|double_3::set_xz Method||  
|double_3::set_xzy Method||  
|double_3::set_y Method||  
|double_3::set_yx Method||  
|double_3::set_yxz Method||  
|double_3::set_yz Method||  
|double_3::set_yzx Method||  
|double_3::set_z Method||  
|double_3::set_zx Method||  
|double_3::set_zxy Method||  
|double_3::set_zy Method||  
|double_3::set_zyx Method||  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|double_3::operator- Operator||  
|double_3::operator-- Operator||  
|double_3::operator*= Operator||  
|double_3::operator/= Operator||  
|double_3::operator++ Operator||  
|double_3::operator+= Operator||  
|double_3::operator= Operator||  
|double_3::operator-= Operator||  
  
### Public Constants  
  
|Name|Description|  
|----------|-----------------|  
|[double_3::size Constant](#double_3__size_constant)||  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|double_3::b Data Member||  
|double_3::bg Data Member||  
|double_3::bgr Data Member||  
|double_3::br Data Member||  
|double_3::brg Data Member||  
|double_3::g Data Member||  
|double_3::gb Data Member||  
|double_3::gbr Data Member||  
|double_3::gr Data Member||  
|double_3::grb Data Member||  
|double_3::r Data Member||  
|double_3::rb Data Member||  
|double_3::rbg Data Member||  
|double_3::rg Data Member||  
|double_3::rgb Data Member||  
|double_3::x Data Member||  
|double_3::xy Data Member||  
|double_3::xyz Data Member||  
|double_3::xz Data Member||  
|double_3::xzy Data Member||  
|double_3::y Data Member||  
|double_3::yx Data Member||  
|double_3::yxz Data Member||  
|double_3::yz Data Member||  
|double_3::yzx Data Member||  
|double_3::z Data Member||  
|double_3::zx Data Member||  
|double_3::zxy Data Member||  
|double_3::zy Data Member||  
|double_3::zyx Data Member||  
  
## Inheritance Hierarchy  
 `double_3`  
  
## Requirements  
 **Header:** amp_short_vectors.h  
  
 **Namespace:** Concurrency::graphics  
  
##  <a name="double_3__double_3_constructor"></a>  double_3::double_3 Constructor  
 Default constructor, initializes all elements with 0.  
  
```  
double_3() restrict(amp, cpu);  
  
double_3(  
    double _V0,  
    double _V1,  
    double _V2 ) restrict(amp, cpu);  
  
double_3(  
    double _V ) restrict(amp, cpu);  
  
double_3(  
    const double_3& _Other ) restrict(amp, cpu);  
  
explicit inline double_3(  
    const uint_3& _Other ) restrict(amp, cpu);  
  
explicit inline double_3(  
    const int_3& _Other ) restrict(amp, cpu);  
  
explicit inline double_3(  
    const float_3& _Other ) restrict(amp, cpu);  
  
explicit inline double_3(  
    const unorm_3& _Other ) restrict(amp, cpu);  
  
explicit inline double_3(  
    const norm_3& _Other ) restrict(amp, cpu);  
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
  
##  <a name="double_3__size_constant"></a>  double_3::size Constant  
  
```  
static const int size = 3;  
```  
  
## See Also  
 [Concurrency::graphics Namespace](../VS_visualcpp/Concurrency--graphics-Namespace.md)