---
title: "-Fm (Name Mapfile)"
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
H1: /Fm (Name Mapfile)
ms.assetid: 8154448a-93a7-4546-8e4c-5c44d0aff45d
caps.latest.revision: 12
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
# -Fm (Name Mapfile)
Tells the linker to produce a mapfile containing a list of segments in the order in which they appear in the corresponding .exe file or DLL.  
  
## Syntax  
  
```  
/Fmpathname  
```  
  
## Remarks  
 By default, the mapfile is given the base name of the corresponding C or C++ source file with a .MAP extension.  
  
 Specifying **/Fm** has the same effect as if you had specified the [/MAP (Generate Mapfile)](../VS_visualcpp/-MAP--Generate-Mapfile-.md) linker option.  
  
 If you specify [/c (Compile Without Linking)](../VS_visualcpp/-c--Compile-Without-Linking-.md) to suppress linking, **/Fm** has no effect.  
  
 Global symbols in a mapfile usually have one or more leading underscores because the compiler adds a leading underscore to variable names. Many global symbols that appear in the mapfile are used internally by the compiler and the standard libraries.  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [How to: Open Project Property Pages](../Topic/How%20to:%20Open%20Project%20Property%20Pages.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Command Line** property page.  
  
4.  Type the compiler option in the **Additional Options** box.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions?qualifyHint=False>.  
  
## See Also  
 [Output-File (/F) Options](../VS_visualcpp/Output-File---F--Options.md)   
 [Compiler Options](../VS_visualcpp/Compiler-Options.md)   
 [Setting Compiler Options](../VS_visualcpp/Setting-Compiler-Options.md)   
 [Specifying the Pathname](../VS_visualcpp/Specifying-the-Pathname.md)