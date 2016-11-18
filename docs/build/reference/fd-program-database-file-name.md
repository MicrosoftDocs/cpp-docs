---
title: "-Fd (Program Database File Name) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/FD"
  - "VC.Project.VCCLWCECompilerTool.ProgramDataBaseFileName"
  - "VC.Project.VCCLCompilerTool.ProgramDataBaseFileName"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/FD compiler option [C++]"
  - "program database file name [C++]"
  - "-FD compiler option [C++]"
  - "PDB files, creating"
  - "program database compiler option [C++]"
  - ".pdb files, creating"
  - "FD compiler option [C++]"
ms.assetid: 3977a9ed-f0ac-45df-bf06-01cedd2ba85a
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
# /Fd (Program Database File Name)
Specifies a file name for the program database (PDB) file created by [/Z7, /Zi, /ZI (Debug Information Format)](../../build/reference/z7-zi-zi-debug-information-format.md).  
  
## Syntax  
  
```  
/Fdpathname  
```  
  
## Remarks  
 Without **/Fd**, the PDB file name defaults to VC`x`0.pdb., where `x` is the major version of Visual C++ in use.  
  
 If you specify a path name that does not include a file name (the path ends in backslash), the compiler creates a .pdb file named VC`x`0.pdb. in the specified directory.  
  
 If you specify a file name that does not include an extension, the compiler uses .pdb as the extension.  
  
 This option also names the state (.idb) file used for minimal rebuild and incremental compilation.  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Output Files** property page.  
  
4.  Modify the **Program Database File Name** property.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ProgramDataBaseFileName%2A>.  
  
## Example  
 This command line creates a .pdb file named PROG.pdb and an .idb file named PROG.idb:  
  
```  
CL /DDEBUG /Zi /FdPROG.PDB PROG.CPP  
```  
  
## See Also  
 [Output-File (/F) Options](../../build/reference/output-file-f-options.md)   
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)   
 [Specifying the Pathname](../../build/reference/specifying-the-pathname.md)