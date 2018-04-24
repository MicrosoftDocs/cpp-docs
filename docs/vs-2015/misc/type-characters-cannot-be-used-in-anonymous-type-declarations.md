---
title: "Type characters cannot be used in anonymous type declarations | Microsoft Docs"
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
  - "bc36560"
  - "vbc36560"
helpviewer_keywords: 
  - "BC36560"
ms.assetid: 70eee559-d6fc-409b-b835-2c84511b160e
caps.latest.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Type characters cannot be used in anonymous type declarations
You cannot use a type character on a property name when you declare an instance of an anonymous type. The data type of the property is inferred from the value assigned to it. For example, the following declarations are not valid.  
  
```vb  
'' Not valid.  
'Dim anon1 = New With {.ID$ = "abc"}  
'Dim anon2 = New With {.ID$ = 42}  
```  
  
 **Error ID:** BC36560  
  
### To correct this error  
  
-   Remove the type character from the initializer list. You can explicitly convert the assigned value if this is necessary to establish the data type you want for the property.  
  
    ```vb  
    ' Valid.  
    Dim anon1 = New With {.ID = "abc"}  
    Dim anon2 = New With {.ID = CStr(42)}  
    ```  
  
## See Also  
 [Anonymous Types](http://msdn.microsoft.com/library/7b87532c-4b3e-4398-8503-6ea9d67574a4)   
 [How to: Infer Property Names and Types in Anonymous Type Declarations](http://msdn.microsoft.com/library/7c748b22-913f-4d9d-b747-6b7bf296a0bc)   
 [Implicit and Explicit Conversions](http://msdn.microsoft.com/library/77de1659-af8a-492c-967e-e7ef60ccce66)