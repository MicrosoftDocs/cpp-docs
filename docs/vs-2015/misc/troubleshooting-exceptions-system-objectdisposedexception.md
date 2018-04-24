---
title: "Troubleshooting Exceptions: System.ObjectDisposedException | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
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
  - "ObjectDisposedException class, troubleshooting"
ms.assetid: 702912b6-e927-4f8e-8b7c-2e1880312b0e
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Troubleshooting Exceptions: System.ObjectDisposedException
An <xref:System.ObjectDisposedException> exception is thrown when an operation is attempted on a disposed object, such as a closed stream or registry key.  
  
## Associated Tips  
 **Make sure you have not released a resource before attempting to use it.**  
 For example, if attempting to manipulate a stream, make sure it has not been previously closed.  
  
## See Also  
 <xref:System.ObjectDisposedException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)