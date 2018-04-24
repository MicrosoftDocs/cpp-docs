---
title: "Reusing Inline Files | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "inline files, reusing NMAKE"
  - "revising inline files"
  - "NMAKE program, inline files"
ms.assetid: d42dbffb-2cef-4ccb-9a1f-20b8ef81481c
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Reusing Inline Files
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Reusing Inline Files](https://docs.microsoft.com/cpp/build/reusing-inline-files).  
  
  
To reuse an inline file, specify <<*filename* where the file is defined and first used, then reuse *filename* without << later in the same or another command. The command to create the inline file must run before all commands that use the file.  
  
## See Also  
 [Inline Files in a Makefile](../build/inline-files-in-a-makefile.md)

