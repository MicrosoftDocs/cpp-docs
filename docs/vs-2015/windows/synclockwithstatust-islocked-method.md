---
title: "SyncLockWithStatusT::IsLocked Method | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockWithStatusT::IsLocked"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IsLocked method"
ms.assetid: e1b75b7b-c145-471a-aa5d-71abf31f5990
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# SyncLockWithStatusT::IsLocked Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [SyncLockWithStatusT::IsLocked Method](https://docs.microsoft.com/cpp/windows/synclockwithstatust-islocked-method).  
  
  
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
 [SyncLockWithStatusT Class](../windows/synclockwithstatust-class.md)

