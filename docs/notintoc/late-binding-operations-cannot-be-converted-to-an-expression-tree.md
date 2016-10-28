---
title: "Late binding operations cannot be converted to an expression tree"
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
  - "vbc36604"
  - "bc36604"
helpviewer_keywords: 
  - "BC36604"
ms.assetid: 6fd66d12-8c99-46e0-9095-fe1b29fd2692
caps.latest.revision: 5
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
# Late binding operations cannot be converted to an expression tree
An attempt has been made to convert a late binding operation into an expression tree. This is not valid. For example, the following code causes this error.  
  
```vb#  
Option Strict Off  
Module Module1  
  
    Sub Main()  
        '' Not valid.  
        ' Test(Function(someInstance) someInstance.SomeProperty)  
    End Sub  
  
    Sub Test(ByVal ex As Expressions.Expression(Of Func(Of Object, Object)))  
    End Sub  
  
End Module  
```  
  
 **Error ID:** BC36604  
  
## See Also  
 [Early and Late Binding](../Topic/Early%20and%20Late%20Binding%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: Expression Trees in LINQ](assetId:///1a2e8e74-4bbc-45ab-9a46-2b6cfce3bcb2)