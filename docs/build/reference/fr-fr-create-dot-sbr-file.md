---
title: "-FR, -Fr (Create .Sbr File) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCCLWCECompilerTool.BrowseInformation"
  - "VC.Project.VCCLCompilerTool.BrowseInformation"
  - "/fr"
  - "VC.Project.VCCLCompilerTool.BrowseInformationFile"
  - "VC.Project.VCCLWCECompilerTool.BrowseInformationFile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/FR compiler option [C++]"
  - "-FR compiler option [C++]"
  - "FR compiler option [C++]"
  - "symbolic browser information"
ms.assetid: 3fd8f88b-3924-4feb-9393-287036a28896
caps.latest.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# /FR, /Fr (Create .Sbr File)
Creates .sbr files.  
  
## Syntax  
  
```  
/FR[pathname[\filename]]  
/Fr[pathname[\filename]]  
```  
  
## Remarks  
 During the build process, the Microsoft Browse Information File Maintenance Utility (BSCMAKE) uses these files to create a .BSC file, which is used to display browse information.  
  
 **/FR** creates an .sbr file with complete symbolic information.  
  
 **/Fr** creates an .sbr file without information on local variables.  
  
 If you do not specify `filename`, the .sbr file gets the same base name as the source file.  
  
 **/Fr** is deprecated; use **/FR** instead. For more information, see Deprecated and Removed Compiler Options in [Compiler Options Listed by Category](../../build/reference/compiler-options-listed-by-category.md).  
  
> [!NOTE]
>  Do not change the .sbr extension. BSCMAKE requires the intermediary files to have that extension.  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  In the navigation pane, choose the **C/C++**, **Browse Information** property page.  
  
3.  Modify the **Browse Information File** or **Enable Browse Information** property.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.BrowseInformation%2A> and <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.BrowseInformationFile%2A>.  
  
## See Also  
 [Output-File (/F) Options](../../build/reference/output-file-f-options.md)   
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)   
 [Specifying the Pathname](../../build/reference/specifying-the-pathname.md)