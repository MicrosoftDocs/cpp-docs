---
title: "&#39;Group&#39; or an identifier expected | Microsoft Docs"
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
  - "vbc36707"
  - "bc36707"
helpviewer_keywords: 
  - "BC36707"
ms.assetid: 214e4aa3-d20f-41b3-902c-f1076d31b832
caps.latest.revision: 4
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Group&#39; or an identifier expected
The `Into` portion of a `Group By` or `Group Join` clause does not include the `Group` keyword. You must include the `Group` keyword in the `Into` clause of a `Group By` or `Group Join` clause to identify the variable name to use for the grouped results. This can be either a name you specify or the keyword `Group`.  
  
 **Error ID:** BC36707  
  
### To correct this error  
  
1.  Ensure that the `Into` portion of the `Group By` or `Group Join` clause includes the `Group` keyword, as shown in the following example.  
  
    ```vb  
    Dim orders = From order In orderList _  
                 Order By order.OrderDate _  
                 Group By OrderDate = order.OrderDate _  
                 Into OrdersByDate = Group  
    ```  
  
## See Also  
 [Introduction to LINQ in Visual Basic](http://msdn.microsoft.com/library/3047d86e-0d49-40e2-928b-dc02e46c7984)   
 [Group By Clause](http://msdn.microsoft.com/library/b1b5dcea-6654-473b-a2db-01f7e4c265d7)   
 [Group Join Clause](http://msdn.microsoft.com/library/37dbf79c-7b5c-421b-bbb7-dadfd2b92a1c)