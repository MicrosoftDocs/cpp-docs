---
title: "Linker Tools Error LNK1181 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK1181"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1181"
ms.assetid: 984b0db6-e331-4284-b2a7-a212fe96c486
caps.latest.revision: 10
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
# Linker Tools Error LNK1181
cannot open input file 'filename'  
  
 The linker could not find `filename` because it does not exist or the path was not found.  
  
 Some common causes for error LNK1181 include:  
  
-   `filename` is referenced as an additional dependency on the linker line, but the file does not exist.  
  
-   A **/LIBPATH** statement that specifies the directory containing `filename` is missing.  
  
 To resolve the above issues, ensure any files referenced on the linker line are present on the system.  Also ensure there is a **/LIBPATH** statement for each directory containing a linker-dependent file.  
  
 Another possible cause for LNK1181 is that a long file name with embedded spaces was not enclosed in quotation marks.  In that case, the linker will only recognize a file name up to the first space, and then assume a file extension of .obj.  The solution to this situation is to enclose the long file name (path plus file name) in quotation marks.  
  
 For more information, see [.lib Files as Linker Input](../../build/reference/dot-lib-files-as-linker-input.md).  
  
## See Also  
 [/LIBPATH (Additional Libpath)](../../build/reference/libpath-additional-libpath.md)