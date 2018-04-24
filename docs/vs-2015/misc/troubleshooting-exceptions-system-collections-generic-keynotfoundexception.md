---
title: "Troubleshooting Exceptions: System.Collections.Generic.KeyNotFoundException | Microsoft Docs"
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
  - "KeyNotFoundException class"
ms.assetid: de33f5bb-5709-46fe-b889-7105dbd24299
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Troubleshooting Exceptions: System.Collections.Generic.KeyNotFoundException
A <xref:System.Collections.Generic.KeyNotFoundException> is thrown when an attempt is made to retrieve a key or key value pair from a collection using a nonexistent key.  
  
## Associated Tips  
 **Check that the key you are using exists in the collection you are attempting to access.**  
 This exception occurs when an operation attempts to retrieve an element in a collection using a key that does not exist in that collection.  
  
### Remarks  
 The <xref:System.Collections.Generic.Dictionary%602.ContainsKey%2A> method can be used to determine whether a key exists.  
  
## See Also  
 <xref:System.Collections.Generic>   
 <xref:System.Collections.Generic.KeyNotFoundException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)