---
title: "&#39;On&#39; expected | Microsoft Docs"
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
  - "bc36618"
  - "vbc36618"
helpviewer_keywords: 
  - "BC36618"
ms.assetid: 7cb1b205-c4c3-4485-ae3f-8942425692ff
caps.latest.revision: 5
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;On&#39; expected
A `Join` or `Group Join` clause has been specified without an `On` operator. You use the `On` operator to identify the key field of the range variable for each collection. Key fields are used to match items from each collection.  
  
 **Error ID:** BC36618  
  
### To correct this error  
  
1.  Add the `On` operator and key fields to the `Join` or `Group Join` clause. Following is an example:  
  
    ```vb  
    Dim petOwnersJoin = From pers In people _  
                        Join pet In pets _  
                        On pet.Owner Equals pers _  
                        Select pers.FirstName, PetName = pet.Name  
    ```  
  
## See Also  
 [How to: Combine Data with Joins](http://msdn.microsoft.com/library/5b00a478-035b-41c6-8918-be1a97728396)   
 [Join Clause](http://msdn.microsoft.com/library/6dd37936-b27c-4e00-98ad-154b23f4de64)   
 [Group Join Clause](http://msdn.microsoft.com/library/37dbf79c-7b5c-421b-bbb7-dadfd2b92a1c)   
 [Introduction to LINQ in Visual Basic](http://msdn.microsoft.com/library/3047d86e-0d49-40e2-928b-dc02e46c7984)   
 [LINQ](http://msdn.microsoft.com/library/ddba5545-ff6e-46c3-8967-5c4280db5aca)