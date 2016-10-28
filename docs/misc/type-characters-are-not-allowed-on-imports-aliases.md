---
title: "Type characters are not allowed on Imports aliases"
ms.custom: ""
ms.date: "2015-07-20"
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
# Type characters are not allowed on Imports aliases
An import alias in an `Imports` statement contains at least one identifier type character.  
  
 An import alias must be a valid Visual Basic name. The allowed characters do not include any of the identifier type characters (`%`, `&`, `@`, `!`, `#`, and `$`). See [Declared Element Names](../Topic/Declared%20Element%20Names%20\(Visual%20Basic\).md).  
  
 **Error ID:** BC31398  
  
### To correct this error  
  
-   Remove the type identifier character or characters from the import alias.  
  
## See Also  
 [Type Characters](../Topic/Type%20Characters%20\(Visual%20Basic\).md)   
 [Declared Element Names](../Topic/Declared%20Element%20Names%20\(Visual%20Basic\).md)   
 [Imports Statement (.NET Namespace and Type)](../Topic/Imports%20Statement%20\(.NET%20Namespace%20and%20Type\).md)   
 [NOTINBUILD: Resolving a Reference When Multiple Variables Have the Same Name](http://msdn.microsoft.com/en-us/9601e39f-1911-44e1-ace5-3f6e090408b9)