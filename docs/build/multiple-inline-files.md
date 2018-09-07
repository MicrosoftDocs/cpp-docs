---
title: "Multiple Inline Files | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["inline files, multiple NMAKE", "multiple inline files", "NMAKE program, inline files"]
ms.assetid: 6d381dcf-0ed8-45d1-8df3-b4598d860b99
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
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
 [Inline Files in a Makefile](../build/inline-files-in-a-makefile.md)