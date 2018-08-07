---
title: "SyncLockT::~SyncLockT Destructor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockT::~SyncLockT"]
dev_langs: ["C++"]
helpviewer_keywords: ["~SyncLockT, destructor"]
ms.assetid: 9e14870d-017d-45fe-a3dc-cd86b6fa1c3a
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# SyncLockT::~SyncLockT Destructor
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
~SyncLockT();  
```  
  
## Remarks  
 Deinitializes an instance of the **SyncLockT** class.  
  
 This destructor also unlocks the current **SyncLockT** instance.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers::Details  
  
## See Also  
 [SyncLockT Class](../windows/synclockt-class.md)