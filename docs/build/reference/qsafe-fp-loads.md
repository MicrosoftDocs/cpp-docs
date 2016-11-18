---
title: "-Qsafe_fp_loads | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 2b2ce52d-ba57-4bd3-a739-47a7f8bfaba9
caps.latest.revision: 9
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
# /Qsafe_fp_loads
Requires integer move instructions for floating-point values and disables certain floating-point load optimizations.  
  
## Syntax  
  
```  
/Qsafe_fp_loads  
```  
  
## Remarks  
 **/Qsafe_fp_loads** is only available in the compilers that target x86; it is not available in the compilers that target x64 or ARM.  
  
 **/Qsafe_fp_loads** forces the compiler to use integer move instructions instead of floating-point move instructions to move data between memory and MMX registers. This option also disables register load optimization for floating-point values that can be loaded in multiple control paths when the value may cause an exception on load—for example, a NaN value.  
  
 This option is overridden by [/fp:except](../../build/reference/fp-specify-floating-point-behavior.md). **/Qsafe_fp_loads** specifies a subset of the compiler behavior that's specified by **/fp:except**.  
  
 **/Qsafe_fp_loads** is incompatible with [/clr](../../build/reference/clr-common-language-runtime-compilation.md) and [/fp:fast](../../build/reference/fp-specify-floating-point-behavior.md). For more information about floating point compiler options, see [/fp (Specify Floating-Point Behavior)](../../build/reference/fp-specify-floating-point-behavior.md).  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Select the **C/C++** folder.  
  
3.  Select the **Command Line** property page.  
  
4.  Type the compiler option in the **Additional Options** box.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## See Also  
 [/Q Options (Low-Level Operations)](../../build/reference/q-options-low-level-operations.md)   
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)