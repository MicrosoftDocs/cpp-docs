---
title: "make_texture Function"
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
ms.assetid: abf23804-dac7-455b-826e-c50f57e8f4b7
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
# make_texture Function
Creates a [texture](../VS_visualcpp/texture-Class.md) object by using the specified parameters.  
  
## Syntax  
  
```  
template<  
   typename _Value_type,  
   int _Rank  
>  
texture<_Value_type, _Rank> make_texture(  
   const Concurrency::accelerator_view &_Av,  
   _In_ IUnknown *_D3D_texture,  
   DXGI_FORMAT _View_format = DXGI_FORMAT_UNKNOWN  
) restrict(cpu);  
```  
  
#### Parameters  
 `_Value_type`  
 The type of the elements in the texture.  
  
 `_Rank`  
 The rank of the texture.  
  
 `_Av`  
 A D3D accelerator view on which the texture is to be created.  
  
 `_D3D_texture`  
 IUnknown interface pointer of the D3D texture to create the texture from.  
  
 `_View_format`  
 The DXGI format to use for views created from this texture. Pass DXGI_FORMAT_UNKNOWN (the default) to derive the format from the underlying format of _D3D_texture and the _Value_type of this template. The provided format must be compatible with the underlying format of _D3D_texture.  
  
## Return Value  
 A texture using the provided D3D texture.  
  
## Requirements  
 **Header:** amp_graphics.h  
  
 **Namespace:** Concurrency::graphics::direct3d  
  
## See Also  
 [Concurrency::graphics::direct3d Namespace](../VS_visualcpp/Concurrency--graphics--direct3d-Namespace.md)