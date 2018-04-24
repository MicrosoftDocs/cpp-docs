---
title: "Troubleshooting Exceptions: System.StackOverflowException | Microsoft Docs"
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
  - "StackOverflowException class"
ms.assetid: 51b71217-c507-4f5b-bc35-0236180d7968
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Troubleshooting Exceptions: System.StackOverflowException
A <xref:System.StackOverflowException> exception is thrown when the execution stack overflows by having too many nested method calls.  
  
## Associated Tips  
 Make sure you do not have an infinite loop or infinite recursion.  
 Too many method calls is often indicative of a very deep or unbounded recursion.  
  
## Remarks  
 You cannot catch stack overflow exceptions, because the exception-handling code may require the stack. Instead, when a stack overflow occurs in a normal application, the Common Language Runtime (CLR) terminates the process.  
  
 An application that hosts the CLR can change the default behavior and specify that the CLR unload the application domain where the exception occurs, but lets the process continue. For more information, see [ICLRPolicyManager Interface](../Topic/ICLRPolicyManager%20Interface.md).  
  
## See Also  
 <xref:System.StackOverflowException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)   
 [Loop Structures](../Topic/Loop%20Structures%20\(Visual%20Basic\).md)