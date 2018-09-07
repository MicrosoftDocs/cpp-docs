---
title: "-FIXED (Fixed Base Address) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["/fixed", "VC.Project.VCLinkerTool.FixedBaseAddress"]
dev_langs: ["C++"]
helpviewer_keywords: ["preferred base address for loading program", "/FIXED linker option", "-FIXED linker option", "FIXED linker option"]
ms.assetid: 929bba5e-b7d8-40ed-943e-056aa3710fc5
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# /FIXED (Fixed Base Address)
```  
/FIXED[:NO]  
```  
  
## Remarks  
 Tells the operating system to load the program only at its preferred base address. If the preferred base address is unavailable, the operating system does not load the file. For more information, see [/BASE (Base Address)](../../build/reference/base-base-address.md).  
  
 /FIXED:NO is the default setting for a DLL, and /FIXED is the default setting for any other project type.  
  
 When /FIXED is specified, LINK does not generate a relocation section in the program. At run time, if the operating system is unable to load the program at the specified address, it issues an error message and does not load the program.  
  
 Specify /FIXED:NO to generate a relocation section in the program.  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Select the **Linker** folder.  
  
3.  Select the **Command Line** property page.  
  
4.  Type the option name and setting in the **Additional Options** box.  
  
### To set this linker option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)