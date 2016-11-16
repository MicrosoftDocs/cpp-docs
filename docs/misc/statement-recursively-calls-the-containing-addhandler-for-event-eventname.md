---
title: "Statement recursively calls the containing &#39;AddHandler&#39; for event &#39;&lt;eventname&gt;&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "2015-07-20"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc41998"
  - "vbc41998"
helpviewer_keywords: 
  - "BC41998"
ms.assetid: 4375b191-fbd9-4e93-b9bb-9159d533ddf6
caps.latest.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
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
# Statement recursively calls the containing &#39;AddHandler&#39; for event &#39;&lt;eventname&gt;&#39;
The statements in the `AddHandler` accessor of an event definition must not reference the event directly.  
  
 The recommended approach is to store the list of the event's handlers as a private field in the class, structure, or module that defined the event. For more information, see [How to: Declare Custom Events To Avoid Blocking](http://msdn.microsoft.com/Library/998b6a90-67c5-4d2c-8b11-366d3e355505) and [How to: Declare Custom Events To Conserve Memory](http://msdn.microsoft.com/Library/87ebee87-260c-462f-979c-407874debd19).  
  
 **Error ID:** BC41998  
  
### To correct this error  
  
-   Rewrite the event definition to avoid recursion.  
  
## See Also  
 [AddHandler - delete](http://msdn.microsoft.com/en-us/fc464cf8-582c-48a6-a9c2-185c4c3d5ff8)   
 [Event Statement](/dotnet/articles/visual-basic/language-reference/statements/event-statement)   
 [How to: Declare Custom Events To Avoid Blocking](http://msdn.microsoft.com/Library/998b6a90-67c5-4d2c-8b11-366d3e355505)   
 [How to: Declare Custom Events To Conserve Memory](http://msdn.microsoft.com/Library/87ebee87-260c-462f-979c-407874debd19)