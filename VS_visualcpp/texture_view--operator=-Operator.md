---
title: "texture_view::operator= Operator"
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
ms.assetid: 67cb273a-8027-45d3-bc47-fcde31c89ce4
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
# texture_view::operator= Operator
Assigns a view of the same texture as the specified `texture_view` to this `texture_view` instance.  
  
## Syntax  
  
```  
texture_view<_Value_type, _Rank>& operator=(        // [1] copy constructor  
   const texture_view<_Value_type, _Rank>& _Other  
) restrict(amp, cpu);  
  
texture_view<const _Value_type, _Rank>& operator=(  // [2] copy constructor  
   const texture_view<_Value_type, _Rank>& _Other  
) restrict(cpu);  
  
texture_view<const _Value_type, _Rank>& operator=(  // [3] copy constructor  
   const texture_view<const _Value_type, _Rank>& _Other  
) restrict(amp, cpu);  
```  
  
#### Parameters  
 `_Other`  
 [1, 2] Copy Constructor  
 A writable `texture_view` object.  
  
 [3] Copy Constructor  
 A non-writable `texture_view` object.  
  
## Return Value  
 A reference to this `texture_view` instance.  
  
## Requirements  
 **Header:** amp_graphics.h  
  
 **Namespace:** concurrency::graphics  
  
## See Also  
 [texture_view Class](../VS_visualcpp/texture_view-Class.md)