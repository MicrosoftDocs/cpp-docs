---
title: "Object initializer syntax cannot be used to initialize an instance of type &#39;Object&#39;"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "bc30994"
  - "vbc30994"
helpviewer_keywords: 
  - "BC30994"
ms.assetid: 2ef65965-f014-4fc1-8c7d-c603f0a764df
caps.latest.revision: 5
ms.author: "billchi"
manager: "douge"
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
# Object initializer syntax cannot be used to initialize an instance of type &#39;Object&#39;
You cannot initialize an instance of `Object` by using object initializer syntax. An instance of `Object` has no properties or fields to assign a value to, and object initializer syntax requires at least one such property or field.  
  
```  
' Not valid.  
' Dim obj1 = New Object With {}  
' Dim obj2 = New Object With {.ToString = <some value>}  
```  
  
 **Error ID:** BC30994  
  
### To correct this error  
  
1.  Declare instances of type `Object` without using an initializer list:  
  
    ```  
    Dim obj3 as Object  
    Dim obj4 as New Object()  
    ```  
  
## See Also  
 [Object Initializers: Named and Anonymous Types](../Topic/Object%20Initializers:%20Named%20and%20Anonymous%20Types%20\(Visual%20Basic\).md)   
 [Object Data Type](../Topic/Object%20Data%20Type.md)