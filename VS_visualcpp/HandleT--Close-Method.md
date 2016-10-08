---
title: "HandleT::Close Method"
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
ms.assetid: 1b9d597c-abcf-4028-a068-0344560009f6
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
# HandleT::Close Method
Closes the current HandleT object.  
  
## Syntax  
  
```  
void Close();  
```  
  
## Remarks  
 The handle that underlies the current HandleT is closed, and the HandleT is set to the invalid state.  
  
 If the handle doesn't close properly, an exception is raised in the calling thread.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [HandleT Class](../VS_visualcpp/HandleT-Class.md)