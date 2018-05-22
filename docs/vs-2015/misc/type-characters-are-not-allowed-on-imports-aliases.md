---
title: "Type characters are not allowed on Imports aliases | Microsoft Docs"
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
  - "vbc31398"
  - "BC31398"
helpviewer_keywords: 
  - "BC31398"
ms.assetid: 0620669d-b529-49f3-9deb-aeda4dacc58a
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Type characters are not allowed on Imports aliases
An import alias in an `Imports` statement contains at least one identifier type character.  
  
 An import alias must be a valid Visual Basic name. The allowed characters do not include any of the identifier type characters (`%`, `&`, `@`, `!`, `#`, and `$`). See [Declared Element Names](http://msdn.microsoft.com/library/09d8843b-c0dc-4afe-9dab-87c439a69e66).  
  
 **Error ID:** BC31398  
  
### To correct this error  
  
-   Remove the type identifier character or characters from the import alias.  
  
## See Also  
 [Type Characters](http://msdn.microsoft.com/library/6353cb9b-6ee4-4af6-a5a8-88ce39f90cc5)   
 [Declared Element Names](http://msdn.microsoft.com/library/09d8843b-c0dc-4afe-9dab-87c439a69e66)   
 [Imports Statement (.NET Namespace and Type)](http://msdn.microsoft.com/library/7062f8aa-d890-4232-9eed-92836e13fb6e)   
 [NOTINBUILD: Resolving a Reference When Multiple Variables Have the Same Name](http://msdn.microsoft.com/en-us/9601e39f-1911-44e1-ace5-3f6e090408b9)