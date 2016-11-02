---
title: "Troubleshooting Exceptions: System.ServiceModel.ServerTooBusyException"
ms.custom: ""
ms.date: "10/19/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "System.ServiceModel.ServerTooBusyException exception"
  - "ServerTooBusyException exception"
ms.assetid: 80eb606a-ab3c-48af-b747-c9902989a059
caps.latest.revision: 6
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
# Troubleshooting Exceptions: System.ServiceModel.ServerTooBusyException
A <xref:System.ServiceModel.ServerTooBusyException> exception is thrown when a server is too busy to accept a message.  
  
## Remarks  
 This exception derives from the <xref:System.ServiceModel.CommunicationException> that represents a class of recoverable errors that might be thrown during communication between endpoints. Robust client and service [!INCLUDE[vsindigo](../misc/includes/vsindigo_md.md)] applications are expected to handle these exceptions. To prevent a handler for <xref:System.ServiceModel.CommunicationException> from catching the more specific <xref:System.ServiceModel.ServerTooBusyException>, catch this exception prior to handling <xref:System.ServiceModel.CommunicationException>.  
  
## See Also  
 <xref:System.ServiceModel.ServerTooBusyException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)