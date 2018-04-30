---
title: "Creating Inline File Text | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["inline files, creating text", "NMAKE program, inline files", "text, inline file"]
ms.assetid: b8a332ed-8244-4ff8-89e6-029d7f659725
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
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