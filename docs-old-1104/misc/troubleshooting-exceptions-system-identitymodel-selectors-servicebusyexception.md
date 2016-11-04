---
title: "Troubleshooting Exceptions: System.IdentityModel.Selectors.ServiceBusyException | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "ServiceBusyException exception"
  - "System.IdentityModel.Selectors.ServiceBusyException exception"
ms.assetid: 88acdc6b-45ad-40c6-aa5c-3b56244edcee
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
# Troubleshooting Exceptions: System.IdentityModel.Selectors.ServiceBusyException
A <xref:System.IdentityModel.Selectors.ServiceBusyException> exception is thrown to indicate that the CardSpace service is busy processing other requests. CardSpace does not queue requests, and can service only one request at a time.  
  
 Determine whether another instance of CardSpace is running. If there is another instance running, end it by stopping the icardagt.exe process from Task Manager.  
  
## See Also  
 <xref:System.IdentityModel.Selectors.ServiceBusyException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)