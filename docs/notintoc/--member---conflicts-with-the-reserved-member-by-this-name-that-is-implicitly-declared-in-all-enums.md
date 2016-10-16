---
title: "&#39;&lt;member&gt;&#39; conflicts with the reserved member by this name that is implicitly declared in all enums"
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
  - "bc31420"
  - "vbc31420"
helpviewer_keywords: 
  - "BC31420"
ms.assetid: f2ea5a8b-f63c-4c93-bfac-418ae5a150a5
caps.latest.revision: 10
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
# &#39;&lt;member&gt;&#39; conflicts with the reserved member by this name that is implicitly declared in all enums
The name of a type member conflicts with the name of a member implicitly declared in all enumerations.  
  
 The [!INCLUDE[vbprvb](../cli/includes/vbprvb_md.md)] compiler creates implicit members corresponding to certain programming elements you declare. Enumerations implicitly declare the member `value__member`.  
  
 **Error ID:** BC31420  
  
### To correct this error  
  
-   Modify the name of the member.  
  
## See Also  
 [NotInBuild:Declaration Statements in Visual Basic](assetId:///81f3c398-f45c-4d95-80bf-aa39d1a0fb30)   
 [Enumerations Overview](../Topic/Enumerations%20Overview%20\(Visual%20Basic\).md)   
 [Declared Element Names](../Topic/Declared%20Element%20Names%20\(Visual%20Basic\).md)