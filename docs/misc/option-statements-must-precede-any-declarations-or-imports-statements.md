---
title: "&#39;Option&#39; statements must precede any declarations or &#39;Imports&#39; statements | Microsoft Docs"
ms.custom: ""
ms.date: "2015-07-20"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc30627"
  - "bc30627"
helpviewer_keywords: 
  - "BC30627"
ms.assetid: 2ce0fcf2-80f4-47d3-a394-44e0aed456db
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
# &#39;Option&#39; statements must precede any declarations or &#39;Imports&#39; statements
`Option` statements should be the first non-comment statements in your source code.  
  
 **Error ID:** BC30627  
  
### To correct this error  
  
-   Move the `Option` statements to the top of the source code, immediately before `Imports` and `Namespace` statements.  
  
## See Also  
 [Option \<keyword> Statement](../Topic/Option%20%3Ckeyword%3E%20Statement.md)   
 [Option Compare Statement](/dotnet/articles/visual-basic/language-reference/statements/option-compare-statement)   
 [Option Explicit Statement](/dotnet/articles/visual-basic/language-reference/statements/option-explicit-statement)   
 [Option Infer Statement](/dotnet/articles/visual-basic/language-reference/statements/option-infer-statement)   
 [Option Strict Statement](/dotnet/articles/visual-basic/language-reference/statements/option-strict-statement)