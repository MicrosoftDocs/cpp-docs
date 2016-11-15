---
title: "Operators cannot be declared &#39;&lt;keyword&gt;&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "2015-07-20"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc33013"
  - "bc33013"
helpviewer_keywords: 
  - "BC33013"
ms.assetid: bfd805f4-e30e-4553-9cb7-2690595f0480
caps.latest.revision: 9
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
# Operators cannot be declared &#39;&lt;keyword&gt;&#39;
An operator is declared with a keyword that is not valid for operator definitions.  
  
 Every operator must be declared as both [Public](/dotnet/articles/visual-basic/language-reference/modifiers/public) and [Shared](/dotnet/articles/visual-basic/language-reference/modifiers/shared). In addition, a conversion operator must be declared with either [Widening](/dotnet/articles/visual-basic/language-reference/modifiers/widening) or [Narrowing](/dotnet/articles/visual-basic/language-reference/modifiers/narrowing), but not both. An operator definition can optionally include the [Overloads](/dotnet/articles/visual-basic/language-reference/modifiers/overloads) or [Shadows](/dotnet/articles/visual-basic/language-reference/modifiers/shadows) keywords. No other keywords are permitted in an [Operator Statement](/dotnet/articles/visual-basic/language-reference/statements/operator-statement).  
  
 **Error ID:** BC33013  
  
### To correct this error  
  
-   Remove the invalid keyword from the operator definition.  
  
## See Also  
 [Operator Procedures](/dotnet/articles/visual-basic/language-reference/procedures/operator-procedures)   
 [How to: Define an Operator](../Topic/How%20to:%20Define%20an%20Operator%20\(Visual%20Basic\).md)   
 [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md)