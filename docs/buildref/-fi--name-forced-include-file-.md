---
title: "-FI (Name Forced Include File)"
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
caps.latest.revision: 10
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
# /FI (Name Forced Include File)
Causes the preprocessor to process the specified header file.  
  
## Syntax  
  
```  
/FI[ ]pathname  
```  
  
## Remarks  
 This option has the same effect as specifying the file with double quotation marks in an `#include` directive on the first line of every source file specified on the command line, in the CL environment variable, or in a command file. If you use multiple **/FI** options, files are included in the order they are processed by CL.  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [How to: Open Project Property Pages](../notintoc/how-to--open-project-property-pages.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Advanced** property page.  
  
4.  Modify the **Force Includes** property.  
  
### To set this compiler option programmatically  
  
-   See \<xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ForcedIncludeFiles*>.  
  
## See Also  
 [Output-File (/F) Options](../buildref/output-file---f--options.md)   
 [Compiler Options](../buildref/compiler-options.md)   
 [Setting Compiler Options](../buildref/setting-compiler-options.md)   
 [Specifying the Pathname](../buildref/specifying-the-pathname.md)