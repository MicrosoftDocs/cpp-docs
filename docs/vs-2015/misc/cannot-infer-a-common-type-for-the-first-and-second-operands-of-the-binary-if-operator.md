---
title: "Cannot infer a common type for the first and second operands of the binary &#39;If&#39; operator | Microsoft Docs"
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
  - "vbc33110"
  - "bc33110"
helpviewer_keywords: 
  - "BC33110"
ms.assetid: f46873aa-f6cd-4cc9-9e8e-e668bddf0980
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Cannot infer a common type for the first and second operands of the binary &#39;If&#39; operator
Cannot infer a common type for the first and second operands of the binary 'If' operator. One must have a widening conversion to the other.  
  
 The binary `If` operator requires that there be a widening conversion between one of the arguments and the other argument. For example, because there is not a widening conversion in either direction between `Integer` and `String`, the following code causes this error.  
  
```vb  
Dim first? As Integer  
Dim second As String = "First is Nothing"  
'' Not valid.  
' Console.WriteLine(If(first, second))  
```  
  
 **Error ID:** BC33110  
  
### To correct this error  
  
-   Provide an explicit conversion for one of the operands, if that is possible in your code:  
  
    ```  
    Console.WriteLine(If(first, CInt(second)))   
    ```  
  
-   Rewrite the code by using a different conditional construction.  
  
    ```  
    If first IsNot Nothing Then  
        Console.WriteLine(first)  
    Else  
        Console.WriteLine(second)  
    End If  
    ```  
  
## See Also  
 [If Operator](http://msdn.microsoft.com/library/dd56c9df-7cd4-442c-9ba6-20c70ee44c8f)   
 [Widening and Narrowing Conversions](http://msdn.microsoft.com/library/058c3152-6c28-4268-af44-2209e774f0bd)   
 [If...Then...Else Statement](http://msdn.microsoft.com/library/790068a2-1307-4e28-8a72-be5ebda099e9)