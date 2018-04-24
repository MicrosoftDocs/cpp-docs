---
title: "Type arguments unexpected | Microsoft Docs"
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
  - "vbc32088"
  - "bc32088"
helpviewer_keywords: 
  - "BC32088"
ms.assetid: a0918e90-e7ad-4edc-81e1-584e6174bb6c
caps.latest.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Type arguments unexpected
An `Implements` clause supplies type arguments for the interface member it is implementing.  
  
 The `Implements` clause should only identify the interface and member it is implementing. This means that if you are declaring a generic procedure, the `Of` clause and the type arguments should appear in the main part of the declaration, just as they would if you were not implementing an interface procedure.  
  
 The following code can generate this error.  
  
```  
Public Interface testInterface  
    Sub testSub(Of t)()  
End Interface  
Public Class testClass  
    Implements testInterface  
    Public Sub testSub() Implements testInterface.testSub(Of t)()  
    End Sub  
End Class  
```  
  
 The declaration preceding the `Implements` clause should look like the interface definition, except for the possible addition of access or procedure modifiers. The following code avoids the error.  
  
```  
Public Sub testSub(Of t)() Implements testInterface.testSub  
```  
  
 **Error ID:** BC32088  
  
### To correct this error  
  
-   Remove the type argument list from the `Implements` clause.  
  
-   If you are implementing a generic member of the interface, then put the type argument list in the main part of the declaration, preceding the `Implements` keyword.  
  
## See Also  
 [Implements](../Topic/Implements%20Clause%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: Implements Keyword and Implements Statement](http://msdn.microsoft.com/en-us/b96560f7-6413-480f-a1e2-f80253bab5be)   
 [Generic Types in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Generic Procedures in Visual Basic](../Topic/Generic%20Procedures%20in%20Visual%20Basic.md)   
 [Type List](../Topic/Type%20List%20\(Visual%20Basic\).md)