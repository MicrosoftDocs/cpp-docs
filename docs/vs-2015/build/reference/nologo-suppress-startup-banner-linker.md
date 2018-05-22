---
title: "-NOLOGO (Suppress Startup Banner) (Linker) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
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
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /NOLOGO (Suppress Startup Banner) (Linker)
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [-NOLOGO (Suppress Startup Banner) (Linker)](https://docs.microsoft.com/cpp/build/reference/nologo-suppress-startup-banner-linker).  
  
  
NOLOGO  
```  
  
## Remarks  
 The /NOLOGO option prevents display of the copyright message and version number.  
  
 This option also suppresses echoing of command files. For details, see [LINK Command Files](../../build/reference/link-command-files.md).  
  
 By default, this information is sent by the linker to the Output window. On the command line, it is sent to standard output and can be redirected to a file.  
  
### To set this linker option in the Visual Studio development environment  
  
1.  This option should only be used from the command line.  
  
### To set this linker option programmatically  
  
1.  This linker option cannot be changed programmatically.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)

