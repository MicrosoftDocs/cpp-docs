---
title: "Troubleshooting Exceptions: System.Net.WebException | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.prod: "visual-studio-dev14"
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
 For more information, see [Error: Timeout While Debugging Web Services](../Topic/Error:%20Timeout%20While%20Debugging%20Web%20Services.md).  
  
## See Also  
 <xref:System.Net.WebException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)   
 [How to: Send Data Using the WebRequest Class](../Topic/How%20to:%20Send%20Data%20Using%20the%20WebRequest%20Class.md)   
 [How to: Request Data Using the WebRequest Class](../Topic/How%20to:%20Request%20Data%20Using%20the%20WebRequest%20Class.md)   
 [How to: Retrieve a Protocol-Specific WebResponse that Matches a WebRequest](../Topic/How%20to:%20Retrieve%20a%20Protocol-Specific%20WebResponse%20that%20Matches%20a%20WebRequest.md)