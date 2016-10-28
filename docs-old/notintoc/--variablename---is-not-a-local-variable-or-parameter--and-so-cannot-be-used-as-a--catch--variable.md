---
title: "&#39;&lt;variablename&gt;&#39; is not a local variable or parameter, and so cannot be used as a &#39;Catch&#39; variable"
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
  - "bc31082"
  - "vbc31082"
helpviewer_keywords: 
  - "BC31082"
ms.assetid: de197563-5848-4c1a-a519-cc4b5ea9a4c9
caps.latest.revision: 7
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
# &#39;&lt;variablename&gt;&#39; is not a local variable or parameter, and so cannot be used as a &#39;Catch&#39; variable
Variables in `Try...Catch...Finally` statements must be declared locally, or be parameters for the current procedure.  
  
 **Error ID:** BC31082  
  
### To correct this error  
  
1.  Declare local variables or parameters for `Try...Catch...Finally` statements.  
  
## See Also  
 [Try...Catch...Finally Statement](../Topic/Try...Catch...Finally%20Statement%20\(Visual%20Basic\).md)