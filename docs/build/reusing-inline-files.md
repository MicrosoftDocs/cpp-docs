---
title: "Reusing Inline Files | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp-tools"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "inline files, reusing NMAKE"
  - "revising inline files"
  - "NMAKE program, inline files"
ms.assetid: d42dbffb-2cef-4ccb-9a1f-20b8ef81481c
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: 
  - "cplusplus"
---
# Reusing Inline Files
To reuse an inline file, specify <<*filename* where the file is defined and first used, then reuse *filename* without << later in the same or another command. The command to create the inline file must run before all commands that use the file.  
  
## See Also  
 [Inline Files in a Makefile](../build/inline-files-in-a-makefile.md)