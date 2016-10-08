---
title: "-NOLOGO (Suppress Startup Banner) (Linker)"
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
H1: /NOLOGO (Suppress Startup Banner) (Linker)
ms.assetid: 3b20dddd-eca6-4545-a331-9f70bf720197
caps.latest.revision: 7
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
# -NOLOGO (Suppress Startup Banner) (Linker)
```  
/NOLOGO  
```  
  
## Remarks  
 The /NOLOGO option prevents display of the copyright message and version number.  
  
 This option also suppresses echoing of command files. For details, see [LINK Command Files](../VS_visualcpp/LINK-Command-Files.md).  
  
 By default, this information is sent by the linker to the Output window. On the command line, it is sent to standard output and can be redirected to a file.  
  
### To set this linker option in the Visual Studio development environment  
  
1.  This option should only be used from the command line.  
  
### To set this linker option programmatically  
  
1.  This linker option cannot be changed programmatically.  
  
## See Also  
 [Setting Linker Options](../VS_visualcpp/Setting-Linker-Options.md)   
 [Linker Options](../VS_visualcpp/Linker-Options.md)