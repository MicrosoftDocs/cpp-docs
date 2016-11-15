---
title: "&#39;Handles&#39; is not valid on operator declaration | Microsoft Docs"
ms.custom: ""
ms.date: "2015-07-20"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc33003"
  - "vbc33003"
helpviewer_keywords: 
  - "BC33003"
ms.assetid: 8336402c-9393-4e8e-834d-55c2268f24f6
caps.latest.revision: 11
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
# &#39;Handles&#39; is not valid on operator declaration
An [Operator Statement](/dotnet/articles/visual-basic/language-reference/statements/operator-statement) specifies the [Handles](/dotnet/articles/visual-basic/language-reference/statements/handles-clause) keyword.  
  
 Only a `Sub` procedure can handle events. An `Operator` procedure cannot. For more information on event handlers, see [How to: Call an Event Handler in Visual Basic](../Topic/How%20to:%20Call%20an%20Event%20Handler%20in%20Visual%20Basic.md).  
  
 An `Operator` procedure requires both the `Public` and `Shared` keywords, and a conversion operator requires either the `Widening` or the `Narrowing` keyword. For more information, see [Operator Procedures](/dotnet/articles/visual-basic/language-reference/procedures/operator-procedures).  
  
 **Error ID:** BC33003  
  
### To correct this error  
  
-   If you intend this procedure to handle events, rewrite it as a `Sub` procedure.  
  
-   If you intend this procedure to define an operator, remove the `Handles` keyword from its declaration.  
  
## See Also  
 [Operator Statement](/dotnet/articles/visual-basic/language-reference/statements/operator-statement)   
 [How to: Define an Operator](../Topic/How%20to:%20Define%20an%20Operator%20\(Visual%20Basic\).md)   
 [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md)