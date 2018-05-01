---
title: "&#39;Structure&#39; constraint cannot be specified multiple times for the same type parameter | Microsoft Docs"
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
  - "bc32102"
  - "vbc32102"
helpviewer_keywords: 
  - "BC32102"
ms.assetid: f4ebd416-7fb9-4a24-a8df-e9ee7ccc2c76
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Structure&#39; constraint cannot be specified multiple times for the same type parameter
A constraint list includes the [Structure (Visual Basic)](http://msdn.microsoft.com/en-us/263ce115-ac36-4c05-8cb7-0e0eead5c6d0) constraint more than once.  
  
 A constraint list on a type parameter can specify that the type argument passed to that type parameter must be a value type (with the `Structure` constraint) or must be a reference type (with the [Class (Visual Basic)](http://msdn.microsoft.com/en-us/0777c6e6-46bc-451b-ad70-57b49d4ef4f7) constraint). You cannot specify both constraints on the same type parameter, and you cannot specify either one more than once.  
  
 Error ID: BC32102  
  
### To correct this error  
  
-   Remove any redundant `Structure` keywords. You should have only one in the constraint list.  
  
## See Also  
 [Generic Types in Visual Basic](http://msdn.microsoft.com/library/89f771d9-ecbb-4737-88b8-116b63c6cf4d)   
 [Value Types and Reference Types](http://msdn.microsoft.com/library/fc82ce15-5a40-4c5c-a1e1-a556830e7391)