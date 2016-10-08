---
title: "d3d_access_unlock Function"
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
ms.assetid: e09858f3-9db8-476a-874f-8a68edbe2953
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
# d3d_access_unlock Function
Release the D3D access lock on the given accelerator_view. If the calling thread does not hold the lock on the accelerator_view the results are undefined.  
  
## Syntax  
  
```  
void __cdecl d3d_access_unlock(    accelerator_view & _Av );  
```  
  
#### Parameters  
 `_Av`  
 The accelerator_view for which the lock is to be released.  
  
## Requirements  
 **Header:** amprt.h  
  
 **Namespace:** concurrency::direct3d  
  
## See Also  
 [Concurrency::direct3d Namespace](../VS_visualcpp/Concurrency--direct3d-Namespace.md)