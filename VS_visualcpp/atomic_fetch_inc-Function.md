---
title: "atomic_fetch_inc Function"
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
ms.assetid: 1101d9db-cf79-4110-b0e3-ffdb610c0285
caps.latest.revision: 8
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
# atomic_fetch_inc Function
Atomically increments the value stored at the specified memory location.  
  
## Syntax  
  
```  
inline int atomic_fetch_inc(  
    _Inout_ int * _Dest ) restrict(amp);  
  
inline unsigned int atomic_fetch_inc(  
    _Inout_ unsigned int * _Dest ) restrict(amp);  
```  
  
#### Parameters  
 `_Dest`  
 The location in memory of the value to be incremented.  
  
## Return Value  
 The original value stored at the memory location.  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](../VS_visualcpp/Concurrency-Namespace--C---AMP-.md)