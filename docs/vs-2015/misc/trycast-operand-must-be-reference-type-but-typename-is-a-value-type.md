---
title: "&#39;TryCast&#39; operand must be reference type, but &#39;&lt;typename&gt;&#39; is a value type | Microsoft Docs"
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
  - "BC30792"
  - "vbc30792"
helpviewer_keywords: 
  - "BC30792"
ms.assetid: 3325fce5-dbc0-4d1d-9530-31f4720bfe6e
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;TryCast&#39; operand must be reference type, but &#39;&lt;typename&gt;&#39; is a value type
The `TryCast` operator is used with a value type for at least one of the arguments.  
  
 `TryCast` tests for an inheritance or implementation relationship between the two arguments. Therefore, it allows only reference types for the arguments. For more information, see [Value Types and Reference Types](http://msdn.microsoft.com/library/fc82ce15-5a40-4c5c-a1e1-a556830e7391).  
  
 **Error ID:** BC30792  
  
### To correct this error  
  
-   Use `DirectCast` or `CType` to perform the conversion. They both allow value types.  
  
## See Also  
 [TryCast Operator](http://msdn.microsoft.com/library/d1ef5d47-fef4-491e-b014-1d910628f65c)   
 [DirectCast Operator](http://msdn.microsoft.com/library/63e5a1d0-4d9e-4732-bf8f-e90c0c8784b8)   
 [CType Function](http://msdn.microsoft.com/library/dd4b29e7-6fa1-428c-877e-69955420bb72)   
 [Value Types and Reference Types](http://msdn.microsoft.com/library/fc82ce15-5a40-4c5c-a1e1-a556830e7391)