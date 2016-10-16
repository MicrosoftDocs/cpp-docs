---
title: "-NOLOGO (Suppress Startup Banner) (Linker)"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCLinkerTool.SuppressStartupBanner"
  - "/nologo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "suppress startup banner linker option"
  - "-NOLOGO linker option"
  - "/NOLOGO linker option"
  - "copyright message"
  - "version numbers, preventing linker display"
  - "banners, suppressing startup"
  - "NOLOGO linker option"
ms.assetid: 3b20dddd-eca6-4545-a331-9f70bf720197
caps.latest.revision: 7
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# /NOLOGO (Suppress Startup Banner) (Linker)
```  
/NOLOGO  
```  
  
## Remarks  
 The /NOLOGO option prevents display of the copyright message and version number.  
  
 This option also suppresses echoing of command files. For details, see [LINK Command Files](../buildref/link-command-files.md).  
  
 By default, this information is sent by the linker to the Output window. On the command line, it is sent to standard output and can be redirected to a file.  
  
### To set this linker option in the Visual Studio development environment  
  
1.  This option should only be used from the command line.  
  
### To set this linker option programmatically  
  
1.  This linker option cannot be changed programmatically.  
  
## See Also  
 [Setting Linker Options](../buildref/setting-linker-options.md)   
 [Linker Options](../buildref/linker-options.md)