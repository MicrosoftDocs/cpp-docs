---
title: "Benefits of Character Set Portability | Microsoft Docs"
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
  - "character sets [C++], benefits"
  - "portability [C++], character sets"
ms.assetid: bd60b925-1498-4e4f-897b-4c8ce66edcf7
caps.latest.revision: 8
author: "ghogen"
ms.author: "ghogen"
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
# Benefits of Character Set Portability
You can benefit from using MFC and C run-time portability features even if you do not currently intend to internationalize your application:  
  
-   Coding portably makes your code base flexible. You can later move it easily to Unicode or MBCS.  
  
-   Using Unicode makes your applications for Windows 2000 more efficient. Because Windows 2000 uses Unicode, non-Unicode strings passed to and from the operating system must be translated, which incurs overhead.  
  
-   Using MBCS enables you to support international markets on Win32 platforms other than Windows 2000, such as Windows 95 or Windows 98.  
  
## See Also  
 [Unicode and MBCS](../text/unicode-and-mbcs.md)   
 [Support for Unicode](../text/support-for-unicode.md)