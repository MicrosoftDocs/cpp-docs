---
title: "EventSource::targetsPointerLock_ Data Member | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["event/Microsoft::WRL::EventSource::targetsPointerLock_"]
dev_langs: ["C++"]
helpviewer_keywords: ["targetsPointerLock_ data member"]
ms.assetid: 8f08409f-5262-4be7-9cf1-2ed15f19684a
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# EventSource::targetsPointerLock_ Data Member
Synchronizes access to internal data members even while event handlers for this EventSource are being added, removed, or invoked.  
  
## Syntax  
  
```  
Wrappers::SRWLock targetsPointerLock_;  
```  
  
## Requirements  
 **Header:** event.h  
  
 **Namespace:** Microsoft::WRL
 
 ## See Also
 [EventSource Class](../windows/eventsource-class.md)