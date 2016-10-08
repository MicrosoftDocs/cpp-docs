---
title: "writeonly_texture_view Class"
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
ms.assetid: 8d117ad3-0a1c-41ae-b29c-7c95fdd4d04d
caps.latest.revision: 7
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
# writeonly_texture_view Class
Provides writeonly access to a texture.  
  
## Syntax  
  
```  
template <  
    typename _Value_type,  
    int _Rank  
>  
class writeonly_texture_view;  
  
template <  
    typename _Value_type,  
    int _Rank  
>  
class writeonly_texture_view< _Value_type, _Rank> : public details::_Texture_base< _Value_type, _Rank>;  
```  
  
#### Parameters  
 `_Value_type`  
 The type of the elements in the texture.  
  
 `_Rank`  
 The rank of the texture.  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`scalar_type`||  
|`value_type`|The type of the elements in the texture.|  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[writeonly_texture_view::writeonly_texture_view Constructor](#writeonly_texture_view__writeonly_texture_view_constructor)|Initializes a new instance of the [writeonly_texture_view](../VS_visualcpp/writeonly_texture_view-Class.md) class.|  
|[writeonly_texture_view::~writeonly_texture_view Destructor](#writeonly_texture_view___dtorwriteonly_texture_view_destructor)|Destroys the [writeonly_texture_view](../VS_visualcpp/writeonly_texture_view-Class.md) object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[writeonly_texture_view::set Method](#writeonly_texture_view__set_method)|Sets the value of the element at the specified index.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[writeonly_texture_view::operator= Operator](#writeonly_texture_view__operator_eq_operator)|Copies the specified [writeonly_texture_view](../VS_visualcpp/writeonly_texture_view-Class.md) object to this one.|  
  
### Public Constants  
  
|Name|Description|  
|----------|-----------------|  
|[writeonly_texture_view::rank Constant](#writeonly_texture_view__rank_constant)|Gets the rank of the [writeonly_texture_view](../VS_visualcpp/writeonly_texture_view-Class.md) object.|  
  
## Inheritance Hierarchy  
 `_Texture_base`  
  
 `writeonly_texture_view`  
  
## Requirements  
 **Header:** amp_graphics.h  
  
 **Namespace:** Concurrency::graphics  
  
##  <a name="writeonly_texture_view___dtorwriteonly_texture_view_destructor"></a>  writeonly_texture_view::~writeonly_texture_view Destructor  
 Destroys the [writeonly_texture_view](../VS_visualcpp/writeonly_texture_view-Class.md) object.  
  
```  
~writeonly_texture_view() restrict(amp,cpu);  
```  
  
##  <a name="writeonly_texture_view__operator_eq_operator"></a>  writeonly_texture_view::operator= Operator  
 Copies the specified [writeonly_texture_view](../VS_visualcpp/writeonly_texture_view-Class.md) object to this one.  
  
```  
writeonly_texture_view<_Value_type, _Rank>&  operator= (  
    const writeonly_texture_view<_Value_type, _Rank>& _Other ) restrict(amp,cpu);  
```  
  
### Parameters  
 `_Other`  
 [writeonly_texture_view](../VS_visualcpp/writeonly_texture_view-Class.md) object to copy from.  
  
### Return Value  
 A reference to this [writeonly_texture_view](../VS_visualcpp/writeonly_texture_view-Class.md) object.  
  
##  <a name="writeonly_texture_view__rank_constant"></a>  writeonly_texture_view::rank Constant  
 Gets the rank of the [writeonly_texture_view](../VS_visualcpp/writeonly_texture_view-Class.md) object.  
  
```  
static const int rank = _Rank;  
```  
  
##  <a name="writeonly_texture_view__set_method"></a>  writeonly_texture_view::set Method  
 Sets the value of the element at the specified index.  
  
```  
void set(  
    const index<_Rank>& _Index,  
    const value_type& _Value ) const restrict(amp);  
```  
  
### Parameters  
 `_Index`  
 The index of the element.  
  
 `_Value`  
 The new value of the element.  
  
##  <a name="writeonly_texture_view__writeonly_texture_view_constructor"></a>  writeonly_texture_view::writeonly_texture_view Constructor  
 Initializes a new instance of the [writeonly_texture_view](../VS_visualcpp/writeonly_texture_view-Class.md) class.  
  
```  
writeonly_texture_view(  
    texture<_Value_type,  
    _Rank>& _Src ) restrict(amp);  
  
writeonly_texture_view(  
    const writeonly_texture_view<_Value_type,  
    _Rank>& _Src ) restrict(amp,cpu);  
```  
  
### Parameters  
 `_Rank`  
 The rank of the texture.  
  
 `_Value_type`  
 The type of the elements in the texture.  
  
 `_Src`  
 The texture that is used to create the `writeonly_texture_view`.  
  
## See Also  
 [Concurrency::graphics Namespace](../VS_visualcpp/Concurrency--graphics-Namespace.md)