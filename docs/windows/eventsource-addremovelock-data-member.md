---
title: "EventSource::addRemoveLock_ Data Member | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["event/Microsoft::WRL::EventSource::addRemoveLock_"]
dev_langs: ["C++"]
helpviewer_keywords: ["addRemoveLock_ data member"]
ms.assetid: e2d69256-4891-4aad-ad0b-76479c0bb076
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# EventSource::addRemoveLock_ Data Member
Synchronizes access to the [targets_](../windows/eventsource-targets-data-member.md) array when adding, removing, or invoking event handlers.  
  
## Syntax  
  
```  
Wrappers::SRWLock addRemoveLock_;  
```  
  
## Requirements  
 **Header:** event.h  
  
 **Namespace:** Microsoft::WRL
 
 ## See Also
 [EventSource Class](../windows/eventsource-class.md)