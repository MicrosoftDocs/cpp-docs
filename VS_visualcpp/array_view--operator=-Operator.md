---
title: "array_view::operator= Operator"
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
ms.assetid: 7c716b87-a34e-4130-b4ef-ba272830f612
caps.latest.revision: 13
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
# array_view::operator= Operator
Copies the contents of the specified [array_view](../VS_visualcpp/array_view-Class.md) object to this one.  
  
## Syntax  
  
```  
array_view&  operator= (  
    const array_view& _Other ) restrict(amp,cpu);  
  
array_view&  operator= (  
    const array_view<_Value_type, _Rank>& _Other ) restrict(amp,cpu);  
```  
  
#### Parameters  
 `_Other`  
 The `array_view` object to copy from.  
  
## Return Value  
 A reference to this `array_view` object.  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [array_view Class](../VS_visualcpp/array_view-Class.md)