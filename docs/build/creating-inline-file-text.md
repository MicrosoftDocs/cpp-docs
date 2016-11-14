---
title: "Creating Inline File Text | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "inline files, creating text"
  - "NMAKE program, inline files"
  - "text, inline file"
ms.assetid: b8a332ed-8244-4ff8-89e6-029d7f659725
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Creating Inline File Text
Inline files are temporary or permanent.  
  
## Syntax  
  
```  
  
      inlinetext  
.  
.  
.  
<<[KEEP | NOKEEP]  
```  
  
## Remarks  
 Specify *inlinetext* on the first line after the command. Mark the end with double angle brackets (<<) at the beginning of a separate line. The file contains all *inlinetext* before the delimiting brackets. The *inlinetext* can have macro expansions and substitutions, but not directives or makefile comments. Spaces, tabs, and newline characters are treated literally.  
  
 A temporary file exists for the duration of the session and can be reused by other commands. Specify **KEEP** after the closing angle brackets to retain the file after the NMAKE session; an unnamed file is preserved on disk with the generated filename. Specify **NOKEEP** or nothing for a temporary file. **KEEP** and **NOKEEP** are not case sensitive.  
  
## See Also  
 [Inline Files in a Makefile](../build/inline-files-in-a-makefile.md)