---
title: "ComPtrRefBase::operator IUnknown** Operator"
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
ms.assetid: c2950abf-a7aa-480a-ba41-615703e7f931
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
# ComPtrRefBase::operator IUnknown** Operator
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
operator IUnknown**() const;  
```  
  
## Remarks  
 Casts the current [ptr_](../VS_visualcpp/ComPtrRefBase--ptr_-Data-Member.md) data member to a pointer-to-a-pointer-to the IUnknown interface.  
  
 An error is emitted if the current ComPtrRefBase doesn't derive from IUnknown.  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [ComPtrRefBase Class](../VS_visualcpp/ComPtrRefBase-Class.md)   
 [Microsoft::WRL::Details Namespace](../VS_visualcpp/Microsoft--WRL--Details-Namespace.md)