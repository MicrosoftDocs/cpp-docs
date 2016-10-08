---
title: "SyncLockT::IsLocked Method"
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
ms.assetid: a81fea43-f99a-4708-812a-7fd6af500d3d
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
# SyncLockT::IsLocked Method
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
bool IsLocked() const;  
```  
  
## Return Value  
 **true** if the SyncLockT object is locked; otherwise, **false**.  
  
## Remarks  
 Indicates whether the current SyncLockT object owns a resource; that is, the SyncLockT object is *locked*.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers::Details  
  
## See Also  
 [SyncLockT Class](../VS_visualcpp/SyncLockT-Class.md)