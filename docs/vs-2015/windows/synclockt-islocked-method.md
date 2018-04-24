---
title: "SyncLockT::IsLocked Method | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockT::IsLocked"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IsLocked method"
ms.assetid: a81fea43-f99a-4708-812a-7fd6af500d3d
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# SyncLockT::IsLocked Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [SyncLockT::IsLocked Method](https://docs.microsoft.com/cpp/windows/synclockt-islocked-method).  
  
  
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
 [SyncLockT Class](../windows/synclockt-class.md)

