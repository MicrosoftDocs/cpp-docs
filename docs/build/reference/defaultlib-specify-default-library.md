---
title: "-DEFAULTLIB (Specify Default Library) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["VC.Project.VCLinkerTool.DefaultLibraries", "/defaultlib"]
dev_langs: ["C++"]
helpviewer_keywords: ["-DEFAULTLIB linker option", "DEFAULTLIB linker option", "/DEFAULTLIB linker option", "libraries, adding to list of"]
ms.assetid: 6af7ff49-c170-4a13-97e2-2b9ae2de20c9
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# /DEFAULTLIB (Specify Default Library)
```  
/DEFAULTLIB:library  
```  
  
## Remarks  
 where:  
  
 *library*  
 The name of a library to search when resolving external references.  
  
## Remarks  
 The /DEFAULTLIB option adds one *library* to the list of libraries that LINK searches when resolving references. A library specified with /DEFAULTLIB is searched after libraries specified on the command line and before default libraries named in .obj files.  
  
 The [Ignore All Default Libraries](../../build/reference/nodefaultlib-ignore-libraries.md) (/NODEFAULTLIB) option overrides /DEFAULTLIB:*library*. The [Ignore Libraries](../../build/reference/nodefaultlib-ignore-libraries.md) (/NODEFAULTLIB:*library*) option overrides /DEFAULTLIB:*library* when the same *library* name is specified in both.  
  
### To set this linker option in the Visual Studio development environment  
  
-   This linker option is not available from the Visual Studio development environment. To add a library to the link phase, use the **Additional Dependencies** property from the **Input** property page.  
  
### To set this linker option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)