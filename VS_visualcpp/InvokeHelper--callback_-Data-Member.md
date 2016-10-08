---
title: "InvokeHelper::callback_ Data Member"
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
ms.assetid: 6f0cbf6d-0448-46f8-ba71-bd6fd8702e3a
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
# InvokeHelper::callback_ Data Member
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
TCallback callback_;  
```  
  
## Remarks  
 Represents the event handler to call when an event occurs.  
  
 The `TCallback` template parameter specifies the type of the event handler.  
  
## Requirements  
 **Header:** event.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [InvokeHelper Structure](../VS_visualcpp/InvokeHelper-Structure.md)   
 [Microsoft::WRL::Details Namespace](../VS_visualcpp/Microsoft--WRL--Details-Namespace.md)