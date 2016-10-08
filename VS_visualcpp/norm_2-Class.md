---
title: "norm_2 Class"
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
ms.assetid: 80703f9b-61f4-414a-93fd-bc774f7d3393
caps.latest.revision: 9
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
# norm_2 Class
Represents a short vector of two normal numbers.  
  
## Syntax  
  
```  
class norm_2;  
```  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`value_type`||  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[norm_2::norm_2 Constructor](#norm_2__norm_2_constructor)|Overloaded. Default constructor, initializes all elements with 0.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|norm_2::get_x Method||  
|norm_2::get_xy Method||  
|norm_2::get_y Method||  
|norm_2::get_yx Method||  
|norm_2::ref_g Method||  
|norm_2::ref_r Method||  
|norm_2::ref_x Method||  
|norm_2::ref_y Method||  
|norm_2::set_x Method||  
|norm_2::set_xy Method||  
|norm_2::set_y Method||  
|norm_2::set_yx Method||  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|norm_2::operator- Operator||  
|norm_2::operator-- Operator||  
|norm_2::operator*= Operator||  
|norm_2::operator/= Operator||  
|norm_2::operator++ Operator||  
|norm_2::operator+= Operator||  
|norm_2::operator= Operator||  
|norm_2::operator-= Operator||  
  
### Public Constants  
  
|Name|Description|  
|----------|-----------------|  
|[norm_2::size Constant](#norm_2__size_constant)||  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|norm_2::g Data Member||  
|norm_2::gr Data Member||  
|norm_2::r Data Member||  
|norm_2::rg Data Member||  
|norm_2::x Data Member||  
|norm_2::xy Data Member||  
|norm_2::y Data Member||  
|norm_2::yx Data Member||  
  
## Inheritance Hierarchy  
 `norm_2`  
  
## Requirements  
 **Header:** amp_short_vectors.h  
  
 **Namespace:** Concurrency::graphics  
  
##  <a name="norm_2__norm_2_constructor"></a>  norm_2::norm_2 Constructor  
 Default constructor, initializes all elements with 0.  
  
```  
norm_2() restrict(amp,cpu);  
  
norm_2(  
    norm _V0,  
    norm _V1 ) restrict(amp,cpu);  
  
norm_2(  
    float _V0,  
    float _V1 ) restrict(amp,cpu);  
  
norm_2(  
    unorm _V0,  
    unorm _V1 ) restrict(amp,cpu);  
  
norm_2(  
    norm _V ) restrict(amp,cpu);  
  
explicit norm_2(  
    float _V ) restrict(amp,cpu);  
  
norm_2(  
    const norm_2& _Other ) restrict(amp,cpu);  
  
explicit inline norm_2(  
    const uint_2& _Other ) restrict(amp,cpu);  
  
explicit inline norm_2(  
    const int_2& _Other ) restrict(amp,cpu);  
  
explicit inline norm_2(  
    const float_2& _Other ) restrict(amp,cpu);  
  
explicit inline norm_2(  
    const unorm_2& _Other ) restrict(amp,cpu);  
  
explicit inline norm_2(  
    const double_2& _Other ) restrict(amp,cpu);  
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
  
##  <a name="norm_2__size_constant"></a>  norm_2::size Constant  
  
```  
static const int size = 2;  
```  
  
## See Also  
 [Concurrency::graphics Namespace](../VS_visualcpp/Concurrency--graphics-Namespace.md)