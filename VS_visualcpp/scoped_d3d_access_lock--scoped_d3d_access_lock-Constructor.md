---
title: "scoped_d3d_access_lock::scoped_d3d_access_lock Constructor"
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
ms.assetid: 08b98db7-f948-4fc3-b13c-b435c8dd9695
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
# scoped_d3d_access_lock::scoped_d3d_access_lock Constructor
Constructs a `scoped_d3d_access_lock` object. The lock is released when this object goes out of scope.  
  
## Syntax  
  
```  
explicit scoped_d3d_access_lock( // [1] constructor  
    accelerator_view & _Av );  
  
explicit scoped_d3d_access_lock( // [2] constructor  
    accelerator_view & _Av,  
    adopt_d3d_access_lock_t _T );  
  
scoped_d3d_access_lock( // [3] move constructor  
    scoped_d3d_access_lock && _Other );  
```  
  
#### Parameters  
 `_Av`  
 The `accelerator_view` for the lock to adopt.  
  
 `_T`  
 The `adopt_d3d_access_lock_t` object.  
  
 `_Other`  
 The `scoped_d3d_access_lock` object from which to move an existing lock.  
  
## Construction  
 [1] Constructor  
 Acquires a D3D access lock on the given [accelerator_view](../VS_visualcpp/accelerator_view-Class.md) object. Construction blocks until the lock is acquired.  
  
 [2] Constructor  
 Adopt a D3D access lock from the given [accelerator_view](../VS_visualcpp/accelerator_view-Class.md) object.  
  
 [3] Move Constructor  
 Takes an existing D3D access lock from another `scoped_d3d_access_lock` object. Construction does not block.  
  
## Requirements  
 **Header:** amprt.h  
  
 **Namespace:** concurrency::direct3d  
  
## See Also  
 [scoped_d3d_access_lock Class](../VS_visualcpp/scoped_d3d_access_lock-Class.md)