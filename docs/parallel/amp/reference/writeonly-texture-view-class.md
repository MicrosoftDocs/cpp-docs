---
title: "writeonly_texture_view Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "amp_graphics/Concurrency::graphics::writeonly_texture_view"
dev_langs: 
  - "C++"
ms.assetid: 8d117ad3-0a1c-41ae-b29c-7c95fdd4d04d
caps.latest.revision: 9
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
# writeonly_texture_view Class
Provides writeonly access to a texture.  
  
## Syntax  
  
```  
template <
    typename value_type,  
    int _Rank  
>  
class writeonly_texture_view;  
 
template <
    typename value_type,  
    int _Rank  
>  
class writeonly_texture_view<value_type, _Rank> : public details::_Texture_base<value_type, _Rank>;  
```  
  
#### Parameters  
 `value_type`  
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
|[writeonly_texture_view::writeonly_texture_view Constructor](#ctor)|Initializes a new instance of the [writeonly_texture_view](writeonly-texture-view-class.md) class.|  
|[writeonly_texture_view::~writeonly_texture_view Destructor](#ctor)|Destroys the [writeonly_texture_view](writeonly-texture-view-class.md) object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[writeonly_texture_view::set Method](#set)|Sets the value of the element at the specified index.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[writeonly_texture_view::operator= Operator](#operator_eq)|Copies the specified [writeonly_texture_view](writeonly-texture-view-class.md) object to this one.|  
  
### Public Constants  
  
|Name|Description|  
|----------|-----------------|  
|[writeonly_texture_view::rank Constant](#rank)|Gets the rank of the [writeonly_texture_view](writeonly-texture-view-class.md) object.|  
  
## Inheritance Hierarchy  
 `_Texture_base`  
  
 `writeonly_texture_view`  
  
## Requirements  
 **Header:** amp_graphics.h  
  
 **Namespace:** Concurrency::graphics  
  
##  <a name="dtor"></a>  writeonly_texture_view::~writeonly_texture_view Destructor  
 Destroys the [writeonly_texture_view](writeonly-texture-view-class.md) object.  
  
```  
~writeonly_texture_view() restrict(amp,cpu);
```  
  
##  <a name="operator_eq"></a>  writeonly_texture_view::operator= Operator  
 Copies the specified [writeonly_texture_view](writeonly-texture-view-class.md) object to this one.  
  
```  
writeonly_texture_view<value_type, _Rank>& operator= (
    const writeonly_texture_view<value_type, _Rank>& _Other) restrict(amp,cpu);
```  
  
### Parameters  
 `_Other`  
 [writeonly_texture_view](writeonly-texture-view-class.md) object to copy from.  
  
### Return Value  
 A reference to this [writeonly_texture_view](writeonly-texture-view-class.md) object.  
  
##  <a name="rank"></a>  writeonly_texture_view::rank Constant  
 Gets the rank of the [writeonly_texture_view](writeonly-texture-view-class.md) object.  
  
```  
static const int rank = _Rank;  
```  
  
##  <a name="set"></a>  writeonly_texture_view::set Method  
 Sets the value of the element at the specified index.  
  
```  
void set(
    const index<_Rank>& _Index,  
    const value_type& value) const restrict(amp);
```  
  
### Parameters  
 `_Index`  
 The index of the element.  
  
 `value`  
 The new value of the element.  
  
##  <a name="ctor"></a>  writeonly_texture_view::writeonly_texture_view Constructor  
 Initializes a new instance of the [writeonly_texture_view](writeonly-texture-view-class.md) class.  
  
```  
writeonly_texture_view(
    texture<value_type, 
    _Rank>& _Src) restrict(amp);

 
writeonly_texture_view(
    const writeonly_texture_view<value_type,  
    _Rank>& _Src) restrict(amp,cpu);
```  
  
### Parameters  
 `_Rank`  
 The rank of the texture.  
  
 `value_type`  
 The type of the elements in the texture.  
  
 `_Src`  
 The texture that is used to create the `writeonly_texture_view`.  
  
## See Also  
 [Concurrency::graphics Namespace](concurrency-graphics-namespace.md)
