---
title: "Troubleshooting Exceptions: System.Net.WebException | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
  - "WebException class"
ms.assetid: 6cd69a2c-c52b-420d-be47-a4e34eaec6f3
caps.latest.revision: 13
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
# Troubleshooting Exceptions: System.Net.WebException
A <xref:System.Net.WebException> exception is thrown when an error occurs while accessing the network through a pluggable protocol.  
  
## Associated Tips  
 **Check the Response property of the exception to determine why the request failed.**  
 When a <xref:System.Net.WebException> exception is thrown by a descendent of the <xref:System.Net.WebRequest> class, the <xref:System.Net.WebException.Response%2A> property provides the Internet response to the application.  
  
 **Check the Status property of the exception to determine why the request failed.**  
 The <xref:System.Net.WebException.Status%2A> property of the exception provides status information for the error. For more information, see <xref:System.Net.WebExceptionStatus>.  
  
 **If you are timing out when stepping into an XML Web Service, set the timeout value for the XML Web Service call to infinite.**  
 For more information, see [Error: Timeout While Debugging Web Services](http://msdn.microsoft.com/Library/4b7df112-788a-4429-9a0c-4c6dac4fb609).  
  
## See Also  
 <xref:System.Net.WebException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)   
 [How to: Send Data Using the WebRequest Class](http://msdn.microsoft.com/Library/66686878-38ac-4aa6-bf42-ffb568ffc459)   
 [How to: Request Data Using the WebRequest Class](http://msdn.microsoft.com/Library/368b8d0f-dc5e-4469-a8b8-b2adbf5dd800)   
 [How to: Retrieve a Protocol-Specific WebResponse that Matches a WebRequest](http://msdn.microsoft.com/Library/d8c90785-f16b-42a5-8439-ed2f731b2ba8)