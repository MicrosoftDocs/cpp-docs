---
title: "-PDBSTRIPPED (Strip Private Symbols) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/pdbstripped"
  - "VC.Project.VCLinkerTool.StripPrivateSymbols"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/PDBSTRIPPED linker option"
  - "-PDBSTRIPPED linker option"
  - ".pdb files, stripping private symbols"
  - "PDB files, stripping private symbols"
  - "PDBSTRIPPED linker option"
ms.assetid: 9b9e0070-6a13-4142-8180-19c003fbbd55
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
# /PDBSTRIPPED (Strip Private Symbols)
```  
/PDBSTRIPPED:pdb_file_name  
```  
  
## Remarks  
 where:  
  
 *pdb_file_name*  
 A user-specified name for the stripped program database (PDB) that the linker creates.  
  
## Remarks  
 The /PDBSTRIPPED option creates a second program database (PDB) file when you build your program image with any of the compiler or linker options that generate a PDB file ([/DEBUG](../../build/reference/debug-generate-debug-info.md), [/Z7](../../build/reference/z7-zi-zi-debug-information-format.md), /Zd, or /Zi). This second PDB file omits symbols that you would not want to ship to your customers. The second PDB file will only contain:  
  
-   Public symbols  
  
-   The list of object files and the portions of the executable to which they contribute  
  
-   Frame pointer optimization (FPO) debug records used to traverse the stack  
  
 The stripped PDB file will not contain:  
  
-   Type information  
  
-   Line number information  
  
-   Per-object file CodeView symbols such as those for functions, locals, and static data  
  
 The full PDB file will still be generated when you use /PDBSTRIPPED.  
  
 If you do not create a PDB file, /PDBSTRIPPED is ignored.  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **Debug** property page.  
  
4.  Modify the **Strip Private Symbols** property.  
  
### To set this linker option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.StripPrivateSymbols%2A>.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)