---
title: "&#39;TypeOf...Is&#39; requires its left operand to have a reference type, but this operand has the type &#39;&lt;type&gt;&#39; | Microsoft Docs"
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
  - "bc30021"
  - "vbc30021"
helpviewer_keywords: 
  - "BC30021"
ms.assetid: a6e76fc8-9c7f-4e55-8b68-e6e7b03a6737
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;TypeOf...Is&#39; requires its left operand to have a reference type, but this operand has the type &#39;&lt;type&gt;&#39;
The `TypeOf...Is` expression checks an object variable's run-time type compatibility. This compatibility is not defined for value types.  
  
 **Error ID:** BC30021  
  
### To correct this error  
  
-   If `Option Strict` is `Off`, use the `TypeName` or `VarType` function to obtain the variable's data type information.  
  
-   If `Option Strict` is `On`, the variable declaration determines the variable's data type.  
  
## See Also  
 [Comparison Operators in Visual Basic](http://msdn.microsoft.com/library/0b570339-5407-474f-8421-e183a8b303ee)   
 [NOT IN BUILD: TypeName Function (Visual Basic)](http://msdn.microsoft.com/en-us/6197bc6c-e8a6-4711-883c-0c95e94e272c)   
 [NOT IN BUILD: VarType Function (Visual Basic)](http://msdn.microsoft.com/en-us/e820b6fc-faa6-4de4-836a-0466032dc190)   
 [Option Strict Statement](http://msdn.microsoft.com/library/5883e0c1-a920-4274-8e46-b0ff047eaee5)