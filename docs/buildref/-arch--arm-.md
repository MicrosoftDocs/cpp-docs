---
title: "-arch (ARM)"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 4f1406ff-f174-487c-a126-8ab06cf447c1
caps.latest.revision: 5
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
# /arch (ARM)
Specifies the architecture for code generation on ARM. See also [/arch (x86)](../buildref/-arch--x86-.md) and [/arch (x64)](../buildref/-arch--x64-.md).  
  
## Syntax  
  
```  
/arch:[ARMv7VE|VFPv4]  
```  
  
## Arguments  
 **/arch:ARMv7VE**  
 Enables the use of ARMv7VE Virtualization Extensions instructions.  
  
 **/arch:VFPv4**  
 Enables the use of ARM VFPv4 instructions. If this option is not specified, VFPv3 is the default.  
  
## Remarks  
 The `_M_ARM_FP` macro (for ARM only) indicates which, if any, **/arch** compiler option was used. For more information, see [Predefined Macros](../c/predefined-macros.md).  
  
 When you use [/clr](../buildref/-clr--common-language-runtime-compilation-.md) to compile, **/arch** has no effect on code generation for managed functions. **/arch** only affects code generation for native functions.  
  
### To set the /arch:ARMv7VE or /arch:VFPv4 compiler option in Visual Studio  
  
1.  Open the **Property Pages** dialog box for the project. For more information, see [How to: Open Project Property Pages](../notintoc/how-to--open-project-property-pages.md).  
  
2.  Select the **C/C++** folder.  
  
3.  Select the **Command Line** property page.  
  
4.  In the **Additional options** box, add `/arch:ARMv7VE` or `/arch:VFPv4`.  
  
### To set this compiler option programmatically  
  
-   See \<xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.EnableEnhancedInstructionSet*>.  
  
## See Also  
 [/arch (Minimum CPU Architecture)](../buildref/-arch--minimum-cpu-architecture-.md)   
 [Compiler Options](../buildref/compiler-options.md)   
 [Setting Compiler Options](../buildref/setting-compiler-options.md)