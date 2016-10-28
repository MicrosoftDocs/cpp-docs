---
title: "Statement cannot appear within an Enum body"
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
  - "vbc30619"
  - "bc30619"
helpviewer_keywords: 
  - "BC30619"
ms.assetid: 5d91d601-2a2d-418c-ae26-791d14a6f3cd
caps.latest.revision: 9
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
# Statement cannot appear within an Enum body
Statement cannot occur within an Enum body. End of Enum assumed.  
  
 An unexpected language construct was encountered. It is assumed that an `End Enum` construct is missing and that any source code after this point is outside the enumeration.  
  
 **Error ID:** BC30619  
  
### To correct this error  
  
1.  Verify the syntax of the code used inside the enumeration.  
  
2.  Make sure that the interface definition ends with an `End Enum` construct.  
  
## See Also  
 [Enum Statement](../Topic/Enum%20Statement%20\(Visual%20Basic\).md)