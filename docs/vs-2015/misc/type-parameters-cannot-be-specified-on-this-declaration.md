---
title: "Type parameters cannot be specified on this declaration | Microsoft Docs"
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
  - "vbc32065"
  - "bc32065"
helpviewer_keywords: 
  - "BC32065"
ms.assetid: 94cfe3de-74fd-4a2c-9246-ec4a05b73d55
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Type parameters cannot be specified on this declaration
A programming element is declared with a type parameter list, but the programming element is not eligible to be a generic type.  
  
 Programming elements that are not eligible to be generic include properties, operators, events, and constructors. Declaring any of these elements with a type parameter list results in this error.  
  
 **Error ID:** BC32065  
  
### To correct this error  
  
-   Remove the `Of` keyword and the type parameters from the declaration.  
  
## See Also  
 [Generic Types in Visual Basic](http://msdn.microsoft.com/library/89f771d9-ecbb-4737-88b8-116b63c6cf4d)   
 [Type List](http://msdn.microsoft.com/library/56db947a-2ae8-40f2-a70a-960764e9d0db)