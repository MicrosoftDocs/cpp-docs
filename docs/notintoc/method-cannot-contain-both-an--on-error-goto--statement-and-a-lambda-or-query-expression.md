---
title: "Method cannot contain both an &#39;On Error GoTo&#39; statement and a lambda or query expression"
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
  - "bc36595"
  - "vbc36595"
helpviewer_keywords: 
  - "BC36595"
ms.assetid: 4e7cc11e-f53d-4481-afb4-653a81d54483
caps.latest.revision: 4
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
# Method cannot contain both an &#39;On Error GoTo&#39; statement and a lambda or query expression
A method contains both an `On Error Goto` statement and either a lambda expression or a LINQ query. You cannot include an `On Error Goto` statement with a lambda expression or LINQ query in a method.  
  
 **Error ID:** BC36595  
  
### To correct this error  
  
1.  Replace the exception handling code that uses the `On Error Goto` statement with a `Try...Catch` statement.  
  
## See Also  
 [Introduction to Exception Handling (Visual Basic)](assetId:///9792f16a-0cd2-40bd-ace2-f7a4344c0e52)   
 [Try...Catch...Finally Statement](../Topic/Try...Catch...Finally%20Statement%20\(Visual%20Basic\).md)   
 [Introduction to LINQ in Visual Basic](../Topic/Introduction%20to%20LINQ%20in%20Visual%20Basic.md)   
 [Lambda Expressions](../Topic/Lambda%20Expressions%20\(Visual%20Basic\).md)   
 [On Error Statement](../Topic/On%20Error%20Statement%20\(Visual%20Basic\).md)