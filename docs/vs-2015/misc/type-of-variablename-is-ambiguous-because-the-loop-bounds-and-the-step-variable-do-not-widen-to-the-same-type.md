---
title: "Type of &#39;&lt;variablename&gt;&#39; is ambiguous because the loop bounds and the step variable do not widen to the same type | Microsoft Docs"
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
  - "vbc30983"
  - "bc30983"
helpviewer_keywords: 
  - "BC30983"
ms.assetid: 6b97153c-dee3-4429-b92a-2e5a212c864b
caps.latest.revision: 14
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Type of &#39;&lt;variablename&gt;&#39; is ambiguous because the loop bounds and the step variable do not widen to the same type
Your code contains a `For...Next` loop in which the compiler cannot infer a data type for the loop control variable because the following conditions is true:  
  
-   The data type of the loop control variable is not specified with an `As` clause.  
  
-   The loop bounds and step variable contain at least two data types.  
  
-   More than one possible conversion exists between the data types.  
  
-   There is no best type among the candidates, so that the choice of type for the loop control variable is ambiguous.  
  
 For example, the following loop has one loop bound of type `Integer` and one loop bound of type `UInteger`:  
  
```vb  
Dim m As Integer = 1  
Dim n As UInteger = 10  
' Not valid.  
' For i = m To n  
    ' Loop processing.  
' Next  
```  
  
 There is a possible conversion between `Integer` and `UInteger`, and a possible conversion between `UInteger` and `Integer`, but both are narrowing conversions so neither is the best choice.  
  
 In the next example, a third variable of type `Double` is added. Both `Integer` and `UInteger` have standard widening conversions to `Double`, which makes conversion to `Double` the best choice. Type inference assigns to loop control variable `i` the data type `Double`.  
  
```vb  
Dim stepVar As Double = 1  
' Valid.  
For i = m To n Step stepVar  
    ' Loop processing.  
Next  
```  
  
 **Error ID:** BC30983  
  
### To correct this error  
  
-   Explicitly convert one of the variables to a type that the others have a widening conversion to, for example:  
  
    ```  
    For i = m To CLng(n)  
    ```  
  
-   Use an `As` clause to specify the type of the control variable:  
  
    ```  
    For i As Double = m To n   
    ```  
  
## See Also  
 [For...Next Statement](http://msdn.microsoft.com/library/f5fc0d51-67ce-4c36-9f09-31c9a91c94e9)   
 [Implicit and Explicit Conversions](http://msdn.microsoft.com/library/77de1659-af8a-492c-967e-e7ef60ccce66)   
 [Local Type Inference](http://msdn.microsoft.com/library/b8307f18-2e56-4ab3-a45a-826873f400f6)   
 [Option Infer Statement](http://msdn.microsoft.com/library/4ad3e6e9-8f5b-4209-a248-de22ef6e4652)   
 [Widening and Narrowing Conversions](http://msdn.microsoft.com/library/058c3152-6c28-4268-af44-2209e774f0bd)