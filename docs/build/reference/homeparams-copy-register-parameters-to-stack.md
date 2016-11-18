---
title: "-homeparams (Copy Register Parameters to Stack) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/homeparams"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/homeparams compiler option [C++]"
  - "-homeparams compiler option [C++]"
ms.assetid: 51067de4-24f7-436b-b8d9-bc867a7d53aa
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
# /homeparams (Copy Register Parameters to Stack)
Forces parameters passed in registers to be written to their locations on the stack upon function entry.  
  
## Syntax  
  
```  
/homeparams  
```  
  
## Remarks  
 This compiler option is only for the [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)] compilers (native and cross compile).  
  
 When parameters are passed in an [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)] compilation, calling conventions require stackspace for parameters, even for parameters passed in registers. For more information, see [Parameter Passing](../../build/parameter-passing.md). However, by default in a release build, the register parameters will not be written to the stack, into the space that is already provided for the parameters. This makes it difficult to debug an optimized (release) build of your program.  
  
 For a release build, use **/homeparams** to ensure that you can debug your application. **/homeparams** does imply a performance disadvantage, because it does require a cycle to load the register parameters on to the stack.  
  
 In a debug build, the stack is always populated with parameters passed in registers.  
  
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