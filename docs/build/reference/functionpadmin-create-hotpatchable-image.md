---
title: "-FUNCTIONPADMIN (Create Hotpatchable Image) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/functionpadmin"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "-FUNCTIONPADMIN linker option"
  - "/FUNCTIONPADMIN linker option"
ms.assetid: 25b02c13-1add-4fbd-add9-fcb30eb2cae7
caps.latest.revision: 11
author: "corob-msft"
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
# /FUNCTIONPADMIN (Create Hotpatchable Image)
Prepares an image for hotpatching.  
  
## Syntax  
  
```  
/FUNCTIONPADMIN[:space]  
```  
  
## Remarks  
 where,  
  
 `space` (optional)  
 The amount of padding to add to the beginning of each function, 5, 6, or 16.  x86 images require five bytes of padding, x64 images require 6 bytes, and images built for the Itanium Processor Family require 16 bytes of padding at the beginning of each function.  
  
 By default, the compiler will add the correct amount of space to the image, based on the machine type of the image.  
  
 In order for the linker to produce a hotpatchable image, the .obj files must have been compiled with [/hotpatch (Create Hotpatchable Image)](../../build/reference/hotpatch-create-hotpatchable-image.md).  
  
 When you compile and link an image with a single invocation of cl.exe, **/hotpatch** implies **/functionpadmin**.  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **Command Line** property page.  
  
4.  Type the option into the **Additional Options** box.  
  
### To set this linker option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)