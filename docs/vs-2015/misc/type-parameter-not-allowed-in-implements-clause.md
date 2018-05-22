---
title: "Type parameter not allowed in &#39;Implements&#39; clause | Microsoft Docs"
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
  - "vbc32056"
  - "bc32056"
helpviewer_keywords: 
  - "BC32056"
ms.assetid: a62d773b-e878-4817-8638-da49849477d7
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
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
 [Implements](http://msdn.microsoft.com/library/5252cdf9-964d-4fc6-af0f-0449b7126b5a)   
 [NOT IN BUILD: Implements Keyword and Implements Statement](http://msdn.microsoft.com/en-us/b96560f7-6413-480f-a1e2-f80253bab5be)   
 [Generic Types in Visual Basic](http://msdn.microsoft.com/library/89f771d9-ecbb-4737-88b8-116b63c6cf4d)   
 [Type List](http://msdn.microsoft.com/library/56db947a-2ae8-40f2-a70a-960764e9d0db)