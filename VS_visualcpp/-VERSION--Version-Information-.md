---
title: "-VERSION (Version Information)"
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
H1: /VERSION (Version Information)
ms.assetid: b86d0e86-dca6-4316-aee2-d863ccb9f223
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
# -VERSION (Version Information)
```  
/VERSION:major[.minor]  
```  
  
## Remarks  
 where:  
  
 *major*and *minor*  
 The version number you want in the header of the .exe or .dll file.  
  
## Remarks  
 The /VERSION option tells the linker to put a version number in the header of the .exe or .dll file. Use DUMPBIN [/HEADERS](../VS_visualcpp/-HEADERS.md) to see the image version field of the OPTIONAL HEADER VALUES to see the effect of /VERSION.  
  
 The *major* and *minor* arguments are decimal numbers in the range 0 through 65,535. The default is version 0.0.  
  
 The information specified with /VERSION does not affect the version information that appears for an application when you view its properties in File Explorer. That version information comes from a resource file that is used to build the application. See [Version Information Editor](../VS_visualcpp/Version-Information-Editor.md) for more information.  
  
 Another way to insert a version number is with the [VERSION](../VS_visualcpp/VERSION--C-C---.md) module-definition statement.  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../VS_visualcpp/Working-with-Project-Properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **General** property page.  
  
4.  Modify the **Version** property.  
  
### To set this linker option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.Version?qualifyHint=False>.  
  
## See Also  
 [Setting Linker Options](../VS_visualcpp/Setting-Linker-Options.md)   
 [Linker Options](../VS_visualcpp/Linker-Options.md)