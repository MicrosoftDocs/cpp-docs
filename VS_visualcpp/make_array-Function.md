---
title: "make_array Function"
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
ms.assetid: 2f67952e-c52f-4a4c-b4bb-488a964bc8cf
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
# make_array Function
Create an array from a Direct3D buffer interface pointer.  
  
## Syntax  
  
```  
template<  
    typename _Value_type,  
    int _Rank  
>  
array< _Value_type, _Rank> make_array(  
    const extent< _Rank> & _Extent,  
    const Concurrency::accelerator_view & _Rv,  
    IUnknown * _D3D_buffer )  ;  
```  
  
#### Parameters  
 `_Value_type`  
 The element type of the array to be created.  
  
 `_Rank`  
 The rank of the array to be created.  
  
 `_Extent`  
 An extent that describes the shape of the array aggregate.  
  
 `_Rv`  
 A D3D accelerator view on which the array is to be created.  
  
 `_D3D_buffer`  
 IUnknown interface pointer of the D3D buffer to create the array from.  
  
## Return Value  
 An array created using the provided Direct3D buffer.  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency::direct3d  
  
## See Also  
 [Concurrency::direct3d Namespace](../VS_visualcpp/Concurrency--direct3d-Namespace.md)