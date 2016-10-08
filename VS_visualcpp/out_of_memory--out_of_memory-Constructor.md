---
title: "out_of_memory::out_of_memory Constructor"
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
ms.assetid: 139eae79-378f-4fa6-b907-1eaef8d69744
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
# out_of_memory::out_of_memory Constructor
Initializes a new instance of the [out_of_memory](../VS_visualcpp/out_of_memory-Class.md) class.  
  
## Syntax  
  
```  
explicit out_of_memory(  
    const char * _Message ) throw();  
  
out_of_memory () throw();  
```  
  
#### Parameters  
 `_Message`  
 A description of the error.  
  
## Return Value  
 A new instance of the `out_of_memory` class.  
  
## Requirements  
 **Header:** amprt.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [out_of_memory Class](../VS_visualcpp/out_of_memory-Class.md)