---
title: "ComPtrRef::operator* Operator"
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
ms.assetid: 0287ca7a-4ce1-47f7-bab6-714fca3e04bb
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
# ComPtrRef::operator* Operator
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
InterfaceType* operator *();  
```  
  
## Return Value  
 Pointer to the interface represented by the current ComPtrRef object.  
  
## Remarks  
 Retrieves the pointer to the interface represented by the current ComPtrRef object.  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [ComPtrRef Class](../VS_visualcpp/ComPtrRef-Class.md)   
 [Microsoft::WRL::Details Namespace](../VS_visualcpp/Microsoft--WRL--Details-Namespace.md)