---
title: "-Fx (Merge Injected Code) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["VC.Project.VCCLWCECompilerTool.ExpandAttributedSource", "/Fx", "VC.Project.VCCLCompilerTool.ExpandAttributedSource"]
dev_langs: ["C++"]
helpviewer_keywords: ["Fx compiler option [C++]", "-Fx compiler option [C++]", "injected code", "merging injected code", "/Fx compiler option [C++]"]
ms.assetid: 14f0e301-3bab-45a3-bbdf-e7ce66f20560
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# /Fx (Merge Injected Code)
Produces a copy of each source file with injected code merged into the source.  
  
## Syntax  
  
```  
/Fx  
```  
  
## Remarks  
 To distinguish a merged source file from an original source file, **/Fx** adds an .mrg extension between the file name and file extension. For example, a file named MyCode.cpp containing attributed code and built with **/Fx** creates a file named MyCode.mrg.cpp containing the following code:  
  
```  
//+++ Start Injected Code  
[no_injected_text(true)];      // Suppress injected text, it has   
                               // already been injected  
#pragma warning(disable: 4543) // Suppress warnings about skipping   
                               // injected text  
#pragma warning(disable: 4199) // Suppress warnings from attribute   
                               // providers  
//--- End Injected Code  
```  
  
 In an .mrg file, code that was injected because of an attribute will be delimited as follows:  
  
```  
//+++ Start Injected Code  
...  
//--- End Injected Code  
```  
  
 The [no_injected_text](../../windows/no-injected-text.md) attribute is embedded in an .mrg file, which allows for the compilation of the .mrg file without text being reinjected.  
  
 You should be aware that the .mrg source file is intended to be a representation of the source code injected by the compiler. The .mrg file may not compile or run exactly as the original source file.  
  
 Macros are not expanded in the .mrg file.  
  
 If your program includes a header file that uses injected code, **/Fx** generates an .mrg.h file for that header. **/Fx** does not merge include files that do not use injected code.  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Output Files** property page.  
  
4.  Modify the **Expand Attributed Source** property.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ExpandAttributedSource%2A>.  
  
## See Also  
 [Output-File (/F) Options](../../build/reference/output-file-f-options.md)   
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)