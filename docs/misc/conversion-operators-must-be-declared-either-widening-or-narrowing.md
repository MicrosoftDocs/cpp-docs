---
title: "Conversion operators must be declared either &#39;Widening&#39; or &#39;Narrowing&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "2015-07-20"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc33017"
  - "bc33017"
helpviewer_keywords: 
  - "BC33017"
ms.assetid: 5972d955-ce1d-4348-a021-167eecb3a507
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
# Conversion operators must be declared either &#39;Widening&#39; or &#39;Narrowing&#39;
An [Operator Statement](/dotnet/articles/visual-basic/language-reference/statements/operator-statement) does not specify either [Widening](/dotnet/articles/visual-basic/language-reference/modifiers/widening) or [Narrowing](/dotnet/articles/visual-basic/language-reference/modifiers/narrowing).  
  
 When you define a conversion operator, you must declare it as either `Widening` or `Narrowing`. These are mutually exclusive characteristics, so you cannot specify both.  
  
 **Error ID:** BC33017  
  
### To correct this error  
  
-   Decide whether the conversion operator is to be `Widening` or `Narrowing`, and include the appropriate keyword in the `Operator` statement. You must specify one or the other.  
  
## See Also  
 [Widening and Narrowing Conversions](/dotnet/articles/visual-basic/programming-guide/language-features/data-types/widening-and-narrowing-conversions)   
 [Operator Procedures](/dotnet/articles/visual-basic/language-reference/procedures/operator-procedures)   
 [Operator Statement](/dotnet/articles/visual-basic/language-reference/statements/operator-statement)   
 [How to: Define an Operator](http://msdn.microsoft.com/Library/d4b0e253-092a-4e6e-9fe2-01f562140a29)   
 [How to: Define a Conversion Operator](http://msdn.microsoft.com/Library/54203dfa-c24b-463f-9942-d5153e89e762)