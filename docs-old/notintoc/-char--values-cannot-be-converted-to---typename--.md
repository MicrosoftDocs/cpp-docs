---
title: "&#39;Char&#39; values cannot be converted to &#39;&lt;typename&gt;&#39;"
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
  - "bc32006"
  - "vbc32006"
helpviewer_keywords: 
  - "BC32006"
ms.assetid: c033f65e-a315-47fc-be2e-ed371847a221
caps.latest.revision: 8
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
# &#39;Char&#39; values cannot be converted to &#39;&lt;typename&gt;&#39;
'Char' values cannot be converted to '\<typename>'. Use Microsoft.VisualBasic.AscW to interpret a character as a Unicode value or Microsoft.VisualBasic.Val to interpret it as a digit.  
  
 An expression attempts to convert a `Char` value to a data type other than `String` or `Object`.  
  
 **Error ID:** BC32006  
  
### To correct this error  
  
-   Use the `AscW` function to interpret a `Char` value as a Unicode character code, or the `Val` function to interpret it as a numeric digit.  
  
## See Also  
 [NOT IN BUILD: Asc, AscW Functions](assetId:///6814bfec-12ba-41fb-b10e-bec99750d5e1)   
 [NOT IN BUILD: Val Function](assetId:///81650f77-9242-4ec1-8e04-e93b5daa451d)   
 [Char Data Type](../Topic/Char%20Data%20Type%20\(Visual%20Basic\).md)