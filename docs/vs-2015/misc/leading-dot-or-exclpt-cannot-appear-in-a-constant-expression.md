---
title: "Leading &#39;.&#39; or &#39;!&#39; cannot appear in a constant expression | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc30995"
  - "bc30995"
helpviewer_keywords: 
  - "BC30995"
ms.assetid: eed62684-66db-4fdb-9da7-f1407a55b172
caps.latest.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
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
 [How to: Declare an Instance of an Anonymous Type (Visual Basic)](http://msdn.microsoft.com/en-us/119f616c-9bcd-4731-ac00-4285be5959f7)   
 [Const Statement](../Topic/Const%20Statement%20\(Visual%20Basic\).md)