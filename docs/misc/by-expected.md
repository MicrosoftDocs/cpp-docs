---
title: "&#39;By&#39; expected | Microsoft Docs"
ms.custom: ""
ms.date: "2015-07-20"
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
# &#39;By&#39; expected
An `Order By` or `Group By` clause has been specified without the `By` keyword.  
  
 **Error ID:** BC36605  
  
### To correct this error  
  
1.  Add the `By` keyword to the `Order By` or `Group By` clause. The following is an example:  
  
    ```vb#  
    Dim customersByCountry = From cust In customers _  
                             Order By cust.Country, cust.City _  
                             Group By CountryName = cust.Country _  
                             Into RegionalCustomers = Group, Count() _  
                             Order By CountryName  
    ```  
  
## See Also  
 [How to: Sort Query Results](http://msdn.microsoft.com/Library/07a4584d-9fd8-4a1d-b7d9-ccf2efa5c84e)   
 [Order By Clause](/dotnet/articles/visual-basic/language-reference/queries/order-by-clause)   
 [Group By Clause](/dotnet/articles/visual-basic/language-reference/queries/group-by-clause)   
 [Introduction to LINQ in Visual Basic](/dotnet/articles/visual-basic/programming-guide/language-features/linq/introduction-to-linq)   
 [LINQ](/dotnet/articles/visual-basic/programming-guide/language-features/linq/index)