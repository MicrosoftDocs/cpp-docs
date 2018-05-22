---
title: "Illegal call expression or index expression | Microsoft Docs"
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
  - "vbc32303"
  - "bc32303"
helpviewer_keywords: 
  - "BC32303"
ms.assetid: eed6a16e-4a44-4f72-b1de-d4212940da37
caps.latest.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Illegal call expression or index expression
A value in parentheses follows an expression that is not a procedure, property, or array.  
  
 The following code can generate this error.  
  
 `Dim testVariable As Object = Nothing(1)`  
  
 Because `Nothing` does not take arguments or indexes, you cannot use it with parentheses.  
  
 **Error ID:** BC32303  
  
### To correct this error  
  
-   Remove the parentheses and any value they contain.  
  
## See Also  
 [How to: Call a Procedure That Returns a Value](http://msdn.microsoft.com/library/a445127b-0f5f-465a-98fb-3e514b93d115)   
 [How to: Call a Procedure that Does Not Return a Value](http://msdn.microsoft.com/library/259b49a3-a3c1-4254-ba8c-73cdc4127703)   
 [NOTINBUILD How to: Put a Value into an Array](http://msdn.microsoft.com/en-us/6dddc79c-cf60-41c2-b572-8bfa49b4fe7e)   
 [NOTINBUILD How to: Get a Value from an Array](http://msdn.microsoft.com/en-us/202a6468-8ccb-4864-bd8b-eab3b42d4288)   
 [How to: Put a Value in a Property](http://msdn.microsoft.com/library/c39401e5-b5fc-4439-8f31-ed640f7ce6ed)   
 [How to: Get a Value from a Property](http://msdn.microsoft.com/library/3954423e-6ab7-4a4c-b55c-a8d27be47891)