---
title: "-DEF (Specify Module-Definition File)"
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
H1: /DEF (Specify Module-Definition File)
ms.assetid: 6497fa68-65f0-48ca-8f66-b87166fc631a
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
# -DEF (Specify Module-Definition File)
```  
/DEF:filename  
```  
  
## Remarks  
 where:  
  
 *filename*  
 The name of a module-definition file (.def) to be passed to the linker.  
  
## Remarks  
 The /DEF option passes a module-definition file (.def) to the linker. Only one .def file can be specified to LINK. For details about .def files, see [Module-Definition Files](../VS_visualcpp/Module-Definition--.Def--Files.md).  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../VS_visualcpp/Working-with-Project-Properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **Input** property page.  
  
4.  Modify the **Module Definition File** property.  
  
 To specify a .def file from within the development environment, you should add it to the project along with other files and then specify the file to the /DEF option.  
  
### To set this linker option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ModuleDefinitionFile?qualifyHint=False>.  
  
## See Also  
 [Setting Linker Options](../VS_visualcpp/Setting-Linker-Options.md)   
 [Linker Options](../VS_visualcpp/Linker-Options.md)