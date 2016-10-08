---
title: "SyncLockWithStatusT::status_ Data Member"
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
ms.assetid: 466fa336-b5ff-4d43-8efd-1e87e5fddf88
caps.latest.revision: 4
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
# SyncLockWithStatusT::status_ Data Member
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
DWORD status_;  
```  
  
## Remarks  
 Holds the result of the underlying wait operation after a lock operation on an object based on the current SyncLockWithStatusT object.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers::Details  
  
## See Also  
 [SyncLockWithStatusT Class](../VS_visualcpp/SyncLockWithStatusT-Class.md)