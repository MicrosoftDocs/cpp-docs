---
title: "Troubleshooting Exceptions: System.Workflow.Runtime.Hosting.PersistenceException"
ms.custom: ""
ms.date: "10/19/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "EHWRHPersistence"
helpviewer_keywords: 
  - "PersistenceException exception"
  - "System.Workflow.Runtime.Hosting.PersistenceException exception"
ms.assetid: cb2fb820-f990-4728-9a7f-5ec6fd8d5b10
caps.latest.revision: 7
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
# Troubleshooting Exceptions: System.Workflow.Runtime.Hosting.PersistenceException
A <xref:System.Workflow.Runtime.Hosting.PersistenceException> exception is thrown when the persistence service cannot fulfill a request.  
  
## Remarks  
 The <xref:System.Workflow.Runtime.Hosting.SqlWorkflowPersistenceService> throws a <xref:System.Workflow.Runtime.Hosting.PersistenceException> if it cannot complete a request to commit either a completed scope or the workflow instance state to its database.  
  
 If you implement a persistence service by deriving from the <xref:System.Workflow.Runtime.Hosting.WorkflowPersistenceService> class or the <xref:System.Workflow.Runtime.Hosting.SqlWorkflowPersistenceService> class, you can throw the <xref:System.Workflow.Runtime.Hosting.PersistenceException> with an appropriate message to indicate any error condition encountered by your service that prevents it from fulfilling a request made by the workflow runtime engine.  
  
 See <xref:System.Workflow.Runtime.Hosting.WorkflowPersistenceService> for more information.  
  
## See Also  
 <xref:System.Workflow.Runtime.Hosting.PersistenceException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)