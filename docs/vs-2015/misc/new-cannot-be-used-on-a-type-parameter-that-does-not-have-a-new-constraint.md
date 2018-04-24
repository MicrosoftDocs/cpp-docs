---
title: "&#39;New&#39; cannot be used on a type parameter that does not have a &#39;New&#39; constraint | Microsoft Docs"
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
  - "bc32046"
  - "vbc32046"
helpviewer_keywords: 
  - "BC32046"
ms.assetid: 7ec6b52d-6fd5-47a0-b4a2-163bfd3dae35
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;New&#39; cannot be used on a type parameter that does not have a &#39;New&#39; constraint
A declaration statement uses a [New Operator](http://msdn.microsoft.com/library/d7d566d7-fe0e-4336-91f7-641a542de4d0) clause specifying a type parameter as the type to be created, and the type parameter is declared without a `New` constraint.  
  
 A *constraint* on a type parameter imposes a requirement on any type argument passed to that type parameter when the generic type is created. The `New` constraint specifies that the type argument must expose a parameterless constructor that the creating code can access. This is what allows a `New` clause in a declaration statement to create an instance of that type.  
  
 **Error ID:** BC32046  
  
### To correct this error  
  
-   If you can require the type argument to expose an accessible parameterless constructor, add the `New` constraint to the declaration of the type parameter.  
  
-   If you cannot require the type argument to expose an accessible parameterless constructor, remove the `New` clause from the declaration statement. You cannot guarantee that any type argument passed to that type parameter permits creation of an instance.  
  
## See Also  
 [Generic Types in Visual Basic](http://msdn.microsoft.com/library/89f771d9-ecbb-4737-88b8-116b63c6cf4d)   
 [Type List](http://msdn.microsoft.com/library/56db947a-2ae8-40f2-a70a-960764e9d0db)