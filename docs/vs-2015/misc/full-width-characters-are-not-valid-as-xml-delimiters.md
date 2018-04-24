---
title: "Full width characters are not valid as XML delimiters | Microsoft Docs"
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
  - "vbc31197"
  - "bc31197"
helpviewer_keywords: 
  - "BC31197"
ms.assetid: f5d724f8-545b-4cf8-9606-12c63814c6e8
caps.latest.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Full width characters are not valid as XML delimiters
An XML literal has been defined that includes a full-width character as a delimiter. Full-width characters are also referred to as wide or multi-byte characters.  
  
 **Error ID:** BC31197  
  
### To correct this error  
  
-   Remove the full-width character from the XML literal definition and replace it with a valid ANSI delimiter character. Valid delimiter characters include the following: `<`, `>`, `=`, `:`, `/`.  
  
## See Also  
 [XML Literals](http://msdn.microsoft.com/library/16b28c40-8768-423f-bd9c-22ff10de2b54)   
 [Character Encoding in the .NET Framework](http://msdn.microsoft.com/library/bf6d9823-4c2d-48af-b280-919c5af66ae9)   
 [XML](http://msdn.microsoft.com/library/954b6e40-1246-4185-a018-4061724fcae9)