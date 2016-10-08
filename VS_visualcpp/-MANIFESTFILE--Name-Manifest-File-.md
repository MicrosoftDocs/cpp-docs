---
title: "-MANIFESTFILE (Name Manifest File)"
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
H1: /MANIFESTFILE (Name Manifest File)
ms.assetid: befa5ab2-a9cf-4c9b-969a-e7b4a930f08d
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
# -MANIFESTFILE (Name Manifest File)
```  
/MANIFESTFILE:filename  
```  
  
## Remarks  
 /MANIFESTFILE lets you change the default name of the manifest file.  The default name of the manifest file is the file name with .manifest appended.  
  
 /MANIFESTFILE will have no effect if you do not also link with [/MANIFEST](../VS_visualcpp/-MANIFEST--Create-Side-by-Side-Assembly-Manifest-.md).  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [How to: Open Project Property Pages](../Topic/How%20to:%20Open%20Project%20Property%20Pages.md).  
  
2.  Expand the **Configuration Properties** node.  
  
3.  Expand the **Linker** node.  
  
4.  Select the **Manifest File** property page.  
  
5.  Modify the **Manifest File** property.  
  
### To set this linker option programmatically  
  
1.  See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ManifestFile?qualifyHint=False>.  
  
## See Also  
 [Setting Linker Options](../VS_visualcpp/Setting-Linker-Options.md)   
 [Linker Options](../VS_visualcpp/Linker-Options.md)