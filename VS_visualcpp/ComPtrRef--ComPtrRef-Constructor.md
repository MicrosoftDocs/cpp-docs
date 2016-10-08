---
title: "ComPtrRef::ComPtrRef Constructor"
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
ms.assetid: ce2d2533-fef6-4b2d-b088-6f3db01df5a5
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
# ComPtrRef::ComPtrRef Constructor
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
ComPtrRef(  
   _In_opt_ T* ptr  
);  
```  
  
#### Parameters  
 `ptr`  
 The underlying value of another ComPtrRef object.  
  
## Remarks  
 Initializes a new instance of the ComPtrRef class from the specified pointer to another ComPtrRef object.  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [ComPtrRef Class](../VS_visualcpp/ComPtrRef-Class.md)   
 [Microsoft::WRL::Details Namespace](../VS_visualcpp/Microsoft--WRL--Details-Namespace.md)