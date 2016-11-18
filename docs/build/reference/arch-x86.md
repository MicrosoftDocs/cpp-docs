---
title: "-arch (x86) | Microsoft Docs"
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
ms.assetid: 9dd5a75d-06e4-4674-aade-33228486078d
caps.latest.revision: 33
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
# /arch (x86)
Specifies the architecture for code generation on x86. Also see [/arch (x64)](../../build/reference/arch-x64.md) and [/arch (ARM)](../../build/reference/arch-arm.md).  
  
## Syntax  
  
```  
/arch:[IA32|SSE|SSE2|AVX|AVX2]  
```  
  
## Arguments  
 **/arch:IA32**  
 Specifies no enhanced instructions and also specifies x87 for floating-point calculations.  
  
 **/arch:SSE**  
 Enables the use of SSE instructions.  
  
 **/arch:SSE2**  
 Enables the use of SSE2 instructions. This is the default instruction on x86 platforms if no **/arch** option is specified.  
  
 **/arch:AVX**  
 Enables the use of Intel Advanced Vector Extensions instructions.  
  
 **/arch:AVX2**  
 Enables the use of Intel Advanced Vector Extensions 2 instructions.  
  
## Remarks  
 The SSE and SSE2 instructions exist on various Intel and AMD processors. The AVX instructions exist on Intel Sandy Bridge processors and AMD Bulldozer processors. AVX2 instructions are supported by Intel Haswell and Broadwell processors and AMD Excavator-based processors.  
  
 The `_M_IX86_FP`, `__AVX__` and `__AVX2__` macros indicate which, if any, **/arch** compiler option was used. For more information, see [Predefined Macros](../../preprocessor/predefined-macros.md). The **/arch:AVX2** option and `__AVX2__` macro were introduced in Visual Studio 2013 Update 2, version 12.0.34567.1.  
  
 The optimizer chooses when and how to use the SSE and SSE2 instructions when **/arch** is specified. It uses SSE and SSE2 instructions for some scalar floating-point computations when it determines that it is faster to use the SSE/SSE2 instructions and registers instead of the x87 floating-point register stack. As a result, your code may actually use a mixture of both x87 and SSE/SSE2 for floating-point computations. Also, with **/arch:SSE2**, SSE2 instructions can be used for some 64-bit integer operations.  
  
 In addition to using the SSE and SSE2 instructions, the compiler also uses other instructions that are present on the processor revisions that support SSE and SSE2. An example is the CMOV instruction that first appeared on the Pentium Pro revision of the Intel processors.  
  
 Because the x86 compiler generates code that uses SSE2 instructions by default, you must specify **/arch:IA32** to disable generation of SSE and SSE2 instructions for x86 processors.  
  
 **/arch** only affects code generation for native functions. When you use [/clr](../../build/reference/clr-common-language-runtime-compilation.md) to compile, **/arch** has no effect on code generation for managed functions.  
  
 **/arch** and [/QIfist](../../build/reference/qifist-suppress-ftol.md) cannot be used on the same compiland. In particular, if you do not use `_controlfp` to modify the FP control word, then the run-time startup code sets the x87 FPU control word precision-control field to 53-bits. Therefore, every float and double operation in an expression uses a 53-bit significand and a 15-bit exponent. However, every SSE single-precision operation uses a 24-bit significand and an 8-bit exponent, and SSE2 double-precision operations use a 53-bit significand and an 11-bit exponent. For more information, see [_control87, _controlfp, \__control87_2](../../c-runtime-library/reference/control87-controlfp-control87-2.md). These differences are possible in one expression tree, but not in cases where a user assignment is involved after each subexpression. Consider the following:  
  
```c  
  
r = f1 * f2 + d;  // Different results are possible on SSE/SSE2.  
```  
  
 Against:  
  
```c  
  
t = f1 * f2;   // Do f1 * f2, round to the type of t.  
r = t + d;     // This should produce the same overall result   
               // whether x87 stack is used or SSE/SSE2 is used.  
```  
  
### To set this compiler option for AVX, AVX2, IA32, SSE, or SSE2 in Visual Studio  
  
1.  Open the **Property Pages** dialog box for the project. For more information, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Select the **Configuration Properties**, **C/C++** folder.  
  
3.  Select the **Code Generation** property page.  
  
4.  Modify the **Enable Enhanced Instruction Set** property.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.EnableEnhancedInstructionSet%2A>.  
  
## See Also  
 [/arch (Minimum CPU Architecture)](../../build/reference/arch-minimum-cpu-architecture.md)   
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)