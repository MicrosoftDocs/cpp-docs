---
title: "EventSource::targetsPointerLock_ Data Member | Microsoft Docs"
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
  - "event/Microsoft::WRL::EventSource::targetsPointerLock_"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "targetsPointerLock_ data member"
ms.assetid: 8f08409f-5262-4be7-9cf1-2ed15f19684a
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# EventSource::targetsPointerLock_ Data Member
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [EventSource::targetsPointerLock_ Data Member](https://docs.microsoft.com/cpp/windows/eventsource-targetspointerlock-data-member).  
  
  
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

