---
title: "EventSource::addRemoveLock_ Data Member | Microsoft Docs"
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
  - "event/Microsoft::WRL::EventSource::addRemoveLock_"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "addRemoveLock_ data member"
ms.assetid: e2d69256-4891-4aad-ad0b-76479c0bb076
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# EventSource::addRemoveLock_ Data Member
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [EventSource::addRemoveLock_ Data Member](https://docs.microsoft.com/cpp/windows/eventsource-addremovelock-data-member).  
  
  
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

