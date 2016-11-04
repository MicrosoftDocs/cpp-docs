---
title: "Troubleshooting Exceptions: System.DuplicateWaitObjectException | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "JScript"
  - "VB"
  - "CSharp"
  - "C++"
helpviewer_keywords: 
  - "DuplicateWaitObjectException class"
ms.assetid: b9ff6932-a7cf-4a89-bd7d-e4ef1a3ff353
caps.latest.revision: 11
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
# Troubleshooting Exceptions: System.DuplicateWaitObjectException
A <xref:System.DuplicateWaitObjectException> exception is thrown if the array of <xref:System.Threading.WaitHandle> objects passed to <xref:System.Threading.WaitHandle.WaitAll*> or <xref:System.Threading.WaitHandle.WaitAny*> contains any duplicate operating system handles.  
  
## Associated Tips  
 **Make sure the WaitHandle objects passed to WaitAll or WaitAny are unique.**  
 A <xref:System.Threading.WaitHandle> array cannot contain multiple references to the same object.  
  
### Remarks  
 The Common Language Runtime (CLR) provides a thread-synchronization mechanism based on synchronization objects waiting for execution in an array of <xref:System.Threading.WaitHandle> objects.  
  
## See Also  
 <xref:System.DuplicateWaitObjectException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)