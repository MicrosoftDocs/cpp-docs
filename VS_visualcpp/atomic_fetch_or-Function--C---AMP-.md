---
title: "atomic_fetch_or Function (C++ AMP)"
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
ms.assetid: 35f3fa2a-1185-41c1-9f32-02ec83295fad
caps.latest.revision: 8
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
# atomic_fetch_or Function (C++ AMP)
Atomically performs a bitwise OR operation with a value and the value of a memory location.  
  
## Syntax  
  
```  
inline int atomic_fetch_or(  
    _Inout_ int * _Dest,  
    int _Value ) restrict(amp);  
  
inline unsigned int atomic_fetch_or(  
    _Inout_ unsigned int * _Dest,  
    unsigned int _Value ) restrict(amp);  
```  
  
#### Parameters  
 `_Dest`  
 Pointer to the memory location.  
  
 `_Value`  
 The value to use in the bitwise OR calculation.  
  
## Return Value  
 The original value of the memory location.  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](../VS_visualcpp/Concurrency-Namespace--C---AMP-.md)