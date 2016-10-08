---
title: "-STUB (MS-DOS Stub File Name)"
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
H1: /STUB (MS-DOS Stub File Name)
ms.assetid: 65221ffe-4f9a-4a14-ac69-3cfb79b40b5f
caps.latest.revision: 9
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
# -STUB (MS-DOS Stub File Name)
```  
/STUB:filename  
```  
  
## Remarks  
 where:  
  
 *filename*  
 An MS-DOS application.  
  
## Remarks  
 The /STUB option attaches an MS-DOS stub program to a Win32 program.  
  
 A stub program is invoked if the file is executed in MS-DOS. It usually displays an appropriate message; however, any valid MS-DOS application can be a stub program.  
  
 Specify a *filename* for the stub program after a colon (:) on the command line. The linker checks *filename* and issues an error message if the file is not an executable. The program must be an .exe file; a .com file is invalid for a stub program.  
  
 If this option is not used, the linker attaches a default stub program that issues the following message:  
  
```  
This program cannot be run in MS-DOS mode.  
```  
  
 When building a virtual device driver, *filename* allows the user to specify a file name that contains an IMAGE_DOS_HEADER structure (defined in WINNT.H) to be used in the VXD, rather than the default header.  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../VS_visualcpp/Working-with-Project-Properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **Command Line** property page.  
  
4.  Type the option into the **Additional Options** box.  
  
### To set this linker option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions?qualifyHint=False>.  
  
## See Also  
 [Setting Linker Options](../VS_visualcpp/Setting-Linker-Options.md)   
 [Linker Options](../VS_visualcpp/Linker-Options.md)