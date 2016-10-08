---
title: "tile_barrier::wait Method"
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
ms.assetid: 98aa8ef0-ed25-49c1-90ab-c6516c3a7a8f
caps.latest.revision: 12
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
# tile_barrier::wait Method
Instructs all threads in the thread group (tile) to stop execution until all threads in the tile have finished waiting.  
  
## Syntax  
  
```  
void wait() const restrict(amp);  
```  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [tile_barrier Class](../VS_visualcpp/tile_barrier-Class.md)