---
title: "d3d_access_lock Function"
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
ms.assetid: aa6bd716-8adf-4164-9455-c982f4221287
caps.latest.revision: 4
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
# d3d_access_lock Function
Acquire a lock on an accelerator_view for the purpose of safely performing D3D operations on resources shared with the accelerator_view. The accelerator_view and all C++ AMP resources associated with this accelerator_view internally take this lock when performing operations and will block while another thread holds the D3D access lock. This lock is non-recursive: It is undefined behavior to call this function from a thread that already holds the lock. It is undefined behavior to perform operations on the accelerator_view or any data container associated with the accelerator_view from the thread that holds the D3D access lock. See also scoped_d3d_access_lock, a RAII-style class for a scope-based D3D access lock.  
  
## Syntax  
  
```  
void __cdecl d3d_access_lock(    accelerator_view & _Av );  
```  
  
#### Parameters  
 `_Av`  
 The accelerator_view to lock.  
  
## Requirements  
 **Header:** amprt.h  
  
 **Namespace:** concurrency::direct3d  
  
## See Also  
 [Concurrency::direct3d Namespace](../VS_visualcpp/Concurrency--direct3d-Namespace.md)