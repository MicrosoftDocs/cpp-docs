---
title: "Initializers on structure members are valid only for &#39;Shared&#39; members and constants | Microsoft Docs"
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
  - "bc31049"
  - "vbc31049"
helpviewer_keywords: 
  - "BC31049"
ms.assetid: 8356978e-7f84-4932-be0f-dda005c9f8ca
caps.latest.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Initializers on structure members are valid only for &#39;Shared&#39; members and constants
A structure member variable was initialized as part of its declaration.  
  
 **Error ID:** BC31049  
  
### To correct this error  
  
-   Use a constant instead of a variable.  
  
-   Add a parameterized constructor to the structure. For example:  
  
    ```  
    Structure TestStruct  
       Public t As Integer  
       Sub New(ByVal Tval As Integer)  
          t = Tval  
       End Sub  
    End Structure  
    ```  
  
## See Also  
 [How to: Declare a Structure](../Topic/How%20to:%20Declare%20a%20Structure%20\(Visual%20Basic\).md)   
 [Constants and Enumerations](../Topic/Constants%20and%20Enumerations%20in%20Visual%20Basic.md)