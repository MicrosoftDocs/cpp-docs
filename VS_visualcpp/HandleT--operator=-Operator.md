---
title: "HandleT::operator= Operator"
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
ms.assetid: 9e42dcca-30fa-4e8b-8954-802fd64a5595
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
# HandleT::operator= Operator
Moves the value of the specified HandleT object to the current HandleT object.  
  
## Syntax  
  
```  
HandleT& operator=(  
   _Inout_ HandleT&& h  
);  
```  
  
#### Parameters  
 `h`  
 An rvalue-reference to a handle.  
  
## Return Value  
 A reference to the current HandleT object.  
  
## Remarks  
 This operation invalidates the HandleT object specified by parameter `h`.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [HandleT Class](../VS_visualcpp/HandleT-Class.md)