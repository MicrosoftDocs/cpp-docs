---
title: "Type characters are not allowed in label identifiers | Microsoft Docs"
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
  - "BC31395"
  - "vbc31395"
helpviewer_keywords: 
  - "BC31395"
ms.assetid: 6c65dd06-1ff1-49d3-b698-3afb21a39f0f
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Type characters are not allowed in label identifiers
A statement label contains at least one identifier type character.  
  
 A statement label must be a valid Visual Basic name. The allowed characters do not include any of the identifier type characters (`%`, `&`, `@`, `!`, `#`, and `$`). See [Declared Element Names](http://msdn.microsoft.com/library/09d8843b-c0dc-4afe-9dab-87c439a69e66).  
  
 **Error ID:** BC31395  
  
### To correct this error  
  
-   Remove the type identifier character or characters from the statement label.  
  
## See Also  
 [Type Characters](http://msdn.microsoft.com/library/6353cb9b-6ee4-4af6-a5a8-88ce39f90cc5)   
 [Declared Element Names](http://msdn.microsoft.com/library/09d8843b-c0dc-4afe-9dab-87c439a69e66)   
 [How to: Label Statements](http://msdn.microsoft.com/library/38f1ff43-2054-42cb-963b-1998e60c6ed4)