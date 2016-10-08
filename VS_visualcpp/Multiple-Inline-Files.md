---
title: "Multiple Inline Files"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 6d381dcf-0ed8-45d1-8df3-b4598d860b99
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Multiple Inline Files
A command can create more than one inline file.  
  
## Syntax  
  
```  
  
      command << <<  
inlinetext  
<<[KEEP | NOKEEP]  
inlinetext  
<<[KEEP | NOKEEP]  
```  
  
## Remarks  
 For each file, specify one or more lines of inline text followed by a closing line containing the delimiter. Begin the second file's text on the line following the delimiting line for the first file.  
  
## See Also  
 [Inline Files in a Makefile](../VS_visualcpp/Inline-Files-in-a-Makefile.md)