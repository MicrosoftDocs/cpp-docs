---
title: "-AI (Specify Metadata Directories)"
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
H1: /AI (Specify Metadata Directories)
ms.assetid: fb9c1846-504c-4a3b-bb39-c8696de32f6f
caps.latest.revision: 13
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
# -AI (Specify Metadata Directories)
Specifies a directory that the compiler will search to resolve file references passed to the `#using` directive.  
  
## Syntax  
  
```  
/AIdirectory  
```  
  
## Arguments  
 `directory`  
 The directory or path for the compiler to search.  
  
## Remarks  
 Only one directory can be passed to an **/AI** invocation. Specify one **/AI** option for each path you want the compiler to search. For example, to add both C:\Project\Meta and C:\Common\Meta to the compiler search path for `#using` directives, add `/AI"C:\Project\Meta" /AI"C:\Common\Meta"` to the compiler command line or add each directory to the **Additional #using Directories** property in Visual Studio.  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [How to: Open Project Property Pages](../Topic/How%20to:%20Open%20Project%20Property%20Pages.md).  
  
2.  In the navigation pane, select **Configuration Properties**, **C/C++**, **General**.  
  
3.  Modify the **Additional #using Directories** property.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalUsingDirectories?qualifyHint=False>.  
  
## See Also  
 [Compiler Options](../VS_visualcpp/Compiler-Options.md)   
 [Setting Compiler Options](../VS_visualcpp/Setting-Compiler-Options.md)   
 [#using Directive](../VS_visualcpp/#using-Directive--C---.md)