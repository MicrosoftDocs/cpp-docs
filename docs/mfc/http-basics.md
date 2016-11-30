---
title: "HTTP Basics | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "HTTP, return codes"
  - "return codes"
  - "HTTP requests, return codes"
ms.assetid: 5b7421bf-42c8-4f3a-8566-8ff5957f58cc
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# HTTP Basics
When writing an internet application, you often examine and add to the information in HTTP header. Return codes indicate the success or failure of the requested event. Several common return codes are listed in the following table.  
  
|Return Code|Meaning|  
|-----------------|-------------|  
|200|URL located, transmission follows|  
|400|Unintelligible request|  
|404|Requested URL not found|  
|405|Server does not support requested method|  
|500|Unknown server error|  
|503|Service unavailable|  
  
 The HTTP responses are grouped as shown in the following table.  
  
|Group|Meaning|  
|-----------|-------------|  
|200–299|Success|  
|300–399|Information|  
|400–499|Request error|  
|500–599|Server error|  
  
 The Hypertext Transfer Protocol (HTTP) is an application-level protocol for hypermedia information systems. For more information about HTTP, and how Web browsers and servers communicate, see the Hypertext Transfer Protocol (HTTP) specification:  
  
 [http://www.w3.org/pub/WWW/Protocols/](http://www.w3.org/pub/www/protocols/)  
  
## See Also  
 [MFC Internet Programming Basics](../mfc/mfc-internet-programming-basics.md)

