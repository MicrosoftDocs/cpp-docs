---
title: "global_memory_fence Function"
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
ms.assetid: 3ea85d0d-3261-4e01-8c4f-593baf53bd24
caps.latest.revision: 9
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
# global_memory_fence Function
Blocks execution of all threads in a tile until all global memory accesses have been completed. This ensures that global memory accesses are visible to other threads in the thread tile, and are executed in program order.  
  
## Syntax  
  
```  
inline void global_memory_fence(    const tile_barrier & _Barrier ) restrict(amp);  
```  
  
#### Parameters  
 `_Barrier`  
 A tile_barrier object  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency::direct3d  
  
## See Also  
 [Concurrency::direct3d Namespace](../VS_visualcpp/Concurrency--direct3d-Namespace.md)