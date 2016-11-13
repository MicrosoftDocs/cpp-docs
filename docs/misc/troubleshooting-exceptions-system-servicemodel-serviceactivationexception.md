---
title: "Troubleshooting Exceptions: System.ServiceModel.ServiceActivationException | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "ServiceActivationException exception"
  - "System.ServiceModel.ServiceActivationException exception"
ms.assetid: 32a3ea87-d6da-40bf-ba04-e862ac122391
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
# Troubleshooting Exceptions: System.ServiceModel.ServiceActivationException
A <xref:System.ServiceModel.ServiceActivationException> exception is thrown when a service fails to activate.  
  
## Remarks  
 This exception derives from <xref:System.ServiceModel.CommunicationException>, which represents a class of recoverable errors that may be thrown during communication between endpoints, and which [!INCLUDE[vsindigo](../misc/includes/vsindigo_md.md)] robust client and service applications are expected to handle. To prevent the more generic <xref:System.ServiceModel.CommunicationException> handler from catching the more specific <xref:System.ServiceModel.ActionNotSupportedException>, catch this exception prior to handling <xref:System.ServiceModel.CommunicationException>.  
  
## See Also  
 <xref:System.ServiceModel.ServiceActivationException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)