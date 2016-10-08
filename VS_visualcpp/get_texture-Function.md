---
title: "get_texture Function"
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
ms.assetid: 4f3354b8-3d5b-4feb-8825-95f32175d7e0
caps.latest.revision: 6
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
# get_texture Function
Gets the Direct3D texture interface underlying the specified [texture](../VS_visualcpp/texture-Class.md) object.  
  
## Syntax  
  
```  
template<  
   typename _Value_type,  
   int _Rank  
>  
_Ret_ IUnknown *get_texture(  
   const texture<_Value_type, _Rank> &_Texture  
) restrict(cpu);  
  
template<  
   typename _Value_type,  
   int _Rank  
>  
_Ret_ IUnknown *get_texture(  
   const writeonly_texture_view<_Value_type, _Rank> &_Texture  
) restrict(cpu);  
  
template<  
   typename _Value_type,  
   int _Rank  
>  
_Ret_ IUnknown *get_texture(  
   const texture_view<_Value_type, _Rank> &_Texture  
) restrict(cpu);  
  
```  
  
#### Parameters  
 `_Value_type`  
 The element type of the texture.  
  
 `_Rank`  
 The rank of the texture.  
  
 `_Texture`  
 A texture or texture view associated with the accelerator_view for which the underlying Direct3D texture interface is returned.  
  
## Return Value  
 The IUnknown interface pointer corresponding to the Direct3D texture underlying the texture.  
  
## Requirements  
 **Header:** amp_graphics.h  
  
 **Namespace:** Concurrency::graphics::direct3d  
  
## See Also  
 [Concurrency::graphics::direct3d Namespace](../VS_visualcpp/Concurrency--graphics--direct3d-Namespace.md)