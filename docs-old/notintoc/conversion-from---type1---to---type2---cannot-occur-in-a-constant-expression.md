---
title: "Conversion from &#39;&lt;type1&gt;&#39; to &#39;&lt;type2&gt;&#39; cannot occur in a constant expression"
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
  - "bc30060"
  - "vbc30060"
helpviewer_keywords: 
  - "BC30060"
ms.assetid: bea60254-67b6-4881-91d2-47854c4d073c
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
# Conversion from &#39;&lt;type1&gt;&#39; to &#39;&lt;type2&gt;&#39; cannot occur in a constant expression
The initialization expression in a `Const` statement evaluates to a data type that cannot be converted to the declared type of the constant.  
  
 **Error ID:** BC30060  
  
### To correct this error  
  
1.  Initialize the constant with an expression of a data type that can be converted to the type declared for the constant.  
  
## See Also  
 [Const Statement](../Topic/Const%20Statement%20\(Visual%20Basic\).md)   
 [Type Conversions in Visual Basic](../Topic/Type%20Conversions%20in%20Visual%20Basic.md)