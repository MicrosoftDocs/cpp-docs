---
title: "sampler Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 9a6a9807-497d-402d-b092-8c4d86275b80
caps.latest.revision: 7
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
# sampler Class
The sampler class aggregates sampling configuration information to be used for texture sampling.  
  
## Syntax  
  
```  
class sampler;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[sampler::sampler Constructor](#ctor)|Overloaded. Constructs a sampler instance.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[sampler::get_address_mode Method](#get_address_mode)|Returns the `address_mode` that’s associated with the sampler object.|  
|[sampler::get_border_color Method](#get_border_color)|Returns the border color that’s associated with the sampler object.|  
|[sampler::get_filter_mode Method](#get_filter_mode)|Returns the `filter_mode` that’s associated with the sampler object.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[sampler::operator= Operator](#operator_eq)|Overloaded. Assignment operator.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[sampler::address_mode Data Member](#address_mode)|Gets the address mode of the `sampler` object.|  
|[sampler::border_color Data Member](#border_color)|Gets the border color of the `sampler` object.|  
|[sampler::filter_mode Data Member](#filter_mode)|Gets the filter mode of the `sampler` object.|  
  
## Inheritance Hierarchy  
 `sampler`  
  
## Requirements  
 **Header:** amp_graphics.h  
  
 **Namespace:** concurrency::graphics  
  
##  <a name="ctor"></a>  sampler::sampler Constructor  
 Constructs an instance of the [sampler Class](sampler-class.md).  
  
```  
sampler() restrict(cpu);

 *// [1] default constructor  
 
sampler(// [2] constructor  
    filter_mode _Filter_mode) restrict(cpu);

 
sampler(// [3] constructor  
    address_mode _Address_mode,  
    float_4 _Border_color = float_4(0.0f,
    0.0f,
    0.0f,
    0.0f)) restrict(cpu);

 
sampler(// [4] constructor  
    filter_mode _Filter_mode,  
    address_mode _Address_mode,  
    float_4 _Border_color = float_4(0.0f,
    0.0f,
    0.0f,
    0.0f)) restrict(cpu);

 
sampler(// [5] copy constructor  
    const sampler& _Other) restrict(amp,
    cpu);

 
sampler(// [6] move constructor  
    sampler&& _Other) restrict(amp,
    cpu);
```  
  
### Parameters  
 `_Filter_mode`  
 The filter mode to be used in sampling.  
  
 `_Address_mode`  
 The addressing mode to be used in sampling for all dimensions.  
  
 `_Border_color`  
 The border color to be used if the address mode is address_border. The default value is `float_4(0.0f, 0.0f, 0.0f, 0.0f)`.  
  
 `_Other`  
 [5] Copy Constructor  
 The `sampler` object to copy into the new `sampler` instance.  
  
 [6] Move Constructor  
 The `sampler` object to move into the new `sampler` instance.  
  
##  <a name="address_mode"></a>  sampler::address_mode Data Member  
 Gets the address mode of the `sampler` object.  
  
```  
__declspec(property(get= get_address_mode)) Concurrency::graphics::address_mode address_mode;  
```  
  
##  <a name="border_color"></a>  sampler::border_color Data Member  
 Gets the border color of the `sampler` object.  
  
```  
__declspec(property(get= get_border_color)) Concurrency::graphics::float_4 border_color;  
```  
  
##  <a name="filter_mode"></a>  sampler::filter_mode Data Member  
 Gets the filter mode of the `sampler` object.  
  
```  
__declspec(property(get= get_filter_mode)) Concurrency::graphics::filter_mode filter_mode;  
```  
  
##  <a name="get_address_mode"></a>  sampler::get_address_mode Method  
 Returns the filter mode that’s configured for this `sampler`.  
  
```  
Concurrency::graphics::address_mode get_address_mode() const __GPU;  
```  
  
### Return Value  
 The address mode that’s configured for the sampler.  
  
##  <a name="get_border_color"></a>  sampler::get_border_color Method  
 Returns the border color that’s configured for this `sampler`.  
  
```  
Concurrency::graphics::float_4 get_border_color() const restrict(amp, cpu);
```  
  
### Return Value  
 A float_4 that contains the border color.  
  
##  <a name="get_filter_mode"></a>  sampler::get_filter_mode Method  
 Returns the filter mode that’s configured for this `sampler`.  
  
```  
Concurrency::graphics::filter_mode get_filter_mode() const restrict(amp, cpu);
```  
  
### Return Value  
 The filter mode that’s configured for the sampler.  
  
##  <a name="operator_eq"></a>  sampler::operator= Operator  
 Assigns the value of another sampler object to an existing sampler.  
  
```  
sampler& operator= (// [1] copy assignment operator const sampler& _Other) restrict(amp,
    cpu);

 
sampler& operator= (// [2] move assingment operator sampler&& _Other) restrict(amp,
    cpu);
```  
  
### Parameters  
 `_Other`  
 [1] Copy Assignment Operator  
 The `sampler` object to copy into this `sampler`.  
  
 [2] Move Assignment Operator  
 The `sampler` object to move into this `sampler`.  
  
### Return Value  
 A reference to this sampler instance.  
  
## See Also  
 [Concurrency::graphics Namespace](concurrency-graphics-namespace.md)
