---
title: "Linker Tools Error LNK1200 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
# Linker Tools Error LNK1200
error reading program database 'filename'  
  
 The program database (PDB) could not be read.  
  
 This error can be caused by file corruption.  
  
 If `filename` is the PDB for an object file, recompile the object file using [/Zi](../../build/reference/z7-zi-zi-debug-information-format.md).  
  
 If `filename` is the PDB for the main output file, and this error occurred during an incremental link, delete the PDB and relink.