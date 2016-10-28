---
title: "-FORCE (Force File Output)"
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
  - "VC.Project.VCLinkerTool.ForceLink"
  - "/force"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "FORCE linker option"
  - "file output in linker"
  - "/FORCE linker option"
  - "-FORCE linker option"
ms.assetid: b1e9a218-a5eb-4e60-a4a4-65b4be15e5da
caps.latest.revision: 9
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
# /FORCE (Force File Output)
```  
/FORCE:[MULTIPLE|UNRESOLVED]  
```  
  
## Remarks  
 The /FORCE option tells the linker to create a valid .exe file or DLL even if a symbol is referenced but not defined or is multiply defined.  
  
 The /FORCE option can take an optional argument:  
  
-   Use /FORCE:MULTIPLE to create an output file whether or not LINK finds more than one definition for a symbol.  
  
-   Use /FORCE:UNRESOLVED to create an output file whether or not LINK finds an undefined symbol. /FORCE:UNRESOLVED is ignored if the entry point symbol is unresolved.  
  
 /FORCE with no arguments implies both multiple and unresolved.  
  
 A file created with this option may not run as expected. The linker will not link incrementally when the /FORCE option is specified.  
  
 If a module is compiled with **/clr**, **/FORCE** will not create an image.  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../ide/working-with-project-properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **Command Line** property page.  
  
4.  Type the option into the **Additional Options** box.  
  
### To set this linker option programmatically  
  
-   See \<xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions*>.  
  
## See Also  
 [Setting Linker Options](../buildref/setting-linker-options.md)   
 [Linker Options](../buildref/linker-options.md)