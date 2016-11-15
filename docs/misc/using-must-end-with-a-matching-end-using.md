---
title: "&#39;Using&#39; must end with a matching &#39;End Using&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "2015-07-20"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc36008"
  - "bc36008"
helpviewer_keywords: 
  - "BC36008"
ms.assetid: 83269108-b169-40a6-bbcc-af1ac8fcfd67
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
# &#39;Using&#39; must end with a matching &#39;End Using&#39;
A `Using` statement occurs without a corresponding `End Using` statement.  
  
 An `End Using` statement must be used to end the `Using` block.  
  
 **Error ID:** BC36008  
  
### To correct this error  
  
1.  If this `Using` block is part of a set of nested `Using` blocks, make sure each block is properly terminated.  
  
2.  Add an `End Using` statement to the end of the `Using` block.  
  
## See Also  
 [Using Statement](/dotnet/articles/visual-basic/language-reference/statements/using-statement)   
 [How to: Dispose of a System Resource](http://msdn.microsoft.com/Library/8be2b239-8090-419b-8e7e-bcaa75b0ecc8)