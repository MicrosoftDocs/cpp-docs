---
title: "Static variable &#39;&lt;variablename&gt;&#39; declared without an &#39;As&#39; clause; type of &#39;Object&#39; assumed | Microsoft Docs"
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
  - "vbc42111"
  - "bc42111"
helpviewer_keywords: 
  - "BC42111"
ms.assetid: ca6b625c-21a5-45f7-ac67-282f6993a724
caps.latest.revision: 15
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Static variable &#39;&lt;variablename&gt;&#39; declared without an &#39;As&#39; clause; type of &#39;Object&#39; assumed
The compiler does not infer the data type of static local variables. In the following example, with `Option Strict` set to `Off`, the type of `m` will be `Object`, regardless of whether `Option Infer` is set to `On` or `Off`. Local type inference does not apply.  
  
```  
Sub Main()  
    Static m = 10  
End Sub  
```  
  
 By default, this message is a warning. For information about how to hide warnings or how to treat warnings as errors, see [Configuring Warnings in Visual Basic](http://msdn.microsoft.com/library/99cf4781-bd4d-47b4-91b9-217933509f82).  
  
 **Error ID:** BC42111  
  
### To address this warning  
  
-   Specify the data type for static local variables.  
  
     For example, if you want `m` in the previous example to be of type `Integer`, specify the type in the declaration.  
  
    ```  
    Sub Main()  
        Static m As Integer = 10  
    End Sub  
  
    ```  
  
## See Also  
 [Dim Statement](http://msdn.microsoft.com/library/fae3eca1-f0b2-4400-994b-7aa58a848448)   
 [NOTINBUILD How to: Lengthen a Variable's Lifetime](http://msdn.microsoft.com/en-us/04e7c56c-1db0-4fe5-a678-859a39ec654b)   
 [Local Type Inference](http://msdn.microsoft.com/library/b8307f18-2e56-4ab3-a45a-826873f400f6)   
 [Option Infer Statement](http://msdn.microsoft.com/library/4ad3e6e9-8f5b-4209-a248-de22ef6e4652)   
 [Static](http://msdn.microsoft.com/library/19013910-4658-47b6-a22e-1744b527979e)