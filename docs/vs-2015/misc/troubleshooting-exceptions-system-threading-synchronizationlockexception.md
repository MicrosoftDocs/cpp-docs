---
title: "Troubleshooting Exceptions: System.Threading.SynchronizationLockException | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "SynchronizationLockException exception"
  - "System.Threading.SynchronizationLockException exception"
ms.assetid: 82d80643-fc5c-40ae-a579-46869772d25c
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Troubleshooting Exceptions: System.Threading.SynchronizationLockException
The exception that is thrown when a method requires the caller to own the lock on a given `Monitor`, and the method is invoked by a caller that does not own that lock.  
  
## Remarks  
 A <xref:System.Threading.SynchronizationLockException> is thrown by calling the <xref:System.Threading.Monitor.Exit%2A>, <xref:System.Threading.Monitor.Pulse%2A>, <xref:System.Threading.Monitor.PulseAll%2A>, and <xref:System.Threading.Monitor.Wait%2A> methods of the `Monitor` class from an unsynchronized block of code.  
  
## See Also  
 <xref:System.Threading.SynchronizationLockException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)