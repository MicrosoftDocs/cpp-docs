---
title: "Conversion operators must be declared either &#39;Widening&#39; or &#39;Narrowing&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "2015-07-20"
ms.prod: "visual-studio-dev14"
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
An [Operator Statement](/dotnet/visual-basic/language-reference/statements/operator-statement) does not specify either [Widening](/dotnet/visual-basic/language-reference/modifiers/widening) or [Narrowing](/dotnet/visual-basic/language-reference/modifiers/narrowing).  
  
 When you define a conversion operator, you must declare it as either `Widening` or `Narrowing`. These are mutually exclusive characteristics, so you cannot specify both.  
  
 **Error ID:** BC33017  
  
### To correct this error  
  
-   Decide whether the conversion operator is to be `Widening` or `Narrowing`, and include the appropriate keyword in the `Operator` statement. You must specify one or the other.  
  
## See Also  
 [Widening and Narrowing Conversions](/dotnet/visual-basic/programming-guide/language-features/data-types/widening-and-narrowing-conversions)   
 [Operator Procedures](/dotnet/visual-basic/language-reference/procedures/operator-procedures)   
 [Operator Statement](/dotnet/visual-basic/language-reference/statements/operator-statement)   
 [How to: Define an Operator](../Topic/How%20to:%20Define%20an%20Operator%20\(Visual%20Basic\).md)   
 [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md)