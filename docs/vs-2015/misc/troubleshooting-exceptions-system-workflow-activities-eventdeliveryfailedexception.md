---
title: "Troubleshooting Exceptions: System.Workflow.Activities.EventDeliveryFailedException | Microsoft Docs"
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
  - "EHWAEventDeliveryFailed"
helpviewer_keywords: 
  - "System.Workflow.Activities.EventDeliveryFailedException exception"
  - "EventDeliveryFailedException exception"
ms.assetid: 85ee2cb8-5cd1-4878-9421-2a78614e819f
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Troubleshooting Exceptions: System.Workflow.Activities.EventDeliveryFailedException
An <xref:System.Workflow.Activities.EventDeliveryFailedException> exception is thrown when an event that is raised from the host cannot be delivered to the workflow instance. Typically, the event is raised from an <xref:System.Workflow.Activities.ExternalDataExchangeService> on a workflow instance. This class cannot be inherited.  
  
## Remarks  
 The following string is added to the event log when this exception is thrown: `Event '{1}' on interface type '{0}' for instance id '{2}' cannot be delivered`.  
  
 When using a state machine workflow, you may get an exception with the message `Queue '{0}' is not enabled`. This happens when the current state of the state machine is not able to handle a specific event. For example, the message occurs when a state other than the current state contains the <xref:System.Workflow.Activities.EventDrivenActivity> that contains the <xref:System.Workflow.Activities.HandleExternalEventActivity> that is represented by the queue `'{0}'`.  
  
## See Also  
 <xref:System.Workflow.Activities.EventDeliveryFailedException>   
 [Use the Exception Assistant](http://msdn.microsoft.com/library/e0a78c50-7318-4d54-af51-40c00aea8711)