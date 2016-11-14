---
title: ".Pdb Files as Linker Input | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - ".pdb files, as linker input"
  - "PDB files, as linker input"
ms.assetid: c1071478-2369-4b03-9df8-71761cf82f3b
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
# .Pdb Files as Linker Input
Object (.obj) files compiled using the /Zi option contain the name of a program database (PDB). You do not specify the object's PDB file name to the linker; LINK uses the embedded name to find the PDB if it is needed. This also applies to debuggable objects contained in a library; the PDB for a debuggable library must be available to the linker along with the library.  
  
 LINK also uses a PDB to hold debugging information for the .exe file or the .dll file. The program's PDB is both an output file and an input file, because LINK updates the PDB when it rebuilds the program.  
  
## See Also  
 [LINK Input Files](../../build/reference/link-input-files.md)   
 [Linker Options](../../build/reference/linker-options.md)