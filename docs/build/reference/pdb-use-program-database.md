---
title: "-PDB (Use Program Database) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["/pdb", "VC.Project.VCLinkerTool.ProgramDatabaseFile"]
dev_langs: ["C++"]
helpviewer_keywords: ["-PDB linker option", "/PDB linker option", "PDB linker option", "PDB files, creating", ".pdb files, creating"]
ms.assetid: d23db0ce-10cb-427a-bc60-d6b2a852723d
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# /PDB (Use Program Database)
```  
/PDB:filename  
```  
  
## Remarks  
 where:  
  
*filename*<br/>
A user-specified name for the program database (PDB) that the linker creates. It replaces the default name.  
  
## Remarks  
 By default, when [/DEBUG](../../build/reference/debug-generate-debug-info.md) is specified, the linker creates a program database (PDB) which holds debugging information. The default file name for the PDB has the base name of the program and the extension .pdb.  
  
 Use /PDB:*filename* to specify the name of the PDB file. If /DEBUG is not specified, the /PDB option is ignored.  
  
 A PDB file can be up to 2GB.  
  
 For more information, see [.pdb Files as Linker Input](../../build/reference/dot-pdb-files-as-linker-input.md).  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **Debug** property page.  
  
4.  Modify the **Generate Program Database File** property.  
  
### To set this linker option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ProgramDatabaseFile%2A>.  
  
## See Also  
[Setting Linker Options](../../build/reference/setting-linker-options.md)<br/>
[Linker Options](../../build/reference/linker-options.md)