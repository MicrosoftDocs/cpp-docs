---
title: "SyncLockWithStatusT::SyncLockWithStatusT Constructor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockWithStatusT::SyncLockWithStatusT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SyncLockWithStatusT, constructor"
ms.assetid: 5d2fb820-ae1b-495f-8084-ebb4fecc3104
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
# SyncLockWithStatusT::SyncLockWithStatusT Constructor
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
SyncLockWithStatusT(  
   _Inout_ SyncLockWithStatusT&& other  
);  
  
explicit SyncLockWithStatusT(  
   typename SyncTraits::Type sync,  
   DWORD status  
);  
```  
  
#### Parameters  
 `other`  
 An rvalue-reference to another SyncLockWithStatusT object.  
  
 `sync`  
 A reference to another SyncLockWithStatusT object.  
  
 `status`  
 The value of the [status_](../windows/synclockwithstatust-status-data-member.md) data member of the `other` parameter or the `sync` parameter.  
  
## Remarks  
 Initializes a new instance of the SyncLockWithStatusT class.  
  
 The first constructor initializes the current SyncLockWithStatusT object from another SyncLockWithStatusT specified by parameter `other`, and then invalidates the other SyncLockWithStatusT object. The second constructor is `protected`, and initializes the current SyncLockWithStatusT object to an invalid state.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers::Details  
  
## See Also  
 [SyncLockWithStatusT Class](../windows/synclockwithstatust-class.md)   
 [SyncLockWithStatusT::GetStatus Method](../windows/synclockwithstatust-getstatus-method.md)