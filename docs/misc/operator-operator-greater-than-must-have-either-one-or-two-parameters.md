---
title: "Operator &#39;&lt;operator&gt;&#39; must have either one or two parameters | Microsoft Docs"
ms.custom: ""
ms.date: "2015-07-20"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc33016"
  - "vbc33016"
helpviewer_keywords: 
  - "BC33016"
ms.assetid: 70f43905-037e-4040-83c0-f39334b3e07a
caps.latest.revision: 8
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
# Operator &#39;&lt;operator&gt;&#39; must have either one or two parameters
An operator that can be either unary or binary is defined with no parameters or with more than two parameters.  
  
 A unary/binary operator must have either one or two parameters.  
  
 **Error ID:** BC33016  
  
### To correct this error  
  
-   Adjust the definition to specify either one or two parameters.  
  
-   If you need no parameters or more than two, you must use the [Function Statement](/dotnet/visual-basic/language-reference/statements/function-statement) to define a `Function` procedure instead of an operator.  
  
## See Also  
 [Operator Procedures](/dotnet/visual-basic/language-reference/procedures/operator-procedures)   
 [Operator Statement](/dotnet/visual-basic/language-reference/statements/operator-statement)   
 [How to: Define an Operator](../Topic/How%20to:%20Define%20an%20Operator%20\(Visual%20Basic\).md)   
 [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md)