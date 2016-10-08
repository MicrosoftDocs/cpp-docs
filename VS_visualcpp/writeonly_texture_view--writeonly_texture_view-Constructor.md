---
title: "writeonly_texture_view::writeonly_texture_view Constructor"
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
ms.assetid: cde30944-8f69-4866-b8e4-2164cc0157e4
caps.latest.revision: 4
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# writeonly_texture_view::writeonly_texture_view Constructor
Initializes a new instance of the [writeonly_texture_view](../VS_visualcpp/writeonly_texture_view-Class.md) class.  
  
## Syntax  
  
```  
writeonly_texture_view(  
   texture<_Value_type,  
   _Rank>& _Src                       
) restrict(amp);  
  
writeonly_texture_view(  
   const writeonly_texture_view<_Value_type,  
   _Rank>& _Src                       
) restrict(amp,cpu);  
```  
  
#### Parameters  
 `_Rank`  
 The rank of the texture.  
  
 `_Value_type`  
 The type of the elements in the texture.  
  
 `_Src`  
 The texture that is used to create the `writeonly_texture_view`.  
  
## Requirements  
 **Header:** amp_graphics.h  
  
 **Namespace:** Concurrency::graphics  
  
## See Also  
 [writeonly_texture_view Class](../VS_visualcpp/writeonly_texture_view-Class.md)