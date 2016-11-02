---
title: "Troubleshooting Exceptions: System.Net.NetworkInformation.NetworkInformationException"
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
  - "NetworkInformationException exception"
  - "System.Net.NetworkInformation.NetworkInformationException exception"
ms.assetid: 81da4ec9-9489-4ff9-a0b5-ec5e9049d07c
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
# Troubleshooting Exceptions: System.Net.NetworkInformation.NetworkInformationException
The exception that is thrown when an error occurs while retrieving network information.  
  
## Remarks  
 Types in the <xref:System.Net.NetworkInformation> namespace throw this exception when a call to a Win32 function fails. The <xref:System.Net.NetworkInformation.NetworkInformationException.ErrorCode*> property contains the result returned by the function.  
  
## See Also  
 <xref:System.Net.NetworkInformation.NetworkInformationException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)