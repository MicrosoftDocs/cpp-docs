---
title: "-PDB (Use Program Database)"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
H1: /PDB (Use Program Database)
ms.assetid: d23db0ce-10cb-427a-bc60-d6b2a852723d
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# -PDB (Use Program Database)
```  
/PDB:filename  
```  
  
## Remarks  
 where:  
  
 *filename*  
 A user-specified name for the program database (PDB) that the linker creates. It replaces the default name.  
  
## Remarks  
 By default, when [/DEBUG](../VS_visualcpp/-DEBUG--Generate-Debug-Info-.md) is specified, the linker creates a program database (PDB) which holds debugging information. The default file name for the PDB has the base name of the program and the extension .pdb.  
  
 Use /PDB:*filename* to specify the name of the PDB file. If /DEBUG is not specified, the /PDB option is ignored.  
  
 A PDB file can be up to 2GB.  
  
 For more information, see [.pdb Files as Linker Input](../VS_visualcpp/.Pdb-Files-as-Linker-Input.md).  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../VS_visualcpp/Working-with-Project-Properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **Debug** property page.  
  
4.  Modify the **Generate Program Database File** property.  
  
### To set this linker option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ProgramDatabaseFile?qualifyHint=False>.  
  
## See Also  
 [Setting Linker Options](../VS_visualcpp/Setting-Linker-Options.md)   
 [Linker Options](../VS_visualcpp/Linker-Options.md)