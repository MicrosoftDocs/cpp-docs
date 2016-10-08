---
title: "tile_barrier::wait_with_tile_static_memory_fence Method"
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
ms.assetid: 65109506-63a0-4219-ae61-03974355c09c
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
# tile_barrier::wait_with_tile_static_memory_fence Method
Blocks execution of all threads in a tile until all threads in a tile have reached this call. This ensures that `tile_static`memory accesses are visible to other threads in the thread tile, and have been executed in program order.  
  
## Syntax  
  
```  
void wait_with_tile_static_memory_fence() const restrict(amp);  
```  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [tile_barrier Class](../VS_visualcpp/tile_barrier-Class.md)