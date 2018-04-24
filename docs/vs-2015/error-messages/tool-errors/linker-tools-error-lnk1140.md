---
title: "Linker Tools Error LNK1140 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK1140"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1140"
ms.assetid: 468d7651-a7cd-47b9-aead-5bb2fab56121
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Linker Tools Error LNK1140
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Linker Tools Error LNK1140](https://docs.microsoft.com/cpp/error-messages/tool-errors/linker-tools-error-lnk1140).  
  
  
too many modules for program database; link with /PDB:NONE  
  
 The project contains more than 4096 modules.  
  
### To fix by using the following possible solutions  
  
1.  Relink using [/PDB:NONE](../../build/reference/pdb-use-program-database.md).  
  
2.  Compile some modules without debugging information.  
  
3.  Reduce the number of modules.

