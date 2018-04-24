---
title: "Troubleshooting Exceptions: System.Net.NetworkInformation.NetworkInformationException | Microsoft Docs"
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
  - "NetworkInformationException exception"
  - "System.Net.NetworkInformation.NetworkInformationException exception"
ms.assetid: 81da4ec9-9489-4ff9-a0b5-ec5e9049d07c
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Troubleshooting Exceptions: System.Net.NetworkInformation.NetworkInformationException
The exception that is thrown when an error occurs while retrieving network information.  
  
## Remarks  
 Types in the <xref:System.Net.NetworkInformation> namespace throw this exception when a call to a Win32 function fails. The <xref:System.Net.NetworkInformation.NetworkInformationException.ErrorCode%2A> property contains the result returned by the function.  
  
## See Also  
 <xref:System.Net.NetworkInformation.NetworkInformationException>   
 [Use the Exception Assistant](http://msdn.microsoft.com/library/e0a78c50-7318-4d54-af51-40c00aea8711)