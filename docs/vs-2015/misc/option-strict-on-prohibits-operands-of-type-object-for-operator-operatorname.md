---
title: "Option Strict On prohibits operands of type Object for operator &#39;&lt;operatorname&gt;&#39; | Microsoft Docs"
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
  - "bc30038"
  - "vbc30038"
helpviewer_keywords: 
  - "BC30038"
ms.assetid: eb047d36-1fb4-460d-ae98-c76f31a89bed
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Option Strict On prohibits operands of type Object for operator &#39;&lt;operatorname&gt;&#39;
The only operators defined for object variables are `Is` and `TypeOf...Is`. When `Option Strict` is `On`, all operands must be of data types defined for the given operator.  
  
 **Error ID:** BC30038  
  
### To correct this error  
  
-   Use the appropriate type conversion functions, such as `CInt` or `CStr`, to convert the operands to data types defined for the operator.  
  
## See Also  
 [Is Operator](http://msdn.microsoft.com/library/8045a6c8-2a83-45b6-ad47-d09a704c656d)   
 [Comparison Operators in Visual Basic](http://msdn.microsoft.com/library/0b570339-5407-474f-8421-e183a8b303ee)   
 [Type Conversion Functions](http://msdn.microsoft.com/library/d9d8d165-f967-44ff-a6cd-598e4740a99e)