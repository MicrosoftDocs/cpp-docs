---
title: "-MAPINFO (Include Information in Mapfile)"
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
H1: /MAPINFO (Include Information in Mapfile)
ms.assetid: 533d2bce-f9b7-4fea-ae1c-0b4864c9d10b
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
# -MAPINFO (Include Information in Mapfile)
```  
/MAPINFO:EXPORTS  
```  
  
## Remarks  
 The /MAPINFO option tells the linker to include the specified information in a mapfile, which is created if you specify the [/MAP](../VS_visualcpp/-MAP--Generate-Mapfile-.md) option.  EXPORTS tells the linker to include exported functions.  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../VS_visualcpp/Working-with-Project-Properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **Debug** property page.  
  
4.  Modify of the **Map Exports** properties:  
  
### To set this linker option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.MapExports?qualifyHint=False>.  
  
## See Also  
 [Setting Linker Options](../VS_visualcpp/Setting-Linker-Options.md)   
 [Linker Options](../VS_visualcpp/Linker-Options.md)