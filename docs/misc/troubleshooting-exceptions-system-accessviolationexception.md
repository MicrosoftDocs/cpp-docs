---
title: "Troubleshooting Exceptions: System.AccessViolationException | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "System.AccessViolationException exception"
  - "AccessViolationException class"
ms.assetid: 7f09315d-8aad-4ab1-8b5e-21a8c97f6c14
caps.latest.revision: 9
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
# Troubleshooting Exceptions: System.AccessViolationException
An <xref:System.AccessViolationException> is thrown when there is an attempt to read from or write to protected memory.  
  
## Associated Tips  
 Make sure that the memory that you are attempting to access has been allocated.  
 Automatic memory management is one of the services that the common language runtime provides. You may wish to move to managed code to take advantage of this service. For more information, see [Automatic Memory Management](../Topic/Automatic%20Memory%20Management.md).  
  
 Make sure that the memory that you are attempting to access has not been corrupted.  
 If several read or write operations have occurred through bad pointers, memory may be corrupted.  
  
### Remarks  
 An access violation occurs in unmanaged or unsafe code when it attempts to read or write to memory that has not been allocated, or to which it does not have access. Not all reads or writes through bad pointers lead to access violations, so an access violation usually indicates that several reads or writes have occurred through bad pointers, and that memory might be corrupted.  
  
 In managed code, all references are either valid or null. Any operation that attempts to reference a null reference in verifiable code throws <xref:System.NullReferenceException>.  
  
 An access violation that occurs in unsafe managed code can be expressed as either a <xref:System.NullReferenceException> or a <xref:System.AccessViolationException>, depending on the platform.  
  
 Access violations in unmanaged code that bubble up to managed code are always wrapped in an <xref:System.AccessViolationException>.  
  
## See Also  
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)   
 [Memory Management: Examples](../mfc/memory-management-examples.md)   
 [Automatic Memory Management](../Topic/Automatic%20Memory%20Management.md)