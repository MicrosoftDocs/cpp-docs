---
title: "Troubleshooting Exceptions: System.Net.Sockets.SocketException"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "JScript"
  - "VB"
  - "CSharp"
  - "C++"
helpviewer_keywords: 
  - "SocketException class"
ms.assetid: 89e8194d-83b0-450f-91f5-548e5c13944d
caps.latest.revision: 11
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
# Troubleshooting Exceptions: System.Net.Sockets.SocketException
A \<xref:System.Net.Sockets.SocketException> exception is thrown by the \<xref:System.Net.Sockets.Socket> and \<xref:System.Net.Dns> classes when an error occurs with the network.  
  
## Associated Tips  
 **Check the Errorcode property to determine why the socket error occurred.**  
 The default constructor for the \<xref:System.Net.Sockets.SocketException> class sets the \<xref:System.Net.Sockets.SocketException.ErrorCode*> property to the last operating-system socket error that occurred.  
  
## See Also  
 \<xref:System.Net.Sockets.SocketException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)   
 [Using Secure Sockets Layer](../Topic/Using%20Secure%20Sockets%20Layer.md)