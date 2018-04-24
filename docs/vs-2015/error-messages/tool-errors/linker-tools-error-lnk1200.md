---
title: "Linker Tools Error LNK1200 | Microsoft Docs"
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
  - "LNK1200"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1200"
ms.assetid: 55771145-915e-4006-ac6c-ac702041eb2f
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Linker Tools Error LNK1200
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Linker Tools Error LNK1200](https://docs.microsoft.com/cpp/error-messages/tool-errors/linker-tools-error-lnk1200).  
  
  
error reading program database 'filename'  
  
 The program database (PDB) could not be read.  
  
 This error can be caused by file corruption.  
  
 If `filename` is the PDB for an object file, recompile the object file using [/Zi](../../build/reference/z7-zi-zi-debug-information-format.md).  
  
 If `filename` is the PDB for the main output file, and this error occurred during an incremental link, delete the PDB and relink.

