---
title: "Non-shared members in a Structure cannot be declared &#39;New&#39; | Microsoft Docs"
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
  - "vbc30795"
  - "BC30795"
helpviewer_keywords: 
  - "BC30795"
ms.assetid: 8e4e1ad8-3bac-475f-82e8-e4f134692204
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non-shared members in a Structure cannot be declared &#39;New&#39;
A nonshared variable in a structure is declared with a `New` clause.  
  
 You can initialize a shared reference variable in a structure, and you can have a nonshared reference variable without initialization, as the following code lines show.  
  
 `Shared structVar1 As New System.ApplicationException`  
  
 `Dim structVar2 As System.ApplicationException`  
  
 However, you cannot initialize a nonshared reference variable in a structure. The following code line is invalid.  
  
 `Dim structVar3 As New System.ApplicationException ' INVALID IN A STRUCTURE`  
  
 **Error ID:** BC30795  
  
### To correct this error  
  
-   Remove either the `Shared` modifier or the `New` keyword from the reference variable declaration.  
  
## See Also  
 [Structure Statement](http://msdn.microsoft.com/library/9bd1deea-2a89-4cdc-812c-6dcbb947c391)   
 [Shared](http://msdn.microsoft.com/library/2bf7cf2c-b0dd-485e-8749-b5d674dab4cd)   
 [New Operator](http://msdn.microsoft.com/library/d7d566d7-fe0e-4336-91f7-641a542de4d0)