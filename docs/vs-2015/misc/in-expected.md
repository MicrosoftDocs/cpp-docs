---
title: "&#39;In&#39; expected | Microsoft Docs"
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
  - "bc36607"
  - "vbc36607"
helpviewer_keywords: 
  - "BC36607"
ms.assetid: f390bca5-12fe-4fe1-bd86-7f8ab66dfbd8
caps.latest.revision: 4
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;In&#39; expected
A `From` or `Aggregate` clause has been specified without an `In` operator. You use the `In` operator to identify the collection to query.  
  
 **Error ID:** BC36607  
  
### To correct this error  
  
1.  Add the `In` operator and key fields to the `From` or `Aggregate` clause. The following is an example:  
  
    ```vb  
    Dim names = From pers In people   
                Select pers.FirstName, pers.LastName  
    ```  
  
## See Also  
 [From Clause](http://msdn.microsoft.com/library/83e3665e-68a0-4540-a3a3-3d777a0f95d5)   
 [Aggregate Clause](http://msdn.microsoft.com/library/1315a814-5db6-4077-b34b-b141e11cc0eb)   
 [Introduction to LINQ in Visual Basic](http://msdn.microsoft.com/library/3047d86e-0d49-40e2-928b-dc02e46c7984)   
 [LINQ](http://msdn.microsoft.com/library/ddba5545-ff6e-46c3-8967-5c4280db5aca)