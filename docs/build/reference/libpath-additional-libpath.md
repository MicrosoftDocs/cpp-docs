---
title: "-LIBPATH (Additional Libpath) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["/libpath", "VC.Project.VCLinkerTool.AdditionalLibraryDirectories"]
dev_langs: ["C++"]
helpviewer_keywords: ["LIBPATH linker option", "/LIBPATH linker option", "Additional Libpath linker option", "environment library path override", "-LIBPATH linker option", "library path linker option"]
ms.assetid: 7240af0b-9a3d-4d53-8169-2a92cd6958ba
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# /LIBPATH (Additional Libpath)
```  
/LIBPATH:dir  
```  
  
## Parameters
  
*dir*<br/>
Specifies a path that the linker will search before it searches the path specified in the LIB environment option.  
  
## Remarks  
 Use the /LIBPATH option to override the environment library path. The linker will first search in the path specified by this option, and then search in the path specified in the LIB environment variable. You can specify only one directory for each /LIBPATH option you enter. If you want to specify more than one directory, you must specify multiple /LIBPATH options. The linker will then search the specified directories in order.  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **General** property page.  
  
4.  Modify the **Additional Library Directories** property.  
  
### To set this linker option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalLibraryDirectories%2A>.  
  
## See Also  
[Setting Linker Options](../../build/reference/setting-linker-options.md)<br/>
[Linker Options](../../build/reference/linker-options.md)