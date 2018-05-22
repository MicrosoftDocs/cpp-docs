---
title: "Troubleshooting Exceptions: System.Workflow.Runtime.WorkflowOwnershipException | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "EHWRWorkflowOwnership"
helpviewer_keywords: 
  - "System.Workflow.Runtime.WorkflowOwnershipException exception"
  - "WorkflowOwnershipException exception"
ms.assetid: 20291283-dfc8-4e34-b84d-f380e04be376
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Troubleshooting Exceptions: System.Workflow.Runtime.WorkflowOwnershipException
A <xref:System.Workflow.Runtime.WorkflowOwnershipException> exception is thrown when the workflow runtime engine attempts to load a workflow instance that is currently loaded by another workflow runtime engine instance. Additionally, this exception is thrown when the workflow runtime engine attempts to save a workflow after the ownership time-out that was specified while the workflow was loading has expired.  
  
## See Also  
 <xref:System.Workflow.Runtime.WorkflowOwnershipException>   
 [Use the Exception Assistant](http://msdn.microsoft.com/library/e0a78c50-7318-4d54-af51-40c00aea8711)