---
title: "SyncLockT::~SyncLockT Destructor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockT::~SyncLockT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "~SyncLockT, destructor"
ms.assetid: 9e14870d-017d-45fe-a3dc-cd86b6fa1c3a
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# SyncLockT::~SyncLockT Destructor
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
~SyncLockT();  
```  
  
## Remarks  
 Deinitializes an instance of the SyncLockT class.  
  
 This destructor also unlocks the current SyncLockT instance.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers::Details  
  
## See Also  
 [SyncLockT Class](../windows/synclockt-class.md)