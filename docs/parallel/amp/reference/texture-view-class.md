---
title: "texture_view Class | Microsoft Docs"
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
ms.assetid: 6ec2e289-1626-4727-9592-07981cf1d27d
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
# texture_view Class
Provides read access and write access to a texture. `texture_view` can only be used to read textures whose value type is `int`, `unsigned int`, or `float` that have default 32-bit bpse. To read other texture formats, use `texture_view<const value_type, _Rank>`.  
  
## Syntax  
  
```  
template <
    typename value_type,  
    int _Rank  
>  
class texture_view;  
 
template <
    typename value_type,  
    int _Rank  
>  
class texture_view : public details::_Texture_base<value_type, _Rank>;  
 
template <
    typename value_type,  
    int _Rank  
>  
class texture_view<const value_type, _Rank> : public details::_Texture_base<value_type, _Rank>;  
```  
  
#### Parameters  
 `value_type`  
 The type of the elements in the texture aggregate.  
  
 `_Rank`  
 The rank of the `texture_view`.  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`value_type`|The type of the elements in the texture aggregates.|  
|`coordinates_type`|The type of the coordinate used to specify a texel in the `texture_view`—that is, a `short_vector` that has the same rank as the associated texture that has a value type of `float`.|  
|`gather_return_type`|The return type used for gather operations—that is, a rank 4 `short_vector` that holds the four homogenous color components gathered from the four texel values sampled.|  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[texture_view::texture_view Constructor](#ctor)|Overloaded. Constructs a `texture_view` instance.|  
|[texture_view::~texture_view Destructor](#ctor)|Destroys the `texture_view` instance.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[texture_view::gather_alpha Method](#gather_alpha)|Overloaded. Samples the texture at the specified coordinates by using the specified sampling configuration and returns the alpha (w) components of the four sampled texels.|  
|[texture_view::gather_blue Method](#gather_blue)|Overloaded. Samples the texture at the specified coordinates by using the specified sampling configuration and returns the blue (z) components of the four sampled texels.|  
|[texture_view::gather_green Method](#gather_green)|Overloaded. Samples the texture at the specified coordinates by using the specified sampling configuration and returns the green (y) components of the four sampled texels.|  
|[texture_view::gather_red Method](#gather_red)|Overloaded. Samples the texture at the specified coordinates by using the specified sampling configuration and returns the red (x) components of the four sampled texels.|  
|[texture_view::get Method](#get)|Overloaded. Gets the element value by index.|  
|[texture_view::sample Method](#sample)|Overloaded. Samples the texture at the specified coordinates and level of detail by using the specified sampling configuration.|  
|[texture_view::set Method](#set)|Sets the value of an element by index.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[texture_view::operator() Operator](#operator__)|Overloaded. Gets the element value by index.|  
|[texture_view::operator[] Operator](#operator_at)|Overloaded. Gets the element value by index.|  
|[texture_view::operator= Operator](#operator_eq)|Overloaded. Assignment operator.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[texture_view::value_type Data Member](#value_type)|The value type of the elements of the `texture_view`.|  
  
## Inheritance Hierarchy  
 `_Texture_base`  
  
 `texture_view`  
  
## Requirements  
 **Header:** amp_graphics.h  
  
 **Namespace:** concurrency::graphics  
  
##  <a name="dtor"></a>  texture_view::~texture_view Destructor  
 Destroys the `texture_view` instance.  
  
```  
~texture_view() restrict(amp, cpu);
```  
  
##  <a name="ctor"></a>  texture_view::texture_view Constructor  
 Constructs a `texture_view` instance.  
  
```  
texture_view(// [1] constructor  
    texture<value_type, _Rank>& _Src) restrict(amp);

 
texture_view(// [2] constructor  
    texture<value_type, _Rank>& _Src,  
    unsigned int _Mipmap_level = 0) restrict(cpu);

 
texture_view(// [3] constructor  
    const texture<value_type, _Rank>& _Src) restrict(amp);

 
texture_view(// [4] constructor  
    const texture<value_type, _Rank>& _Src,  
    unsigned int _Most_detailed_mip,  
    unsigned int _Mip_levels) restrict(cpu);

 
texture_view(// [5] copy constructor  
    const texture_view<value_type, _Rank>& _Other) restrict(amp, cpu);

 
texture_view(// [6] copy constructor  
    const texture_view<const value_type, _Rank>& _Other) restrict(amp, cpu);

 
texture_view(// [7] copy constructor  
    const texture_view<const value_type, _Rank>& _Other,  
    unsigned int _Most_detailed_mip,  
    unsigned int _Mip_levels) restrict(cpu);
```  
  
### Parameters  
 `_Src`  
 [1, 2] Constructor  
 The `texture` on which the writable `texture_view` is created.  
  
 [3, 4] Constructor  
 The `texture` on which the non-writable `texture_view` is created.  
  
 `_Other`  
 [5] Copy Constructor  
 The source writable `texture_view`.  
  
 [6, 7] Copy Constructor  
 The source non-writable `texture_view`.  
  
 `_Mipmap_level`  
 The specific mipmap level on the source `texture` that this writeable `texture_view` binds to. The default value is 0, which represents the top level (most detailed) mip level.  
  
 `_Most_detailed_mip`  
 Top level (most detailed) mip level for the view, relative to the specified `texture_view` object.  
  
 `_Mip_levels`  
 The number of mipmap levels accessible through the `texture_view`.  
  
##  <a name="gather_red"></a>  texture_view::gather_red Method  
 Samples the texture at the specified coordinates by using the specified sampling configuration and returns the red (x) components of the four sampled texels.  
  
```  
const gather_return_type gather_red(
    const sampler& _Sampler,  
    const coordinates_type& _Coord) const restrict(amp);

 
template<
    address_mode _Address_mode = address_clamp  
>  
const gather_return_type gather_red(
    const coordinates_type& _Coord) const restrict(amp);
```  
  
### Parameters  
 `_Address_mode`  
 The address mode to use to sample the `texture_view`. The address mode is the same for all dimensions.  
  
 `_Sampler`  
 The sampler configuration to use to sample the `texture_view`.  
  
 `_Coord`  
 The coordinates to take the sample from. Fractional coordinate values are used to interpolate between sample texels.  
  
### Return Value  
 A rank 4 short vector containing the red (x) component of the 4 sampled texel values.  
  
##  <a name="gather_green"></a>  texture_view::gather_green Method  
 Samples the texture at the specified coordinates by using the specified sampling configuration and returns the green (y) components of the four sampled texels.  
  
```  
const gather_return_type gather_green(
    const sampler& _Sampler,  
    const coordinates_type& _Coord) const restrict(amp);

 
template<
    address_mode _Address_mode = address_clamp  
>  
const gather_return_type gather_green(
    const coordinates_type& _Coord) const restrict(amp);
```  
  
### Parameters  
 `_Address_mode`  
 The address mode to use to sample the `texture_view`. The address mode is the same for all dimensions.  
  
 `_Sampler`  
 The sampler configuration to use to sample the `texture_view`.  
  
 `_Coord`  
 The coordinates to take the sample from. Fractional coordinate values are used to interpolate between sample texels.  
  
### Return Value  
 A rank 4 short vector containing the green (y) component of the 4 sampled texel values.  
  
##  <a name="gather_blue"></a>  texture_view::gather_blue Method  
 Samples the texture at the specified coordinates by using the specified sampling configuration and returns the blue (z) components of the four sampled texels.  
  
```  
const gather_return_type gather_blue(
    const sampler& _Sampler,  
    const coordinates_type& _Coord) const restrict(amp);

 
template<
    address_mode _Address_mode = address_clamp  
>  
const gather_return_type gather_blue(
    const coordinates_type& _Coord) const restrict(amp);
```  
  
### Parameters  
 `_Address_mode`  
 The address mode to use to sample the `texture_view`. The address mode is the same for all dimensions.  
  
 `_Sampler`  
 The sampler configuration to use to sample the `texture_view`.  
  
 `_Coord`  
 The coordinates to take the sample from. Fractional coordinate values are used to interpolate between sample texels.  
  
### Return Value  
 A rank 4 short vector containing the red (x) component of the 4 sampled texel values.  
  
##  <a name="gather_alpha"></a>  texture_view::gather_alpha Method  
 Samples the texture at the specified coordinates by using the specified sampling configuration and returns the alpha (w) components of the four sampled texels.  
  
```  
const gather_return_type gather_alpha(
    const sampler& _Sampler,  
    const coordinates_type& _Coord) const restrict(amp);

 
template<
    address_mode _Address_mode = address_clamp  
>  
const gather_return_type gather_alpha(
    const coordinates_type& _Coord) const restrict(amp);
```  
  
### Parameters  
 `_Address_mode`  
 The address mode to use to sample the `texture_view`. The address mode is the same for all dimensions.  
  
 `_Sampler`  
 The sampler configuration to use to sample the `texture_view`.  
  
 `_Coord`  
 The coordinates to take the sample from. Fractional coordinate values are used to interpolate between sample texels.  
  
### Return Value  
 A rank 4 short vector containing the alpha (w) component of the 4 sampled texel values.  
  
##  <a name="get"></a>  texture_view::get Method  
 Gets the value of the element at the specified index.  
  
```  
const value_type get(
    const index<_Rank>& _Index) const restrict(amp);

 
value_type get(
    const index<_Rank>& _Index,  
    unsigned int _Mip_level = 0) const restrict(amp);
```  
  
### Parameters  
 `_Index`  
 The index of the element to get, possibly multi-dimensional.  
  
 `_Mip_level`  
 The mipmap level from which we should get the value. The default value 0 represents the most detailed mipmap level.  
  
### Return Value  
 The value of the element.  
  
##  <a name="operator_eq"></a>  texture_view::operator= Operator  
 Assigns a view of the same texture as the specified `texture_view` to this `texture_view` instance.  
  
```  
texture_view<value_type, _Rank>& operator= (// [1] copy constructor  
    const texture_view<value_type, _Rank>& _Other) restrict(amp, cpu);

 
texture_view<const value_type, _Rank>& operator= (// [2] copy constructor  
    const texture_view<value_type, _Rank>& _Other) restrict(cpu);

 
texture_view<const value_type, _Rank>& operator= (// [3] copy constructor  
    const texture_view<const value_type, _Rank>& _Other) restrict(amp, cpu);
```  
  
### Parameters  
 `_Other`  
 [1, 2] Copy Constructor  
 A writable `texture_view` object.  
  
 [3] Copy Constructor  
 A non-writable `texture_view` object.  
  
### Return Value  
 A reference to this `texture_view` instance.  
  
##  <a name="operator_at"></a>  texture_view::operator[] Operator  
 Returns the element value by index.  
  
```  
const value_type operator[] (const index<_Rank>& _Index) const restrict(amp);

 
const value_type operator[] (int _I0) const restrict(amp);

 
value_type operator[] (const index<_Rank>& _Index) const restrict(amp);

 
value_type operator[] (int _I0) const restrict(amp);
```  
  
### Parameters  
 `_Index`  
 The index, possibly multi-dimensional.  
  
 `_I0`  
 The one-dimensional index.  
  
### Return Value  
 The element value indexed by `_Index`.  
  
##  <a name="operator__"></a>  texture_view::operator() Operator  
 Returns the element value by index.  
  
```  
const value_type operator() (
    const index<_Rank>& _Index) const restrict(amp);

 
const value_type operator() (
    int _I0) const restrict(amp);

 
const value_type operator() (
    int _I0,   int _I1) const restrict(amp);

 
const value_type operator() (
    int _I0,  
    int _I1,  
    int _I2) const restrict(amp);

 
value_type operator() (
    const index<_Rank>& _Index) const restrict(amp);

 
value_type operator() (
    int _I0) const restrict(amp);

 
value_type operator() (
    int _I0,  
    int _I1) const restrict(amp);

 
value_type operator() (
    int _I0,  
    int _I1,  
    int _I2) const restrict(amp);
```  
  
### Parameters  
 `_Index`  
 The index, possibly multi-dimensional.  
  
 `_I0`  
 The most-significant component of the index.  
  
 `_I1`  
 The next-to-most-significant component of the index.  
  
 `_I2`  
 The least-significant component of the index.  
  
### Return Value  
 The element value indexed by `_Index`.  
  
##  <a name="sample"></a>  texture_view::sample Method  
 Samples the texture at the specified coordinates and level of detail by using the specified sampling configuration.  
  
```  
value_type sample(
    const sampler& _Sampler,  
    const coordinates_type& _Coord,  
    float _Level_of_detail = 0.0f) const restrict(amp);

 
template<
    filter_mode _Filter_mode = filter_linear,  
    address_mode _Address_mode = address_clamp  
>  
value_type sample(
    const coordinates_type& _Coord,  
    float _Level_of_detail = 0.0f) const restrict(amp);
```  
  
### Parameters  
 `_Filter_mode`  
 The filter mode to use to sample the texture_view. The filter mode is the same for the minimization, maximization, and mipmap filters.  
  
 `_Address_mode`  
 The address mode to use to sample the texture_view. The address mode is the same for all dimensions.  
  
 `_Sampler`  
 The sampler configuration to use to sample the texture_view.  
  
 `_Coord`  
 The coordinates to take the sample from. Fractional coordinate values are used to interpolate between texel values.  
  
 `_Level_of_detail`  
 The value specifies the mipmap level to sample from. Fractional values are used to interpolate between two mipmap levels. The default level of detail is 0, which represents the most detailed mip level.  
  
### Return Value  
 The interpolated sample value.  
  
##  <a name="set"></a>  texture_view::set Method  
 Sets the value of the element at the specified index to the specified value.  
  
```  
void set(
    const index<_Rank>& _Index,  
    const value_type& value) const restrict(amp);
```  
  
### Parameters  
 `_Index`  
 The index of the element to set, possibly multi-dimensional.  
  
 `value`  
 The value to set the element to.  
  
##  <a name="value_type"></a>  texture_view::value_type Data Member  
 The value type of the elements of the texture_view.  
  
```  
typedef typename const value_type value_type;  
```  
  
## See Also  
 [Concurrency::graphics Namespace](concurrency-graphics-namespace.md)
