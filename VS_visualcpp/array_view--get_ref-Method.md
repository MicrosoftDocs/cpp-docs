---
title: "array_view::get_ref Method"
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
ms.assetid: 73b20d1a-b1a5-42d1-aa60-6de1ecef7a46
caps.latest.revision: 5
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
# array_view::get_ref Method
Get a reference to the element indexed by _Index. Unlike the other indexing operators for accessing the array_view on the CPU, this method does not implicitly synchronize this array_view's contents to the CPU. After accessing the array_view on a remote location or performing a copy operation involving this array_view users are responsible to explicitly synchronize the array_view to the CPU before calling this method. Failure to do so results in undefined behavior.  
  
## Syntax  
  
```  
value_type& get_ref(  
    const index<_Rank>& _Index ) const restrict(amp, cpu);  
```  
  
#### Parameters  
 `_Index`  
 The index.  
  
## Return Value  
 Reference to the element indexed by _Index  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** concurrency  
  
## See Also  
 [array_view Class](../VS_visualcpp/array_view-Class.md)