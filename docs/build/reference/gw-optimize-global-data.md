---
title: "-Gw (Optimize Global Data) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/Gw"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Gw compiler option [C++]"
  - "-Gw compiler option [C++]"
ms.assetid: 6f90f4e9-5eb8-4c47-886e-631278a5a4a9
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# /Gw (Optimize Global Data)
Package global data in COMDAT sections for optimization.  
  
## Syntax  
  
```  
/Gw[-]  
```  
  
## Remarks  
 The **/Gw** option causes the compiler to package global data in individual COMDAT sections. By default, **/Gw** is off and must be explicitly enabled. To explicitly disable it, use **/Gw-**. When both **/Gw** and [/GL](../../build/reference/gl-whole-program-optimization.md) are enabled, the linker uses whole-program optimization to compare COMDAT sections across multiple object files in order to exclude unreferenced global data or to merge identical read-only global data. This can significantly reduce the size of the resulting binary executable.  
  
 When you compile and link separately, you can use the [/OPT:REF](../../build/reference/opt-optimizations.md) linker option to exclude from the executable the unreferenced global data in object files compiled with the **/Gw** option.  
  
 You can also use the [/OPT:ICF](../../build/reference/opt-optimizations.md) and [/LTCG](../../build/reference/ltcg-link-time-code-generation.md) linker options together to merge in the executable any identical read-only global data across multiple object files compiled with the **/Gw** option.  
  
 For more information, see [Introducing /Gw Compiler Switch](http://blogs.msdn.com/b/vcblog/archive/2013/09/11/introducing-gw-compiler-switch.aspx) on the Visual C++ Team Blog.  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Select the **C/C++** folder.  
  
3.  Select the **Command Line** property page.  
  
4.  Modify the **Additional Options** property to include **/Gw** and then choose **OK**.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## See Also  
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)