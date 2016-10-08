---
title: "MakeAllocator::~MakeAllocator Destructor"
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
ms.assetid: f1299c5f-cc6b-4d4e-85d4-aee1be0e2b0a
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
# MakeAllocator::~MakeAllocator Destructor
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
~MakeAllocator();  
```  
  
## Remarks  
 Deinitializes the current instance of the MakeAllocator class.  
  
 This destructor also deletes the underlying allocated memory if necessary.  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [MakeAllocator Class](../VS_visualcpp/MakeAllocator-Class.md)   
 [Microsoft::WRL::Details Namespace](../VS_visualcpp/Microsoft--WRL--Details-Namespace.md)