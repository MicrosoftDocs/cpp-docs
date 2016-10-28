---
title: "&#39;&lt;typename&gt;&#39; values cannot be converted to &#39;Char&#39;"
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
  - "bc32007"
  - "vbc32007"
helpviewer_keywords: 
  - "BC32007"
ms.assetid: b04212da-57ac-4493-9480-04c12b50f875
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
# &#39;&lt;typename&gt;&#39; values cannot be converted to &#39;Char&#39;
'\<typename>' values cannot be converted to Char. Use Microsoft.VisualBasic.ChrW to interpret a numeric value as a Unicode character or first convert it to 'String' to produce a digit.  
  
 An expression attempts to convert a data type other than `String` or `Object` to `Char`.  
  
 **Error ID:** BC32007  
  
### To correct this error  
  
-   Use the `ChrW` function to convert a numeric value to a Unicode character, or first convert the value to `String` and then to `Char`.  
  
## See Also  
 [NOT IN BUILD: Chr, ChrW Functions](assetId:///37f3c707-8a6f-4c51-9b02-9e634c4299ab)   
 [Implicit and Explicit Conversions](../Topic/Implicit%20and%20Explicit%20Conversions%20\(Visual%20Basic\).md)   
 [Char Data Type](../Topic/Char%20Data%20Type%20\(Visual%20Basic\).md)