---
title: "-Ge (Enable Stack Probes) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp-tools"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/ge"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "-Ge compiler option [C++]"
  - "enable stack probes"
  - "/Ge compiler option [C++]"
  - "stack, stack probes"
  - "stack probes"
  - "stack checking calls"
  - "Ge compiler option [C++]"
ms.assetid: 4b54deae-4e3c-4bfa-95f3-ba23590f7258
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: 
  - "cplusplus"
---
# /Ge (Enable Stack Probes)
Activates stack probes for every function call that requires storage for local variables.  
  
## Syntax  
  
```  
/Ge  
```  
  
## Remarks  
 This mechanism is useful if you rewrite the functionality of the stack probe. It is recommended that you use [/Gh (Enable _penter Hook Function)](../../build/reference/gh-enable-penter-hook-function.md) instead of rewriting the stack probe.  
  
 [/Gs (Control Stack Checking Calls)](../../build/reference/gs-control-stack-checking-calls.md) has the same effect.  
  
 **/Ge** is deprecated; beginning in Visual Studio 2005, the compiler automatically generates stack checking. For a list of deprecated compiler options, see **Deprecated and Removed Compiler Options** in [Compiler Options Listed by Category](../../build/reference/compiler-options-listed-by-category.md).  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Command Line** property page.  
  
4.  Type the compiler option in the **Additional Options** box.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## See Also  
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)