---
title: "-I (Additional Include Directories) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCCLWCECompilerTool.AdditionalIncludeDirectories"
  - "VC.Project.VCCLCompilerTool.AdditionalIncludeDirectories"
  - "/I"
  - "VC.Project.VCNMakeTool.IncludeSearchPath"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/I compiler option [C++]"
  - "Additional Include Directories compiler option"
  - "I compiler option [C++]"
  - "-I compiler option [C++]"
  - "set include directories"
  - "include directories, compiler option [C++]"
ms.assetid: 3e9add2a-5ed8-4d15-ad79-5b411e313a49
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /I (Additional Include Directories)
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [-I (Additional Include Directories)](https://docs.microsoft.com/cpp/build/reference/i-additional-include-directories).  
  
  
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
  
 You can use this option with the Ignore Standard Include Paths ([/X (Ignore Standard Include Paths)](../../build/reference/x-ignore-standard-include-paths.md)) option.  
  
 The compiler searches for directories in the following order:  
  
1.  Directories containing the source file.  
  
2.  Directories specified with the **/I** option, in the order that CL encounters them.  
  
3.  Directories specified in the **INCLUDE** environment variable.  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [How to: Open Project Property Pages](../../misc/how-to-open-project-property-pages.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **General** property page.  
  
4.  Modify the **Additional Include Directories** property.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalIncludeDirectories%2A>.  
  
## Example  
 The following command looks for the include files requested by MAIN.c in the following order: first in the directory containing MAIN.c, then in the \INCLUDE directory, then in the \MY\INCLUDE directory, and finally in the directories assigned to the INCLUDE environment variable.  
  
```  
CL /I \INCLUDE /I\MY\INCLUDE MAIN.C  
```  
  
## See Also  
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)

