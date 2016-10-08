---
title: "-RELEASE (Set the Checksum)"
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
H1: /RELEASE (Set the Checksum)
ms.assetid: 93bcadf4-29ac-4824-914b-6997e3751d22
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
# -RELEASE (Set the Checksum)
```  
/RELEASE  
```  
  
## Remarks  
 The /RELEASE option sets the Checksum in the header of an .exe file.  
  
 The operating system requires the Checksum for device drivers. Set the Checksum for release versions of your device drivers to ensure compatibility with future operating systems.  
  
 The /RELEASE option is set by default when the [/SUBSYSTEM:NATIVE](../VS_visualcpp/-SUBSYSTEM--Specify-Subsystem-.md) option is specified.  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../VS_visualcpp/Working-with-Project-Properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **Advanced** property page.  
  
4.  Modify the **Set Checksum** property.  
  
### To set this linker option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.SetChecksum?qualifyHint=False>.  
  
## See Also  
 [Setting Linker Options](../VS_visualcpp/Setting-Linker-Options.md)   
 [Linker Options](../VS_visualcpp/Linker-Options.md)