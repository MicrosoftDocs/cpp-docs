---
title: "-NOENTRY (No Entry Point)"
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
H1: /NOENTRY (No Entry Point)
ms.assetid: 0214dd41-35ad-43ab-b892-e636e038621a
caps.latest.revision: 11
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
# -NOENTRY (No Entry Point)
```  
/NOENTRY  
```  
  
## Remarks  
 The /NOENTRY option is required for creating a resource-only DLL that contains no executable code. For more information, see [Creating a Resource-Only DLL](../VS_visualcpp/Creating-a-Resource-Only-DLL.md).  
  
 Use this option to prevent LINK from linking a reference to `_main` into the DLL.  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../VS_visualcpp/Working-with-Project-Properties.md).  
  
2.  Select the **Linker** folder.  
  
3.  Select the **Advanced** property page.  
  
4.  Modify the **No Entry Point** property.  
  
### To set this linker option programmatically  
  
1.  See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ResourceOnlyDLL?qualifyHint=False>.  
  
## See Also  
 [Creating a Resource-Only DLL](../VS_visualcpp/Creating-a-Resource-Only-DLL.md)   
 [Setting Linker Options](../VS_visualcpp/Setting-Linker-Options.md)   
 [Linker Options](../VS_visualcpp/Linker-Options.md)