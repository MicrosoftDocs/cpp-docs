---
title: "-LIBPATH (Additional Libpath)"
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
H1: /LIBPATH (Additional Libpath)
ms.assetid: 7240af0b-9a3d-4d53-8169-2a92cd6958ba
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
# -LIBPATH (Additional Libpath)
```  
/LIBPATH:dir  
```  
  
## Remarks  
 where:  
  
 `dir`  
 Specifies a path that the linker will search before it searches the path specified in the LIB environment option.  
  
## Remarks  
 Use the /LIBPATH option to override the environment library path. The linker will first search in the path specified by this option, and then search in the path specified in the LIB environment variable. You can specify only one directory for each /LIBPATH option you enter. If you want to specify more than one directory, you must specify multiple /LIBPATH options. The linker will then search the specified directories in order.  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../VS_visualcpp/Working-with-Project-Properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **General** property page.  
  
4.  Modify the **Additional Library Directories** property.  
  
### To set this linker option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalLibraryDirectories?qualifyHint=False>.  
  
## See Also  
 [Setting Linker Options](../VS_visualcpp/Setting-Linker-Options.md)   
 [Linker Options](../VS_visualcpp/Linker-Options.md)