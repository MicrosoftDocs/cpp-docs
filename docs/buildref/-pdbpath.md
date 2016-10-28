---
title: "-PDBPATH"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "/pdbpath"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - ".pdb files, path"
  - "-PDBPATH dumpbin option"
  - "/PDBPATH dumpbin option"
  - "PDBPATH dumpbin option"
  - "PDB files, path"
ms.assetid: ccf67dcd-0b23-4250-ad47-06c48acbe82b
caps.latest.revision: 8
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
# /PDBPATH
```  
/PDBPATH[:VERBOSE] filename  
```  
  
## Remarks  
 where:  
  
 *filename*  
 The name of the .dll or .exe file for which you want to find the matching .pdb file.  
  
 VERBOSE (optional)  
 Reports all directories where an attempt was made to locate the .pdb file.  
  
## Remarks  
 /PDBPATH will search your computer along the same paths that the debugger would search for a .pdb file and will report which, if any, .pdb files correspond to the file specified in *filename*.  
  
 When using the Visual Studio debugger, you may experience a problem due to the fact that the debugger is using a .pdb file for a different version of the file you are debugging.  
  
 /PDBPATH will search for .pdb files along the following paths:  
  
-   Check the location where the executable resides.  
  
-   Check the location of the PDB written into the executable. This is usually the location at the time the image was linked.  
  
-   Check along the search path configured in the Visual Studio IDE.  
  
-   Check along the paths in the _NT_SYMBOL_PATH and _NT_ALT_SYMBOL_PATH environment variables.  
  
-   Check in the Windows directory.  
  
## See Also  
 [DUMPBIN Options](../buildref/dumpbin-options.md)   
 [/PDBALTPATH (Use Alternate PDB Path)](../buildref/-pdbaltpath--use-alternate-pdb-path-.md)