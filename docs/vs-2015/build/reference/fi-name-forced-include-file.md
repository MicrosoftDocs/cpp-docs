---
title: "-FI (Name Forced Include File) | Microsoft Docs"
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
  - "VC.Project.VCNMakeTool.ForcedIncludes"
  - "VC.Project.VCCLCompilerTool.ForcedIncludeFiles"
  - "VC.Project.VCCLWCECompilerTool.ForcedIncludeFiles"
  - "/fi"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "FI compiler option [C++]"
  - "-FI compiler option [C++]"
  - "/FI compiler option [C++]"
  - "preprocess header file compiler option [C++]"
ms.assetid: 07e79577-8152-4df9-a64c-aae08c603397
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /FI (Name Forced Include File)
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [-FI (Name Forced Include File)](https://docs.microsoft.com/cpp/build/reference/fi-name-forced-include-file).  
  
  
Causes the preprocessor to process the specified header file.  
  
## Syntax  
  
```  
/FI[ ]pathname  
```  
  
## Remarks  
 This option has the same effect as specifying the file with double quotation marks in an `#include` directive on the first line of every source file specified on the command line, in the CL environment variable, or in a command file. If you use multiple **/FI** options, files are included in the order they are processed by CL.  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [How to: Open Project Property Pages](../../misc/how-to-open-project-property-pages.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Advanced** property page.  
  
4.  Modify the **Force Includes** property.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ForcedIncludeFiles%2A>.  
  
## See Also  
 [Output-File (/F) Options](../../build/reference/output-file-f-options.md)   
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)   
 [Specifying the Pathname](../../build/reference/specifying-the-pathname.md)

