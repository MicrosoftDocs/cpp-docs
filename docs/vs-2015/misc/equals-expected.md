---
title: "&#39;Equals&#39; expected | Microsoft Docs"
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
  - "vbc36619"
  - "bc36619"
helpviewer_keywords: 
  - "BC36619"
ms.assetid: 1fd8c0dc-0e87-47b7-ab30-498809cca033
caps.latest.revision: 3
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Equals&#39; expected
A `Join` or `Group Join` clause has been specified without an `Equals` operator. You use the `Equals` operator to identify the `Boolean` operation to test key fields for matching items.  
  
 **Error ID:** BC36619  
  
### To correct this error  
  
1.  Add the `Equals` operator and key fields to the `Join` or `Group Join` clause. For example:  
  
    ```vb  
    Dim petOwnersGrouped = From pers In people _  
                           Group Join pet In pets _  
                             On pers Equals pet.Owner _  
                           Into PetList = Group _  
                           Select pers.FirstName, pers.LastName, _  
                                  PetList  
    ```  
  
## See Also  
 [How to: Combine Data with Joins](http://msdn.microsoft.com/library/5b00a478-035b-41c6-8918-be1a97728396)   
 [Join Clause](http://msdn.microsoft.com/library/6dd37936-b27c-4e00-98ad-154b23f4de64)   
 [Group Join Clause](http://msdn.microsoft.com/library/37dbf79c-7b5c-421b-bbb7-dadfd2b92a1c)   
 [Introduction to LINQ in Visual Basic](http://msdn.microsoft.com/library/3047d86e-0d49-40e2-928b-dc02e46c7984)   
 [LINQ](http://msdn.microsoft.com/library/ddba5545-ff6e-46c3-8967-5c4280db5aca)