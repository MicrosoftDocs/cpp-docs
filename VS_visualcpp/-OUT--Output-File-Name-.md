---
title: "-OUT (Output File Name)"
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
H1: /OUT (Output File Name)
ms.assetid: 976210a4-e51f-4cfb-af5e-c16344455834
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
# -OUT (Output File Name)
```  
/OUT:filename  
```  
  
## Remarks  
 where:  
  
 *filename*  
 A user-specified name for the output file. It replaces the default name.  
  
## Remarks  
 The /OUT option overrides the default name and location of the program that the linker creates.  
  
 By default, the linker forms the file name using the base name of the first .obj file specified and the appropriate extension (.exe or .dll).  
  
 This option the default base name for a .mapfile or import library. For details, see [Generate Mapfile](../VS_visualcpp/-MAP--Generate-Mapfile-.md) (/MAP) and [/IMPLIB](../VS_visualcpp/-IMPLIB--Name-Import-Library-.md).  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../VS_visualcpp/Working-with-Project-Properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **General** property page.  
  
4.  Modify the **Output File** property.  
  
### To set this linker option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.OutputFile?qualifyHint=False>.  
  
## See Also  
 [Setting Linker Options](../VS_visualcpp/Setting-Linker-Options.md)   
 [Linker Options](../VS_visualcpp/Linker-Options.md)