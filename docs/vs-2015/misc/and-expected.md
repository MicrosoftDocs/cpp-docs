---
title: "&#39;And&#39; expected | Microsoft Docs"
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
  - "vbc36620"
  - "bc36620"
helpviewer_keywords: 
  - "BC36620"
ms.assetid: b3d21d4d-86c0-44d2-8afc-c19d375e9ddd
caps.latest.revision: 5
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;And&#39; expected
A comparison operator other than `And` has been used to combine two or more `Equals` operators in a `Join` or `Group Join` clause. Only the `And` operator is allowed to combine multiple `Equals` operators in a `Join` or `Group Join` clause.  
  
 **Error ID:** BC36620  
  
### To correct this error  
  
1.  Restructure the `Equals` clauses to make comparisons by using only the `And` operator. The following is an example:  
  
    ```vb  
    Dim petOwnersJoin = From pers In people _  
                        Join pet In pets _  
                        On pet.Owner Equals pers And _  
                           pet.Name = pers.PetName_  
                        Select pers, pet  
    ```  
  
## See Also  
 [How to: Combine Data with Joins](http://msdn.microsoft.com/library/5b00a478-035b-41c6-8918-be1a97728396)   
 [Join Clause](http://msdn.microsoft.com/library/6dd37936-b27c-4e00-98ad-154b23f4de64)   
 [Group Join Clause](http://msdn.microsoft.com/library/37dbf79c-7b5c-421b-bbb7-dadfd2b92a1c)   
 [Introduction to LINQ in Visual Basic](http://msdn.microsoft.com/library/3047d86e-0d49-40e2-928b-dc02e46c7984)   
 [LINQ](http://msdn.microsoft.com/library/ddba5545-ff6e-46c3-8967-5c4280db5aca)