---
title: "-ALLOWBIND (Prevent DLL Binding) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["VC.Project.VCLinkerTool.PreventDLLBinding", "/allowbind"]
dev_langs: ["C++"]
helpviewer_keywords: ["/ALLOWBIND linker option", "binding DLLs", "preventing DLL binding", "ALLOWBIND linker option", "-ALLOWBIND linker option", "DLLs [C++], preventing binding"]
ms.assetid: 30e37e24-12e4-407e-988a-39d357403598
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# /ALLOWBIND (Prevent DLL Binding)
```  
/ALLOWBIND[:NO]  
```  
  
## Remarks  
 /ALLOWBIND:NO sets a bit in a DLL's header that indicates to Bind.exe that the image is not allowed to be bound. You may not want a DLL to be bound if it has been digitally signed (binding invalidates the signature).  
  
 You can edit an existing DLL for /ALLOWBIND functionality with the [/ALLOWBIND](../../build/reference/allowbind.md) option of the EDITBIN utility.  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Expand **Configuration Properties**, **Linker**, and select **Command Line**.  
  
3.  Enter `/ALLOWBIND:NO` into **Additional Options**.  
  
### To set this linker option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)   
 [BindImage function](/windows/desktop/api/imagehlp/nf-imagehlp-bindimage)   
 [BindImageEx function](/windows/desktop/api/imagehlp/nf-imagehlp-bindimageex)