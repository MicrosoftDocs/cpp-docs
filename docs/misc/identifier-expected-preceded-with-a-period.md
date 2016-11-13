---
title: "Identifier expected, preceded with a period | Microsoft Docs"
ms.custom: ""
ms.date: "2015-07-20"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc36576"
  - "vbc36576"
helpviewer_keywords: 
  - "BC36576"
ms.assetid: 02217cc4-8972-4a6d-97a6-4ecbb7399af2
caps.latest.revision: 8
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
# Identifier expected, preceded with a period
A value from which a property name cannot be inferred has been included in the initializer list of an anonymous type declaration without being assigned to a property name.  
  
```  
' Not valid.  
' Dim anon1 = New With {.grade = 100, 95}  
```  
  
 **Error ID:** BC36576  
  
### To correct this error  
  
-   Provide a property name for each value in the initializer list, as shown in the following code:  
  
    ```  
    Dim anon2 = New With {.grade1 = 100, .grade2 = 95}  
    ```  
  
## See Also  
 [Object Initializers: Named and Anonymous Types](../Topic/Object%20Initializers:%20Named%20and%20Anonymous%20Types%20\(Visual%20Basic\).md)   
 [How to: Declare an Instance of an Anonymous Type (Visual Basic)](http://msdn.microsoft.com/en-us/119f616c-9bcd-4731-ac00-4285be5959f7)   
 [How to: Infer Property Names and Types in Anonymous Type Declarations](../Topic/How%20to:%20Infer%20Property%20Names%20and%20Types%20in%20Anonymous%20Type%20Declarations%20\(Visual%20Basic\).md)