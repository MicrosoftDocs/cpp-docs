---
title: "-I (Additional Include Directories)"
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
H1: /I (Additional Include Directories)
ms.assetid: 3e9add2a-5ed8-4d15-ad79-5b411e313a49
caps.latest.revision: 11
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
# -I (Additional Include Directories)
Adds a directory to the list of directories searched for include files.  
  
## Syntax  
  
```  
/I[ ]directory  
```  
  
## Arguments  
 `directory`  
 The directory to be added to the list of directories searched for include files.  
  
## Remarks  
 To add more than one directory, use this option more than once. Directories are searched only until the specified include file is found.  
  
 You can use this option with the Ignore Standard Include Paths ([/X (Ignore Standard Include Paths)](../VS_visualcpp/-X--Ignore-Standard-Include-Paths-.md)) option.  
  
 The compiler searches for directories in the following order:  
  
1.  Directories containing the source file.  
  
2.  Directories specified with the **/I** option, in the order that CL encounters them.  
  
3.  Directories specified in the **INCLUDE** environment variable.  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [How to: Open Project Property Pages](../Topic/How%20to:%20Open%20Project%20Property%20Pages.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **General** property page.  
  
4.  Modify the **Additional Include Directories** property.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalIncludeDirectories?qualifyHint=False>.  
  
## Example  
 The following command looks for the include files requested by MAIN.c in the following order: first in the directory containing MAIN.c, then in the \INCLUDE directory, then in the \MY\INCLUDE directory, and finally in the directories assigned to the INCLUDE environment variable.  
  
```  
CL /I \INCLUDE /I\MY\INCLUDE MAIN.C  
```  
  
## See Also  
 [Compiler Options](../VS_visualcpp/Compiler-Options.md)   
 [Setting Compiler Options](../VS_visualcpp/Setting-Compiler-Options.md)