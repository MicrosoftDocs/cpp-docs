---
title: "&#39;AddHandler&#39; definition missing for event &#39;&lt;eventname&gt;&#39;"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "bc31130"
  - "vbc31130"
helpviewer_keywords: 
  - "BC31130"
ms.assetid: cf6c7fd6-ce2e-4916-b427-2a4a63e7279d
caps.latest.revision: 8
ms.author: "billchi"
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
# &#39;AddHandler&#39; definition missing for event &#39;&lt;eventname&gt;&#39;
If an event is declared as `Custom`, it must supply a procedure for adding an event handler.  
  
 **Error ID:** BC31130  
  
### To correct this error  
  
1.  Include an `AddHandler` declaration between the `Custom Event` statement and the `End Event` statement.  
  
2.  Verify that other procedures within the event declaration end correctly.  
  
## See Also  
 [AddHandler Statement](../Topic/AddHandler%20Statement.md)   
 [Event Statement](../Topic/Event%20Statement.md)