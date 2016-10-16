---
title: "Cannot infer a common type for the second and third operands of the &#39;If&#39; operator"
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
  - "vbc33106"
  - "bc33106"
helpviewer_keywords: 
  - "BC33106"
ms.assetid: 793eed88-a9f9-43e3-b657-c16795ecbbcc
caps.latest.revision: 7
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
# Cannot infer a common type for the second and third operands of the &#39;If&#39; operator
Cannot infer a common type for the second and third operands of the 'If' operator. One must have a widening conversion to the other.  
  
 When the `If` operator is called with three arguments, there must be a widening conversion between the second and third arguments. For example, because there is not a widening conversion in either direction between `Integer` and `String`, the following code causes this error.  
  
```vb#  
Dim divisor = 3  
' Not valid.  
' Console.WriteLine(If(divisor <> 0, number \ divisor, "Division by zero"))  
```  
  
 **Error ID:** BC33106  
  
### To correct this error  
  
-   Provide an explicit conversion for one of the operands, if that is possible in your code.  
  
-   Use a different condition construction, such as an `If...Then...Else` statement.  
  
## See Also  
 [If Operator](../Topic/If%20Operator%20\(Visual%20Basic\).md)   
 [If...Then...Else Statement](../Topic/If...Then...Else%20Statement%20\(Visual%20Basic\).md)   
 [Widening and Narrowing Conversions](../Topic/Widening%20and%20Narrowing%20Conversions%20\(Visual%20Basic\).md)