---
title: "-INCLUDE (Force Symbol References) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["/include", "VC.Project.VCLinkerTool.ForceSymbolReferences"]
dev_langs: ["C++"]
helpviewer_keywords: ["INCLUDE linker option", "force symbol references linker option", "symbol references linker force", "/INCLUDE linker option", "symbols, add to symbol table", "-INCLUDE linker option"]
ms.assetid: 4a039677-360a-480f-bd0b-448e239b449c
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# /INCLUDE (Force Symbol References)
```  
/INCLUDE:symbol  
```  
  
## Remarks  
 where:  
  
 `symbol`  
 Specifies a symbol to be added to the symbol table.  
  
## Remarks  
 The /INCLUDE option tells the linker to add a specified symbol to the symbol table.  
  
 To specify multiple symbols, type a comma (,), a semicolon (;), or a space between the symbol names. On the command line, specify /INCLUDE:`symbol` once for each symbol.  
  
 The linker resolves `symbol` by adding the object that contains the symbol definition to the program. This feature is useful for including a library object that otherwise would not be linked to the program.  
  
 Specifying a symbol with this option overrides the removal of that symbol by [/OPT:REF](../../build/reference/opt-optimizations.md).  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **Input** property page.  
  
4.  Modify the **Force Symbol References** property.  
  
### To set this linker option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ForceSymbolReferences%2A>.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)