---
title: "Operators must be declared &#39;Public&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "2015-07-20"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc33011"
  - "bc33011"
helpviewer_keywords: 
  - "BC33011"
ms.assetid: 67fc0dee-4ef5-4afc-a63a-f7d20bce7954
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
# Operators must be declared &#39;Public&#39;
An [Operator Statement](/dotnet/visual-basic/language-reference/statements/operator-statement) does not include the [Public](/dotnet/visual-basic/language-reference/modifiers/public) keyword.  
  
 An `Operator` procedure requires both the `Public` and [Shared](/dotnet/visual-basic/language-reference/modifiers/shared) keywords, and a conversion operator also requires either the [Widening](/dotnet/visual-basic/language-reference/modifiers/widening) or the [Narrowing](/dotnet/visual-basic/language-reference/modifiers/narrowing) keyword.  
  
 **Error ID:** BC33011  
  
### To correct this error  
  
-   Add the `Public` keyword to the `Operator` statement.  
  
## See Also  
 [Operator Procedures](/dotnet/visual-basic/language-reference/procedures/operator-procedures)   
 [Operator Statement](/dotnet/visual-basic/language-reference/statements/operator-statement)   
 [How to: Define an Operator](../Topic/How%20to:%20Define%20an%20Operator%20\(Visual%20Basic\).md)   
 [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md)