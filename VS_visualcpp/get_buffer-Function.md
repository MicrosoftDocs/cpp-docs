---
title: "get_buffer Function"
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
ms.assetid: 2318772a-3254-42c0-b450-a9cc3967e843
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
# get_buffer Function
Get the Direct3D buffer interface underlying the specified array.  
  
## Syntax  
  
```  
template<  
    typename _Value_type,  
    int _Rank  
>  
IUnknown *get_buffer(  
    const array< _Value_type, _Rank> & _Array )  ;  
```  
  
#### Parameters  
 `_Value_type`  
 The type of elements in the array.  
  
 `_Rank`  
 The rank of the array.  
  
 `_Array`  
 An array on a Direct3D accelerator_view for which the underlying Direct3D buffer interface is returned.  
  
## Return Value  
 The IUnknown interface pointer corresponding to the Direct3D buffer underlying the array.  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency::direct3d  
  
## See Also  
 [Concurrency::direct3d Namespace](../VS_visualcpp/Concurrency--direct3d-Namespace.md)