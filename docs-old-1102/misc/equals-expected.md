---
title: "&#39;Equals&#39; expected"
ms.custom: ""
ms.date: "2015-07-20"
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
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# &#39;Equals&#39; expected
A `Join` or `Group Join` clause has been specified without an `Equals` operator. You use the `Equals` operator to identify the `Boolean` operation to test key fields for matching items.  
  
 **Error ID:** BC36619  
  
### To correct this error  
  
1.  Add the `Equals` operator and key fields to the `Join` or `Group Join` clause. For example:  
  
    ```vb#  
    Dim petOwnersGrouped = From pers In people _  
                           Group Join pet In pets _  
                             On pers Equals pet.Owner _  
                           Into PetList = Group _  
                           Select pers.FirstName, pers.LastName, _  
                                  PetList  
    ```  
  
## See Also  
 [How to: Combine Data with Joins](../Topic/How%20to:%20Combine%20Data%20with%20LINQ%20by%20Using%20Joins%20\(Visual%20Basic\).md)   
 [Join Clause](../Topic/Join%20Clause%20\(Visual%20Basic\).md)   
 [Group Join Clause](../Topic/Group%20Join%20Clause%20\(Visual%20Basic\).md)   
 [Introduction to LINQ in Visual Basic](../Topic/Introduction%20to%20LINQ%20in%20Visual%20Basic.md)   
 [LINQ](../Topic/LINQ%20in%20Visual%20Basic.md)