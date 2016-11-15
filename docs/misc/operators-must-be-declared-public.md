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
An [Operator Statement](/dotnet/articles/visual-basic/language-reference/statements/operator-statement) does not include the [Public](/dotnet/articles/visual-basic/language-reference/modifiers/public) keyword.  
  
 An `Operator` procedure requires both the `Public` and [Shared](/dotnet/articles/visual-basic/language-reference/modifiers/shared) keywords, and a conversion operator also requires either the [Widening](/dotnet/articles/visual-basic/language-reference/modifiers/widening) or the [Narrowing](/dotnet/articles/visual-basic/language-reference/modifiers/narrowing) keyword.  
  
 **Error ID:** BC33011  
  
### To correct this error  
  
-   Add the `Public` keyword to the `Operator` statement.  
  
## See Also  
 [Operator Procedures](/dotnet/articles/visual-basic/language-reference/procedures/operator-procedures)   
 [Operator Statement](/dotnet/articles/visual-basic/language-reference/statements/operator-statement)   
 [How to: Define an Operator](http://msdn.microsoft.com/Library/d4b0e253-092a-4e6e-9fe2-01f562140a29)   
 [How to: Define a Conversion Operator](http://msdn.microsoft.com/Library/54203dfa-c24b-463f-9942-d5153e89e762)