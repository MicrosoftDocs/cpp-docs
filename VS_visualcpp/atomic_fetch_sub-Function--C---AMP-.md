---
title: "atomic_fetch_sub Function (C++ AMP)"
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
ms.assetid: 516cc457-30ec-45a6-9963-5243927ee92b
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
# atomic_fetch_sub Function (C++ AMP)
Atomically subtracts a value from a memory location.  
  
## Syntax  
  
```  
inline int atomic_fetch_sub(  
    _Inout_ int * _Dest,  
    int _Value ) restrict(amp);  
  
inline unsigned int atomic_fetch_sub(  
    _Inout_ unsigned int * _Dest,  
    unsigned int _Value ) restrict(amp);  
```  
  
#### Parameters  
 `_Dest`  
 Pointer to the destionation location.  
  
 `_Value`  
 The value to be subtracted.  
  
## Return Value  
 The original value of the memory location.  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](../VS_visualcpp/Concurrency-Namespace--C---AMP-.md)