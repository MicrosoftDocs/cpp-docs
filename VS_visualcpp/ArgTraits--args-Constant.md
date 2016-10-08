---
title: "ArgTraits::args Constant"
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
ms.assetid: a68100ab-254b-4571-a0bc-946f1633a46b
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
# ArgTraits::args Constant
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
static const int args = -1; ;  
```  
  
## Remarks  
 Keeps count of the number of parameters on the Invoke method of a delegate interface.  
  
## Remarks  
 When `args` equals -1 indicates there can be no match for the Invoke method signature.  
  
## Requirements  
 **Header:** event.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [ArgTraits Structure](../VS_visualcpp/ArgTraits-Structure.md)   
 [Microsoft::WRL::Details Namespace](../VS_visualcpp/Microsoft--WRL--Details-Namespace.md)