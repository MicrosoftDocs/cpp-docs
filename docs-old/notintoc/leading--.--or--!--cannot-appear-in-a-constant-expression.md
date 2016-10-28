---
title: "Leading &#39;.&#39; or &#39;!&#39; cannot appear in a constant expression"
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
  - "vbc30995"
  - "bc30995"
helpviewer_keywords: 
  - "BC30995"
ms.assetid: eed62684-66db-4fdb-9da7-f1407a55b172
caps.latest.revision: 6
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
# Leading &#39;.&#39; or &#39;!&#39; cannot appear in a constant expression
Member access (.) and dictionary member access (!) require an expression specifying the element that contains the member most of the time, including constant expressions. The following declaration is not valid.  
  
```  
' Not valid.  
Const c As String = .name  
```  
  
 **Error ID:** BC30995  
  
### To correct this error  
  
-   Specify the instance that contains the member that you want to access.  
  
## See Also  
 [Object Initializers: Named and Anonymous Types](../Topic/Object%20Initializers:%20Named%20and%20Anonymous%20Types%20\(Visual%20Basic\).md)   
 [How to: Declare an Instance of an Anonymous Type (Visual Basic)](assetId:///119f616c-9bcd-4731-ac00-4285be5959f7)   
 [Const Statement](../Topic/Const%20Statement%20\(Visual%20Basic\).md)