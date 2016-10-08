---
title: "ComPtrRef::operator void** Operator"
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
ms.assetid: f020045c-9de4-4392-8783-73f0fc0761c6
caps.latest.revision: 5
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
# ComPtrRef::operator void** Operator
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
operator void**() const;  
```  
  
## Remarks  
 Deletes the current ComPtrRef object, casts the pointer to the interface that was represented by the ComPtrRef object as a pointer-to-pointer-to `void`, and then returns the cast pointer.  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [ComPtrRef Class](../VS_visualcpp/ComPtrRef-Class.md)   
 [Microsoft::WRL::Details Namespace](../VS_visualcpp/Microsoft--WRL--Details-Namespace.md)