---
title: "Type parameter not allowed in &#39;Implements&#39; clause"
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
  - "vbc32056"
  - "bc32056"
helpviewer_keywords: 
  - "BC32056"
ms.assetid: a62d773b-e878-4817-8638-da49849477d7
caps.latest.revision: 9
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
# Type parameter not allowed in &#39;Implements&#39; clause
An `Implements` clause in a generic type specifies a type parameter as the member to be implemented.  
  
 An `Implements` clause must specify an interface and a member. It can pass a type parameter to the interface, but it cannot pass it to the member, nor use it as the name of the member.  
  
 The following statements can generate this error.  
  
```  
Class c1(Of t)  
    Implements i1(Of t)  
    Public Sub doSomething() Implements t  
End Class  
```  
  
 **Error ID:** BC32056  
  
### To correct this error  
  
-   Specify the interface name and a genuine member of the interface following the `Implements` keyword. You can pass the type parameter to the interface if appropriate.  
  
    ```  
    Public Sub doSomething() Implements i1(Of t).doSomething  
    ```  
  
## See Also  
 [Implements](../Topic/Implements%20Clause%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: Implements Keyword and Implements Statement](assetId:///b96560f7-6413-480f-a1e2-f80253bab5be)   
 [Generic Types in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Type List](../Topic/Type%20List%20\(Visual%20Basic\).md)