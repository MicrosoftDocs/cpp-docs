---
title: "WorkerArchetype::Terminate"
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
ms.topic: reference
ms.assetid: 9bb841f2-fed6-4808-a2af-440b25ec91db
caps.latest.revision: 10
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
# WorkerArchetype::Terminate
Called to uninitialize the worker object after all requests have been passed to [Execute](../VS_visualcpp/WorkerArchetype--Execute.md).  
  
## Syntax  
  
```  
  
      void Terminate(  
   void* pvParam  
) throw( );  
```  
  
#### Parameters  
 `pvParam`  
 A custom parameter understood by the worker class. Also passed to [Initialize](../VS_visualcpp/WorkerArchetype--Initialize.md) and [Execute](../VS_visualcpp/WorkerArchetype--Execute.md).  
  
## Requirements  
 **Header:** atlutil.h  
  
## See Also  
 [Worker Archetype](../VS_visualcpp/Worker-Archetype.md)