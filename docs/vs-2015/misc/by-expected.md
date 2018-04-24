---
title: "&#39;By&#39; expected | Microsoft Docs"
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
  - "vbc36605"
  - "bc36605"
helpviewer_keywords: 
  - "BC36605"
ms.assetid: d0397b6e-bfc2-400c-92fc-efe82036cfdb
caps.latest.revision: 4
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;By&#39; expected
An `Order By` or `Group By` clause has been specified without the `By` keyword.  
  
 **Error ID:** BC36605  
  
### To correct this error  
  
1.  Add the `By` keyword to the `Order By` or `Group By` clause. The following is an example:  
  
    ```vb  
    Dim customersByCountry = From cust In customers _  
                             Order By cust.Country, cust.City _  
                             Group By CountryName = cust.Country _  
                             Into RegionalCustomers = Group, Count() _  
                             Order By CountryName  
    ```  
  
## See Also  
 [How to: Sort Query Results](http://msdn.microsoft.com/library/07a4584d-9fd8-4a1d-b7d9-ccf2efa5c84e)   
 [Order By Clause](http://msdn.microsoft.com/library/fa911282-6b81-44c7-acfa-46b5bb93df75)   
 [Group By Clause](http://msdn.microsoft.com/library/b1b5dcea-6654-473b-a2db-01f7e4c265d7)   
 [Introduction to LINQ in Visual Basic](http://msdn.microsoft.com/library/3047d86e-0d49-40e2-928b-dc02e46c7984)   
 [LINQ](http://msdn.microsoft.com/library/ddba5545-ff6e-46c3-8967-5c4280db5aca)