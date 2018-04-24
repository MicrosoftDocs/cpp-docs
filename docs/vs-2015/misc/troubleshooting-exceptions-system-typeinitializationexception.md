---
title: "Troubleshooting Exceptions: System.TypeInitializationException | Microsoft Docs"
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
  - "TypeInitializationException exception"
  - "System.TypeInitializationException exception"
ms.assetid: c77e81fd-1518-49a1-8213-3f169658f5f5
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Troubleshooting Exceptions: System.TypeInitializationException
The exception that is thrown as a wrapper around the exception thrown by the class initializer.  
  
## Remarks  
 When a class initializer fails to initialize a type, a <xref:System.TypeInitializationException> is created and passed a reference to the exception thrown by the type's class initializer. The <xref:System.Exception.InnerException%2A> property of the <xref:System.TypeInitializationException> holds the underlying exception.  
  
## See Also  
 <xref:System.TypeInitializationException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)