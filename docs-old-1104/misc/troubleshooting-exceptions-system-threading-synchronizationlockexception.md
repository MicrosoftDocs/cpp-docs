---
title: "Troubleshooting Exceptions: System.Threading.SynchronizationLockException | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
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
# Troubleshooting Exceptions: System.Threading.SynchronizationLockException
The exception that is thrown when a method requires the caller to own the lock on a given `Monitor`, and the method is invoked by a caller that does not own that lock.  
  
## Remarks  
 A <xref:System.Threading.SynchronizationLockException> is thrown by calling the <xref:System.Threading.Monitor.Exit*>, <xref:System.Threading.Monitor.Pulse*>, <xref:System.Threading.Monitor.PulseAll*>, and <xref:System.Threading.Monitor.Wait*> methods of the `Monitor` class from an unsynchronized block of code.  
  
## See Also  
 <xref:System.Threading.SynchronizationLockException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)