---
title: "Matching &#39;&lt;operatorsymbol1&gt;&#39; operator is required for &#39;&lt;operatorsymbol2&gt;&#39;"
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
  - "bc33033"
  - "vbc33033"
helpviewer_keywords: 
  - "BC33033"
ms.assetid: d2805e4f-08a8-4760-9539-565f51b88d13
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
# Matching &#39;&lt;operatorsymbol1&gt;&#39; operator is required for &#39;&lt;operatorsymbol2&gt;&#39;
An operator is defined when its required matching operator is not defined.  
  
 The following operators must be defined as matched pairs:  
  
-   `=` and `<>`  
  
-   `>` and `<`  
  
-   `>=` and `<=`  
  
-   `IsTrue` and `IsFalse`  
  
 If you define any of these operators in a class or structure, you must also define its matching operator in the same class or structure.  
  
 Even if you do not use the matching operator explicitly, [!INCLUDE[vbprvb](../cli/includes/vbprvb_md.md)] might need to use it. For example, if you define a class or structure that you use as the counter variable in a [For...Next Statement](../Topic/For...Next%20Statement%20\(Visual%20Basic\).md), [!INCLUDE[vbprvb](../cli/includes/vbprvb_md.md)] requires both the `>=` and `<=` operators (as well as the `+` operator).  
  
 **Error ID:** BC33033  
  
### To correct this error  
  
-   Define the matching operator in the same class or structure. Make every effort to define it meaningfully, because [!INCLUDE[vbprvb](../cli/includes/vbprvb_md.md)] might use it in a situation you do not anticipate.  
  
## See Also  
 [Operator Procedures](../Topic/Operator%20Procedures%20\(Visual%20Basic\).md)   
 [Operator Statement](../Topic/Operator%20Statement.md)   
 [How to: Define an Operator](../Topic/How%20to:%20Define%20an%20Operator%20\(Visual%20Basic\).md)   
 [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md)   
 [Operators and Expressions](../Topic/Operators%20and%20Expressions%20in%20Visual%20Basic.md)