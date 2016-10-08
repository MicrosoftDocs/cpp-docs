---
title: "make_sampler Function"
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
ms.assetid: 135310d3-360b-47f7-80c2-87f3601208e7
caps.latest.revision: 3
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
# make_sampler Function
Create a sampler from a D3D sampler state interface pointer.  
  
## Syntax  
  
```  
sampler make_sampler(  
   _In_ IUnknown *_D3D_sampler  
) restrict(amp);  
```  
  
#### Parameters  
 `_D3D_sampler`  
 IUnknown interface pointer of the D3D sampler state to create the sampler from.  
  
## Return Value  
 A sampler represents the provided D3D sampler state.  
  
## Requirements  
 **Header:** amp_graphics.h  
  
 **Namespace:** concurrency::graphics::direct3d  
  
## See Also  
 [Concurrency::graphics::direct3d Namespace](../VS_visualcpp/Concurrency--graphics--direct3d-Namespace.md)