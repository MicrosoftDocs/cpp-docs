---
title: "&#39;RemoveHandler&#39; definition missing for event &#39;&lt;eventname&gt;&#39;"
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
  - "bc31131"
  - "vbc31131"
helpviewer_keywords: 
  - "BC31131"
ms.assetid: 0ef68daf-b66e-4ecf-bf2c-dcacabd8aa3d
caps.latest.revision: 6
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
# &#39;RemoveHandler&#39; definition missing for event &#39;&lt;eventname&gt;&#39;
If an event is declared as `Custom`, it must supply a procedure for removing an event handler.  
  
 **Error ID:** BC31131  
  
### To correct this error  
  
1.  Include a `RemoveHandler` declaration between the `Custom Event` statement and the `End Event` statement.  
  
2.  Verify that other procedures within the event declaration are correctly terminated.  
  
## See Also  
 [RemoveHandler Statement](../Topic/RemoveHandler%20Statement.md)   
 [Event Statement](../Topic/Event%20Statement.md)