---
title: "ModuleBase::DecrementObjectCount Method"
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
ms.assetid: a016fb07-a36e-40cd-bc7b-8f6e85e256e7
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
# ModuleBase::DecrementObjectCount Method
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
virtual long DecrementObjectCount() = 0;  
```  
  
## Return Value  
 The count before the decrement operation.  
  
## Remarks  
 When implemented, decrements the number of objects tracked by the module.  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [ModuleBase Class](../VS_visualcpp/ModuleBase-Class.md)   
 [Microsoft::WRL::Details Namespace](../VS_visualcpp/Microsoft--WRL--Details-Namespace.md)