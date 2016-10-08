---
title: "HandleT::Attach Method"
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
ms.assetid: a8783a18-bbf6-456c-98a3-e2048a10d79f
caps.latest.revision: 3
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
# HandleT::Attach Method
Associates the specified handle with the current HandleT object.  
  
## Syntax  
  
```  
void Attach(  
   typename HandleTraits::Type h  
);  
```  
  
#### Parameters  
 `h`  
 A handle.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [HandleT Class](../VS_visualcpp/HandleT-Class.md)