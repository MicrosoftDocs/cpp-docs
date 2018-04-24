---
title: "Type character cannot be used in a type parameter declaration | Microsoft Docs"
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
  - "vbc32041"
  - "bc32041"
helpviewer_keywords: 
  - "BC32041"
ms.assetid: 24f9a514-f3d4-46c3-805c-71225f6fec59
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Type character cannot be used in a type parameter declaration
A type parameter declaration contains at least one identifier type character.  
  
 A type parameter of a generic type must be a valid Visual Basic name. The allowed characters do not include any of the identifier type characters (`%`, `&`, `@`, `!`, `#`, and `$`). See [Declared Element Names](http://msdn.microsoft.com/library/09d8843b-c0dc-4afe-9dab-87c439a69e66).  
  
 **Error ID:** BC32041  
  
### To correct this error  
  
-   Remove the type identifier character or characters from the type parameter declaration.  
  
## See Also  
 [Type Characters](http://msdn.microsoft.com/library/6353cb9b-6ee4-4af6-a5a8-88ce39f90cc5)   
 [Declared Element Names](http://msdn.microsoft.com/library/09d8843b-c0dc-4afe-9dab-87c439a69e66)   
 [Generic Types in Visual Basic](http://msdn.microsoft.com/library/89f771d9-ecbb-4737-88b8-116b63c6cf4d)   
 [Type List](http://msdn.microsoft.com/library/56db947a-2ae8-40f2-a70a-960764e9d0db)