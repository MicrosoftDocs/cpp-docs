---
title: "&#39;If&#39; operands cannot be named arguments | Microsoft Docs"
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
  - "bc33105"
  - "vbc33105"
helpviewer_keywords: 
  - "BC33105"
ms.assetid: 596baeb6-a44f-4d92-beb7-06624b60c00d
caps.latest.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;If&#39; operands cannot be named arguments
Using named arguments in the operands of the `If` operator is not valid. The following example causes this error:  
  
```  
Dim i As Integer  
Dim result As String  
' Not valid.  
' result = (If(i > 0, TruePart:="positive", FalsePart:="not positive")  
```  
  
 This differs from the `IIf` function, which does allow named arguments, as shown in the following code:  
  
```  
' Valid.  
IIf(i > 0, TruePart:="positive", FalsePart:="not positive")  
```  
  
 **Error ID:** BC33105  
  
### To correct this error  
  
-   Remove the name assignments from the operands, as shown in the following code.  
  
    ```  
    result = If(i > 0, "positive", "not positive")  
    ```  
  
## See Also  
 [If Operator](http://msdn.microsoft.com/library/dd56c9df-7cd4-442c-9ba6-20c70ee44c8f)   
 [Passing Arguments by Position and by Name](http://msdn.microsoft.com/library/1ad7358f-1da9-48da-a95b-f3c7ed41eff3)