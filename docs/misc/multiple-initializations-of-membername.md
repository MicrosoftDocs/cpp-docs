---
title: "Multiple initializations of &#39;&lt;membername&gt;&#39;"
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
  - "vbc30989"
  - "bc30989"
helpviewer_keywords: 
  - "BC30989"
ms.assetid: 574b6398-1e9d-43e1-ac16-6fc8687f71d9
caps.latest.revision: 13
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
# Multiple initializations of &#39;&lt;membername&gt;&#39;
Multiple initializations of '\<membername>'. Fields and properties can be initialized only once in an object initializer expression.  
  
 You can assign an initial value to each field and property in an object initializer list only one time. The following declaration is not valid.  
  
```  
' Dim cust = New Customer() With {.Name = "Bob", .Name = "Robert"}  
```  
  
> [!NOTE]
>  You can use one field or property as the initial value for another member, as shown in the following declaration.  
  
```  
Dim cust = New Customer() With {.First = "Mike", .Last = "Nash", _  
                                .Full = .First & " " & .Last}  
```  
  
 **Error ID:** BC30989  
  
### To correct this error  
  
-   Eliminate all except one of the initializations for each field or property in the object initializer list.  
  
## See Also  
 [Object Initializers: Named and Anonymous Types](../Topic/Object%20Initializers:%20Named%20and%20Anonymous%20Types%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: Property Procedures vs. Fields](http://msdn.microsoft.com/en-us/da1c05c1-87c7-40fa-b92c-e9c7e4d170f7)