---
title: "Linker Tools Error LNK1277 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
caps.latest.revision: 7
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
# Linker Tools Error LNK1277
object record not found in pgd (filename)  
  
 When using [/LTCG:PGOPTIMZE](../../build/reference/ltcg-link-time-code-generation.md), the path of one of the input .lib, def, or .obj files was different from the path on which they were found during /LTCG:PGINSTRUMENT. This may be explained by a change in the LIB environment variable after /LTCG:PGINSTRUMENT. The full path to the input files is stored in the .pgd file.  
  
 /LTCG:PGOPTIMIZE requires that the inputs be identical to the /LTCG:PGINSTRUMENT phase.  
  
 To resolve this warning, do one of the following:  
  
-   Run /LTCG:PGINSTRUMENT, redo all test runs, and run /LTCG:PGOPTIMIZE.  
  
-   Change the LIB environment variable to what it was when you ran /LTCG:PGINSTRUMENT.  
  
 It is not recommended that you work around LNK1277 by using /LTCG:PGUPDATE.