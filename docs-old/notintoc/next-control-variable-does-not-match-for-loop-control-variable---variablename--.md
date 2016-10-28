---
title: "Next control variable does not match For loop control variable &#39;&lt;variablename&gt;&#39;"
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
  - "vbc30070"
  - "bc30070"
helpviewer_keywords: 
  - "BC30070"
ms.assetid: e9e96008-b053-4fa0-8966-decaad99fecd
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
# Next control variable does not match For loop control variable &#39;&lt;variablename&gt;&#39;
The control variable in the `Next` statement of a `For...Next` loop must match the variable in the corresponding `For` statement.  
  
 **Error ID:** BC30070  
  
### To correct this error  
  
1.  Check the spelling of the variable in the `Next` statement and in the corresponding `For` statement to be sure it matches.  
  
2.  Ensure that no parts of the enclosing loop have been inadvertently deleted.  
  
3.  If this loop is part of a set of nested loops, check that every loop is properly terminated.  
  
## See Also  
 [For...Next Statement](../Topic/For...Next%20Statement%20\(Visual%20Basic\).md)