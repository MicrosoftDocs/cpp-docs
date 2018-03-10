---
title: "-FUNCTIONPADMIN (Create Hotpatchable Image) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["/functionpadmin"]
dev_langs: ["C++"]
helpviewer_keywords: ["-FUNCTIONPADMIN linker option", "/FUNCTIONPADMIN linker option"]
ms.assetid: 25b02c13-1add-4fbd-add9-fcb30eb2cae7
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# /FUNCTIONPADMIN (Create Hotpatchable Image)
Prepares an image for hotpatching.  
  
## Syntax  
  
```  
/FUNCTIONPADMIN[:space]  
```  
  
## Remarks  
 `space` (optional)  
 The amount of padding to add to the beginning of each function in bytes. On x86 this will default to 5 bytes of padding and on x64 this will default to 6 bytes. On other targets a value must be provided.

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
