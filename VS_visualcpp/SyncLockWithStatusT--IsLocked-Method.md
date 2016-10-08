---
title: "SyncLockWithStatusT::IsLocked Method"
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
ms.assetid: e1b75b7b-c145-471a-aa5d-71abf31f5990
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
# SyncLockWithStatusT::IsLocked Method
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
bool IsLocked() const;  
```  
  
## Remarks  
 Indicates whether the current SyncLockWithStatusT object owns a resource; that is, the SyncLockWithStatusT object is *locked*.  
  
## Return Value  
 **true** if the SyncLockWithStatusT object is locked; otherwise, **false**.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers::Details  
  
## See Also  
 [SyncLockWithStatusT Class](../VS_visualcpp/SyncLockWithStatusT-Class.md)