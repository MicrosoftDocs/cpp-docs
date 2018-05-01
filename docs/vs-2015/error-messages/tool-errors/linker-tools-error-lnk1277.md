---
title: "Linker Tools Error LNK1277 | Microsoft Docs"
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
  - "LNK1277"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1277"
ms.assetid: afca3de0-50cc-4140-af7a-13493a170835
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Linker Tools Error LNK1277
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Linker Tools Error LNK1277](https://docs.microsoft.com/cpp/error-messages/tool-errors/linker-tools-error-lnk1277).  
  
  
object record not found in pgd (filename)  
  
 When using [/LTCG:PGOPTIMZE](../../build/reference/ltcg-link-time-code-generation.md), the path of one of the input .lib, def, or .obj files was different from the path on which they were found during /LTCG:PGINSTRUMENT. This may be explained by a change in the LIB environment variable after /LTCG:PGINSTRUMENT. The full path to the input files is stored in the .pgd file.  
  
 /LTCG:PGOPTIMIZE requires that the inputs be identical to the /LTCG:PGINSTRUMENT phase.  
  
 To resolve this warning, do one of the following:  
  
-   Run /LTCG:PGINSTRUMENT, redo all test runs, and run /LTCG:PGOPTIMIZE.  
  
-   Change the LIB environment variable to what it was when you ran /LTCG:PGINSTRUMENT.  
  
 It is not recommended that you work around LNK1277 by using /LTCG:PGUPDATE.

